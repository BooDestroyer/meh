#include <stdio.h>
#include <stdlib.h>

float average1(int x[], int y);
void update(int parray[], int farray[], int p, int f);

int main(int argc, char *argv[])
{
    int grade;
    int parray[10];
    int farray[10];
    int i=0;
    int p=0;
    int f=0;
    float pavg;
    float favg;
    int z=0;

    printf("Type the grades of your students:\n");

    for(i=0; i<=9; i++)
    {
        scanf("%d", &grade);
        while(grade<-1 || grade>10)
        {
            printf("Invalid input!\n");
            scanf("%d",&grade);
        }
        if(grade>=0 && grade<5)
            farray[f++]=grade;
        else if(grade>=5 && grade<=10)
            parray[p++]=grade;
        else if(grade==-1)
            break;

    }

    printf("pavg: %.2f\n",average1(parray,p));
    printf("favg: %.2f\n",average1(farray,f));


    update(parray, farray, p, f);

    return 0;
}
float average1(int x[],int y)
{
    int i=0;
    int sum=0;

    for(i=0; i<y; i++)
        sum=x[i]+sum;

    return (float)sum/y;
}

void update(int parray[], int farray[], int p, int f)
{

    int i=0;

    if(f>=p)
    {
        while (f>=p && i<f){
            if(farray[i]==4){
                parray[p++]=5;
                farray[i]=farray[--f];
            }
            i++;
        }

        printf("The new failure average is: %.2f\n",average1(farray,f));
        printf("The new success average is: %.2f\n",average1(parray,p));
    }

}
