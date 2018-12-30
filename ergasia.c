#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct meal {
	char food[30];
	int calories;
	float time;
	int type;
};

void get_type(struct meal x) {
	     if (x.type == 1) printf("prwino\n");
	else if (x.type == 2) printf("mesimeriano\n");
	else if (x.type == 3) printf("vradino\n");
}

int login(char *username);
void add(struct meal x[100], int *count_meals);


int main(int argc, char *argv[]) {
	char *username = "john";
	char choice[7];
	int count_meals=0;

	struct meal meals[100];
	/*
	while(!login(username)){
		printf("Try again.\n");
	}
	*/

	printf("Welcome!. Choose what you want: Add, Modify, View,Search, Sort or Exit \n");
	do {
		scanf("%s",choice);
		if(strcmp(choice,"Add")!=0    &&
		        strcmp(choice,"Modify")!=0 &&
		        strcmp(choice,"View")!=0   &&
		        strcmp(choice,"Search")!=0 &&
		        strcmp(choice,"Sort")!=0   &&
		        strcmp(choice,"Exit")!=0     ) {
			printf("Invalid choice. Please write again what you want");
		}
	} while(strcmp(choice,"Add")!=0 && strcmp(choice,"Modify")!=0 && strcmp(choice,"View")!=0 &&strcmp(choice,"Search")!=0 && strcmp(choice,"Sort")!=0 && strcmp(choice,"Exit")!=0);

	if(strcmp(choice,"Add")==0) {
		int y;
		for(y=0; y<1;y++) add(meals,&count_meals);
	}
	
	view(meals,count_meals);
	
	return 0;
}
void add(struct meal x[100], int *count_meals) {
	printf("Please enter the food, and hit enter:\n");

	int count = 0;
	char current;
	
	getchar();
	
	do {
		scanf("%c",&current);
		x[*count_meals].food[count++] = current;
	} while(current != '\n');

		printf("Please give me the calories and time associated with your meal:\n");
		scanf("%d%f", &x[*count_meals].calories,
		      &x[*count_meals].time);

	if (5.00  <= x[*count_meals].time && x[*count_meals].time < 12.00) x[*count_meals].type = 1;
	else if (12.00 <= x[*count_meals].time && x[*count_meals].time < 20.00) x[*count_meals].type = 2;
	else if (20.00 <= x[*count_meals].time || x[*count_meals].time <  5.00) x[*count_meals].type = 3;
	else printf("Invalid Input.\n");

	(*count_meals)++;
}

void view(struct meal x[100],int count_meals) {
	int i;
	for(i=0; i<count_meals; i++) {
		int count = 0;
		while( x[i].food[count]!= '\n' ) printf("%c",x[i].food[count++]);

		printf(" // Calories:%d // Time:%.2f // ", x[i].calories, x[i].time);
		get_type(x[i]);
	}
}
