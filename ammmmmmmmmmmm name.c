#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 char compare(char user, char pc);
int main(int argc, char *argv[]) {
	int i=0;
	char user;
	int answerc;
    char pc;
    char x;
    int countd=0;
    int countw=0;
    int countl=0;
    
    srand(time(NULL));
	
	for(i=0;i<=5;i++){
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
			printf("\nInsert R for Rock or S for Scissors or P for Paper\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			scanf(" %c", &user);
			
		}while(user!='R' && user!='S' && user!='P');
		answerc=(rand()%3 +1);
		if(answerc==1){
			pc='R';
		}else if(answerc==2){
			pc='S';
		}else if(answerc==3){
			pc='P';
		}
	
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("\nuser %c \n",user);
		printf("pc %c \n",pc);
		

		x=compare(user,pc);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		if(x=='d'){
			countd++;
		}else if(x=='w'){
			countw++;
		}else if(x=='l'){
			countl++;
		}
	}
	system("cls");
	printf("Your final score\n");
	printf("----------------------------\n");
	printf("Number of wins %d\n",countd);
	printf("Number of losses %d\n", countl);
	printf("Number of draws %d\n", countd);
	return 0;
}
char compare(char user,char pc){

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	char x;
	if((user=='R'&& pc=='R') || (user=='S'&& pc=='S') || (user=='P'&& pc=='P')){
		
		printf("\nIts a draw\n");
		x='d';
	}else if((user=='R'&& pc=='S') || (user=='S'&& pc=='P') || (user=='P' && pc=='R')){
		printf("\nUser wins\n");
		x='w';
	}else if((user=='S'&& pc=='R')|| (user=='P'&& pc=='S') || (user=='R'&& pc=='P')){
		printf("\nPc wins\n");
		x='l';
	}
	return x;
}
