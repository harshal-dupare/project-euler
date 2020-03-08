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

int factadd(int n){

int i=2,add=0,m=sqrt(n)+1;


while(i<=m){

       if(isprime(n)==1){
                add+=n;
                break;}
       else{
            if(isprime(i)==1){
                 if(n%i==0){
                    add+=i;
                    n/=i;}
                 else i+=1;}
            else i+=1;}

}

return add ;

}


int main(){

int n,m,t,i;

printf("till which number do you want radical decomposition of \n");
scanf("%d",&n);

for(i=n;i>0;i--){

    t=i;

    while((isprime(t)!=1)&&(t!=4)){

    m=factadd(radical(t));
    t=m;
}

printf("decomp(%d) = %d\n",i,t);
}


}
