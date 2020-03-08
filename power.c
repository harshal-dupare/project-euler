#include<stdio.h>

int power(int a,int n){

int x=1,p,k;

if(n>0){
k=power(a,n/2);
if(n%2==1) x=a;

p=x*k*k;
}
else p=1;

return p;

}

int main(){

int p,n,a;

scanf("%d %d",&a,&n);
printf("%d",power(a,n));

}
