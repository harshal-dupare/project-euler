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

int power(int a,int n){

int i,p=1;

for(i=0;i<n;i++){
    p*=a;
}

return p;

}

int b_pswap(int n){

int i=2,j=1,s=1,c=0,m=sqrt(n)+1;


while(i<=m){

       if(isprime(n)==1){
            if(n==j){
                c+=1;
                s*=power(c,j);
                break;
            }
                break;}
       else{
            if(isprime(i)==1){
                 if(n%i==0){

                        if(i!=j){

                           if(j==1) c=1;
                            s*=power(c,j);
                            n/=i;
                            j=i;
                            c=1;

                        }
                        else {c+=1;
                        n/=i;
                        }

                           }
                 else i+=1;}
            else i+=1;}

}

return s ;

}


int main(){

int n,s,i;

printf("give number to swap base and powers of\n");
scanf("%d",&n);

for(i=1;i<n;i++){

s=b_pswap(i);

printf("b_pswap(%d) = %d\n",i,s);

}

}
