#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *x, int *y, int *z);

int main(int argc, char *argv[]) {
	int grades[2][3];
	int i=0;
	int j=0;
    int count1=0;
    int count2=0;
	for(i=0; i<=1; i++) {
		if(i==0) {
			printf("Give the grades of the first student\n");
		} else if(i==1) {
			printf("Give the grades of the second student\n");
		}
		for(j=0; j<=2; j++) {
			do {
				scanf("%d",(*(grades + i)+j));
				if(*(*(grades +i)+j)<0 || *(*(grades +i)+j)>10) {
					printf("Please give me the right grade\n");
				}
			} while(*(*(grades +i)+j)<0 || *(*(grades +i)+j)>10);
		}
	}
	
	 j=0;
	for(j=0;j<=2;j++){
		if(grades[0][j]>=5){
			count1++;
		}
		if(grades[1][j]>=5){
			count2++;
		}
	}
	if(count1==3){
		swap(&grades[0][0],&grades[0][1],&grades[0][2]); 
	 printf("The grades of the first student from higher to lower is: %d, %d, %d\n",grades[0][0],grades[0][1],grades[0][2]);
	}else if(count1==0){
		//user define 2
	}
	if(count2==3){
		swap(&grades[1][0],&grades[1][1],&grades[1][2]);
		printf("The grades of the second student from higher to lower is: %d, %d, %d\n",grades[1][0],grades[1][1],grades[1][2]);
	}else if(count2==0){
		//user define 2
	}
	
		 
	return 0;
}
void swap(int *x, int *y, int *z){
	

}

