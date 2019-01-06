#include <stdio.h>

void password(char username[5],char c_pass[5]){
	int x = rand()%2;
	c_pass[0] = x*'J' + (1-x)*'j';
	c_pass[1] = x*'o' + (1-x)*'O';
	c_pass[2] = x*'H' + (1-x)*'h';
	c_pass[3] = x*'n' + (1-x)*'N';
	c_pass[4] = '\n';
}

void login(char username[5]){
	char user[5];
	char pass[5];
	char c_pass[5];
	
	scanf("%s",user);
	while(strcmp(username,user)!=0){
		printf("Wrong Username.\n");
		scanf("%s",user);
	}
	printf("Please give me the password:\n");
	
	scanf("%s",pass);
	password(username,c_pass);
	while(strcmp(pass,c_pass)!=0){
		printf("Wrong Password.\n");
		scanf("%s",pass);
	}
}

void Add(int meals[100][4][20], int *count_meals){
	getchar();
	scanf("%[^\n]s",meals[*count_meals][0]);
	scanf("%d",&meals[*count_meals][1][0]);
	float time;
	int hours;
	int minutes;
	do{
		scanf("%f",&time);
		hours = (int) time;
		minutes= ((int) time*100)%100;
		if()
	}while(1)
	
	
}


int main(){
	
	char choice[7];
	char username[5] = {'J','o','h','n','\0'};
	
	login(username);
	
	printf("Welcome. Please select what yo want to do:\n");
	/*
	do{
		scanf("%s",choice);
		if (strcmp(choice,"Add")==0) Add(meals,&count_meals);
		else if (strcmp(choice,"View")==0) View(meals,count_meals);
		else if (strcmp(choice,"Modify")==0) Modify(meals,count_meals);
		else if (strcmp(choice,"Search")==0) Search(meals,count_meals);
		else if (strcmp(choice,"Sort")==0) Sort(meals,count_meals);		
		else if (strcmp(choice,"Exit")==0) break;
	} while(1);
	*/
	
	return 0;
}
