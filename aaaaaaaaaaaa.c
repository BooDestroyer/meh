#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[10];
	int parray[10];
	int farray[10];
	int i=0;
	int k=0;
	int h=0;
	for(i=0;i<=9;i++){
		printf("Give me the grades of your students\n");
	do{
		scanf("%d", &array[i]);
	/*	if(array[i]==-1){
			//printf("h\n");
			break;
		} */
		
	}while(array[i]<0 && array[i]>10);
	if(array[i]==-1){
		printf("you gave minus 1\n");
		break;
	}
		
	}
	return 0;
}
