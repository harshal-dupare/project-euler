#include<stdio.h>
#include<math.h>

int isprime(int n){

int x,c=1,i,m=sqrt(n)+1;

for(i=2;i<m;i++){

x=n%i;
if(x==0){
    c=0;
    break;
}

}

return c;

}


int main(){

int i=2,n,c=0;
printf("how many primes do you want\n");
scanf("%d",&n);

while(c<n){

    if(isprime(i)==1){
            c+=1;
             printf("%d\n",i);}

i+=1;

}

}

