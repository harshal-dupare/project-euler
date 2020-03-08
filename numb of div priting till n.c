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

int j,n,k,m,temp;

printf("which number do you want number of divisors till\n");
scanf("%d",&j);

for(k=2;k<=j;k++){

int i=2,c=1,ND=1;
n=k;
m=sqrt(n)+1;
temp=n;

while(i<=m){

       if(isprime(n)==1){
                c+=1;
                ND*=c;
                break;
                        }
       else{
            if(isprime(i)==1){
                 if(n%i==0){
                    c+=1;
                    n/=i;

                    if((n!=i)&&(isprime(n)==1)){
                        ND=ND*2*c;
                        break;
                                               }

                           }

                 else {
                 i+=1;
                 ND*=c;
                 c=1;
                      }
                            }
            else i+=1;
           }

}

printf("div(%d)=%d\n",temp,ND);

}

}
