#include<stdio.h>
#include<stdlib.h>

int i=0;
char a[20];

int fun(int n){
    int temp,rem;
    temp=n/26;
    rem=n%26 ;
    
    if(temp>0 && rem!=0)
        fun(temp);
    else if(temp>1 && rem==0)
        fun(temp-1);

    if(rem==0)
        rem=26;

    a[i]=64+rem;
    i++;

    return 0;
}

void main(){
    int n;
    scanf("%d",&n);
    if(n<1){
        printf("Invalid Input");
        exit(0);
    }    
    fun(n);
    a[i]='\0';
    printf("\n%s",a);
}