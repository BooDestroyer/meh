#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char filo;
	char product[11];
	char size;
	float price=0;
	char payment[6];
	int number;
	int modulus;
	int count=0;
	do {
		printf("welcome to the store!\nplease enter your sex:\n");
		scanf(" %c", &filo);
	} while(filo!='M' && filo!='F');
	do {

		printf("please select what you would like to buy, we have tops bottoms and accessories\n");
		scanf("%s", product);
	} while(strcmp(product,"Tops")!=0 && strcmp(product,"Bottoms")!=0 && strcmp(product,"Accessories")!=0);
		do {

			printf("Our available sizes are Small,Medium and Large.\n which one would you like to buy?\n");
			scanf(" %c", &size);
		} while(size!='S'&& size!='M' && size!='L');
//printf("%c", size);
	if(filo=='M') {
		if(strcmp(product,"Tops")==0) {
			price=5.99;
			printf("Your product is Top and the price is %.2f\n", price);
		} else if(strcmp(product,"Bottoms")==0) {
			price=15.99;
			printf("Your product is Bottoms and the price is %.2f\n",price);
		} else if(strcmp(product,"Accessories")==0) {
			price=1.99;
			printf("Your product is Accessories and the price is %.2f\n",price);
		}
	} else {
		if(strcmp(product,"Tops")==0) {
			price=4.99;
			printf("Your product is Tops and the price is %.2f\n", price);
		} else if(strcmp(product,"Bottoms")==0) {
			price=12.99;
			printf("Your product is Bottoms and the price is %.2f\n",price);
		} else if(strcmp(product,"Accessories")==0) {
			price=7.99;
			printf("Your product is Accessories and the price is %.2f\n",price);
		}
	}
	do{
		printf("How would you like to pay ?\n");
		scanf("%s", payment);
	}while(strcmp(payment,"Card")!=0 && strcmp(payment,"Store")!=0);
	if(strcmp(payment,"Card")==0){
		do{
			printf("please insert a 5- digit number\n");
			scanf("%d", &number);
		}while(number<10000 && number>99999);
		number=number%5;
		do{
		
		printf("please calculate the modulus of your 5- digit number and insert it");
		scanf("%d", &modulus);
		if(number!=modulus){
			count++;
		}
		if(count==3){
			printf("You have tried three times so your purchace is canceled");
			return 0;
		}
	}while(number!=modulus && count!=3);
	if(count==0){
		printf("you entered correct the modulus");
	}
	
	
		 
			}else{
				do{
				
				printf("please insert a 3 digit number");
				scanf("%d", &number);
			}while(number<100 && number>999);
			
			
		}
	
	return 0;}

