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

int radical(int n){

int m=sqrt(n)+1,j=1,i=2,k=1;

while(i<=m){

            if(isprime(i)==1){
                 if(n%i==0){

                    if(i!=j){
                        k*=i;
                        j=i;
                    }
                    n/=i;

                 }

                 else i+=1;}
            else i+=1;}

k*=n;

return k;

}

int main(){

int k=1,temp,j=1,n,m,i=2;

printf("which number do you want the radical of\n");
scanf("%d",&n);
temp=n;
m=sqrt(n)+1;


while(i<=m){

            if(isprime(i)==1){
                 if(n%i==0){

                    if(i!=j){
                        k*=i;
                        j=i;
                    }
                    n/=i;

                 }

                 else i+=1;}
            else i+=1;}

k*=n;

printf("radical(%d)=%d",temp,k);

}
