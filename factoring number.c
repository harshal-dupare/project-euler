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

int n,m,i=2;

printf("which number do you want to factor\n");
scanf("%d",&n);

m=sqrt(n)+1;

printf("%d = ",n);

while(i<=m){

       if(isprime(n)==1){
                printf("%d",n);
                break;}
       else{
            if(isprime(i)==1){
                 if(n%i==0){
                    printf("%d*",i);
                    n/=i;}
                 else i+=1;}
            else i+=1;}

}

}
