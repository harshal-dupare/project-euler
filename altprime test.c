#include<stdio.h>
#include<math.h>

int isprime(int n){

int x,c=1,i,m=sqrt(n)+1;

if(n%2==0) c=0;
else{
for(i=3;i<m;i+=2){

x=n%i;
if(x==0){
    c=0;
    break;
}

}

}
return c;

}

int main(){

int k,n;

printf("which number do you want to check is prime or not\n");
scanf("%d",&n);
k=isprime(n);

printf("isprime(%d) = %d",n,k);


}
