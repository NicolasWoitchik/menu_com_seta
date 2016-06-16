#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

#define MOVE_CIMA 72
#define MOVE_BAIXO 80
#define MOVE_DIREITA 77
#define ESQ 27
#define ENTER 13


void cursor(COORD coord,char c) {
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("%c", c);
}

int main(){
	COORD cr;
	cr.X = 10;
	cr.Y = 1;
	char ch;
		system("cls");
		printf("----------------------------------------------------------------\n");
		printf("%c                          PRIMEIRA LINHA                      %c\n",186,186);
		printf("%c                           SEGUNDA LINHA                      %c\n",186,186);
		printf("%c                          TERCEIRA LINHA                      %c\n",186,186);
		printf("----------------------------------------------------------------\n");
		cursor(cr,254);
	do{
		if (_kbhit()){
			ch = _getch(); 
			switch (ch)
			{
			case MOVE_CIMA:
				if(cr.Y>1){
					cursor(cr,' ');
					cr.Y--;
					cursor(cr,254);
				}else{
					cursor(cr,' ');
					cr.Y=3;
					cursor(cr,254);
				}
			break;
			case MOVE_BAIXO:
				if(cr.Y<3){					
					cursor(cr,' ');
					cr.Y++;
					cursor(cr,254);
				}else{
					cursor(cr,' ');
					cr.Y=1;
					cursor(cr,254);
				}
			break;
			case ENTER:
				if(cr.Y == 1){
					cr.Y = 10;
					cursor(cr,' ');
					printf("PRIMEIRA OPCAO");
					cr.Y = 1;
					cursor(cr,254);
				}else if(cr.Y ==2){
					cr.Y = 10;
					cursor(cr,' ');
					printf("SEGUNDA OPCAO");
					cr.Y = 2;
					cursor(cr,254);
				}else if(cr.Y ==3){
					cr.Y = 10;
					cursor(cr,' ');
					printf("TERCEIRA OPCAO");
					cr.Y = 3;
					cursor(cr,254);
				}
			break;
			case MOVE_DIREITA:
				if(cr.Y == 1){
					cr.Y = 10;
					cursor(cr,' ');
					printf("PRIMEIRA OPCAO");
					cr.Y = 1;
					cursor(cr,254);
				}else if(cr.Y ==2){
					cr.Y = 10;
					cursor(cr,' ');
					printf("SEGUNDA OPCAO");
					cr.Y = 2;
					cursor(cr,254);
				}else if(cr.Y ==3){
					cr.Y = 10;
					cursor(cr,' ');
					printf("TERCEIRA OPCAO");
					cr.Y = 3;
					cursor(cr,254);
				}
			break;
			}
		}
	}while(ch!=ESQ);
	return(0);
}
