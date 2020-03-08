#include<stdio.h>

int main(){

int n,i,k,c,temp;

printf("give size of array\n");
scanf("%d",&n);

int a[n];
printf("give the array\n");

for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

do{

c=0;
    for(i=0;i<n-1;i++){

        if(a[i]>a[i+1]){

            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;

            c+=1;
            }

}

}while(c>0);

for(i=0;i<n;i++){
    printf("%d ",a[i]);
}

}
