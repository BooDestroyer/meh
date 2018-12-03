#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float average1(int x[], int y, int z);
//float compare(int x, int y,int z[],int k,int h[],int p);
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
//	float nfavg;
//	float npavg;

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
  /*	if(grade==-1) {
		printf("you broke\n");
	}

	for(i=0; i<=p-1; i++) {
		printf("parray: %d\n",parray[i]);
	}
	for(i=0;i<=f-1;i++){
		printf("farray: %d\n",farray[i]);
		
	}*/ 
    i=0;
    pavg=average1(parray,p,f);
    favg=average1(farray,f,p);
    printf("pavg: %.2f\n",pavg);
    printf("favg: %.2f\n",favg);
   printf("%d%d",f,p);
    while (f>=p && i<f-1){
    	printf("k\n");
    	for(i=0;i<=f-1;i++){
    		printf("a\n");
    		if(farray[i]==4){
    			printf("x\n");
    			parray[p+1]=farray[i]+1;
    			z=farray[f-1];
    			farray[i]=z;
    			p++;
    			f=f-1;
			}
		}
	}
	favg=average1(farray,f,p);
	
	for(i=0;i<=f-1;i++){
		printf("farray %d\n",farray[i]);
	}
	printf("favg %d\n",favg);
    //nfavg= compare(pavg,favg,farray,f,parray,p);
    //printf("newapvg: %.2f\n",nfavg);
    
	return 0;
}
float average1(int x[],int y,int z){
	int i=0;
	int sum=0;
	float pavg=0;
	
	for(i=0;i<=y-1;i++){
		sum=x[i]+sum;
	}
	pavg=(float) sum/(y+z);
	return pavg;
}
/*float compare(int z[],int k,int h[],int p){
	int i=0;
	int x;
	if(y>x){
		for(i=0;i<=k;i++){
			if(z[i]==4){
				h[p]=z[i]+1;
				z[i]=0;
				z[i]=z[i+1];
				p++;
				k=k-1;
				printf("kainourgios pinakas %d",z[i]);
			}
		}
		
	}
	x=average1(h,p,k);
	return x;
} */

