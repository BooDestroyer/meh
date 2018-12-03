#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float average1(int x[], int y);
int main(int argc, char *argv[]) {
	int array[10];
	int i=0;
	int k=0;
	int h=0;
	float avg;
	
	for(i=0; i<=9; i++) {
		printf("Give me the grades of your students\n");
		scanf("%d", &array[i]);
		if(array[i]<0 || array[i]>10) {
			do {
				if(array[i]==-1) {
					break;
				}
				printf("give a number to 0-10\n");
				scanf("%d",&array[i]);
				if(array[i]==-1) {
					//printf("you gave minus 1\n");
					break;
				}
			} while(array[i]<0 || array[i]>10);
		}
		

		if(array[i]==-1) {
			printf("you gave minus 1\n");
			break;
		}
         h++;
	}
	int parray[h];
	int farray[h-1];
	for(i=0;i<=h;i++){
		if(array[i]>=5){
			parray[i]=array[i];
			printf("parray %d\n",parray[i]);
		}else if(array[i]<5 && array[i]!=-1){
			if(array[i]==-1){
				farray[i]=0;
			}
			farray[i]=array[i];
			printf("farray %d\n",farray[i]);
		}
	}
	avg=average1(array,h);
	printf("the average of th people who passed is %.2f\n",avg);

	
	return 0;
}
float average1(int x[],int y){
	int p=0;
	int i=0;
	for(i=0;i<=y;i++){
		if(x[i]>=5){
		
		p=p+x[i];
	}
	}
	p= (float) p/(y-1);
	return p;
}
