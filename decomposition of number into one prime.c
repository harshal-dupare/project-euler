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

printf("till which number do you want decomposition of \n");
scanf("%d",&n);

for(i=n;i>0;i--){

    t=i;

    while((isprime(t)!=1)&&(t!=4)){

    m=factadd(t);
    t=m;
}

printf("decomp(%d) = %d\n",i,t);
}


}
