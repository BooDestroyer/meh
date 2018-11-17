#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <windows.h>


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
	int reverse;
	int rev;
	int ek, mod, mon, dek;
	char answer[4];
	float discount;
	do{

	do {

		printf("             welcome to the store!\nPlease enter your sex:\n");
		scanf(" %c", &filo);
	} while(filo!='M' && filo!='F');
	do {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
		printf("Please select what you would like to buy, we have Tops, Bottoms and Accessories (Enter first letter with capitals)\n");
		scanf("%s", product);
	} while(strcmp(product,"Tops")!=0 && strcmp(product,"Bottoms")!=0 && strcmp(product,"Accessories")!=0);
	do {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
		printf("Our available sizes are Small,Medium and Large.(write S, M or L)\nWhich one would you like to buy?\n");
		scanf(" %c", &size);
	} while(size!='S'&& size!='M' && size!='L');

	if(filo=='M') {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
		if(strcmp(product,"Tops")==0) {
			price=5.99;
			printf("\n        Your product is Top and the price is %.2f\n", price);
		} else if(strcmp(product,"Bottoms")==0) {
			price=15.99;
			printf("\n        Your product is Bottoms and the price is %.2f\n",price);
		} else if(strcmp(product,"Accessories")==0) {
			price=1.99;
			printf("\n        Your product is Accessories and the price is %.2f\n",price);
		}
	} else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
		if(strcmp(product,"Tops")==0) {
			price=4.99;
			printf("\n        Your product is Tops and the price is %.2f\n", price);
		} else if(strcmp(product,"Bottoms")==0) {
			price=12.99;
			printf("\n        Your product is Bottoms and the price is %.2f\n",price);
		} else if(strcmp(product,"Accessories")==0) {
			price=7.99;
			printf("\n        Your product is Accessories and the price is %.2f\n",price);
		}
	}

	do {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
		printf("\nHow would you like to pay with Card or in Store?(Write it as shown before) \n");
		scanf("%s", payment);
	} while(strcmp(payment,"Card")!=0 && strcmp(payment,"Store")!=0);
	if(strcmp(payment,"Card")==0) {
		do {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
			printf("Please insert a 5- digit number\n");
			scanf("%d", &number);
		} while(number<10000 && number>99999);
		number= number%5;
		do {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
			printf("Please calculate the modulus of your 5- digit number and insert it\n");
			scanf("%d", &modulus);
			if(number!=modulus) {
				count++;
			} else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
				printf("\nYou entered correct the modulus\n");

			}
			if(count==3) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
				printf("You have tried three times so your purchace is canceled\n");
				return 0;
			}
		} while(number!=modulus && count!=3);

	} else {
		do {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
			printf("Please insert a 3 digit number\n");
			scanf("%d", &number);
		} while(number<100 && number>999);
		ek=number/100;
		mod= number%100;
		dek=  mod/10;
		mon= mod%10;
		reverse=mon*100 + dek*10 + ek;

		printf("Please insert the 3 digit number in reversed\n");
		scanf("%d", &rev);
		if(rev==reverse) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
			printf("You have a discount 20%\n");

		}else{
			do{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
				printf("Insert the 3 digit number in reversed right");
				scanf("%d", &rev);
			}while(rev!=reverse);
		}
		discount=price*0.2;
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
printf("\nYour sex is %c \nThe product that you want is %s \nThe size is %c \nThe way you want to pay is %s \nAnd the price is %.2f. \nDo you agree?\n", filo,product,size,payment,price);
scanf("%s", answer);
}while(strcmp(answer,"yes")!=0);
system("cls");
printf("Thanks for your purchase. Here is your receipt:\n");
printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
printf("Payment method:%s\n",payment);
printf("                     Total products bought: 1\n");
if(strcmp(payment,"Store")==0){
printf("                         Price: %.2f euro\n",price);
printf("                           Discount: 20%\n");
printf("                Final Price (after discount): %.2f euro\n ",discount);
}else{
printf("                         Price: %.2f euro\n",price);
}
printf("\n\n                          See you soon\n");
printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");



	return 0;
}
