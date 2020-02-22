// We r given  an array of 0s and 1s in random order.
// Segregate 0s on left side and 1s on the right of the same array.Traverse array only once.

#include<stdio.h>

void main(){
    int a[10],n;
    scanf("%d",&n);           // array size
    for(int i=0;i<n;i++)         // array content
        scanf("%d",a+i);    

    for(int i=0,j=n-1;i<j;i++){
        if(a[i]==1){
            while(a[j]!=0 && i<j){
                j--;}
            a[i]=0;
            a[j]=1;
        }
    }

    for(int i=0;i<n;i++)    
       printf("%d\t",a[i]);         
}