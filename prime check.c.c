#include<stdio.h>
#include<math.h>

int isprime(int n){

int c=1,i,m=sqrt(n)-1;

if(n==2||n==3)c=1;
else{
if(n%2==0||n%3==0) c=0;
else{

for(i=5;i<m;i=i+6){

if(n%i==0||n%(i+2)==0){
    c=0;
    break;
}

}

}
}

return c;

}

int main(){

int k,n,i;

printf("which number do you want to check is prime or not\n");
scanf("%d",&n);

for(i=1;i<n;i++){

k=isprime(i);

printf("isprime(%d) = %d\n",i,k);

}

}

