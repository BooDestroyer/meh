#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float average1(int x[], int y);
void compare(int parray[], int p,int farray[],int f);
int main(int argc, char *argv[]) {
	int grade;
	int parray[10]= {0,0,0,0,0,0,0,0,0,0};
	int farray[10]= {0,0,0,0,0,0,0,0,0,0};
	int i=0;
	int p=0;
	int f=0;
	float pavg;
	float favg;
	int z=0;
	//float nfavg;
	//float npavg;

	for(i=0; i<=9; i++) {
		do {

			printf("Give me the grades of your students\n");
			scanf("%d", &grade);
			while(grade<-1 || grade>10){
				printf("give right number\n");
				scanf("%d",&grade);
			}
		} while(grade<-1 || grade>10);
	    if(grade>=0 && grade<5) {
			farray[f]=grade;
			f++;
		} else if(grade>=5 && grade<=10) {
			parray[p]=grade;
			p++;
		} else if(grade==-1) {
			break;
		}

	}
 
    
    pavg=average1(parray,p);
    favg=average1(farray,f);
    printf("pavg: %.2f\n",pavg);
    printf("favg: %.2f\n",favg);
 
    compare(parray,p,farray,f);
   
	return 0;
}
float average1(int x[],int y){
	int i=0;
	int sum=0;
	float pavg=0;
	
	for(i=0;i<=y-1;i++){
		sum=x[i]+sum;
	}
	pavg=(float) sum/y;
	return pavg;
}
void compare(int parray[],int p,int farray[],int f){
 	int i=0;
 	int z=0;
 	float nfavg;
 	float npavg;
 	    while (f>=p && i<f-1){
    	
    	for(i=0;i<=f-1;i++){
    	
    		if(farray[i]==4){
    			
    			parray[p+1]=farray[i]+1;
    			z=farray[f-1];
    			farray[i]=z;
    			p++;
    			f=f-1;
			}
		}
	}
	nfavg=average1(farray,f);
	npavg=average1(parray,p);
	printf("the new average of the people who passed is %.2f",npavg);
	printf("the new average of the people who failed is %.2f",nfavg);
	
} 

