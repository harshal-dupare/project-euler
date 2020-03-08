#include<stdio.h>



int main(){

int n,p,i,k,t,j;

printf("enter the size of matrix  & which power to compute \n");

scanf("%d",&n);

int a[n][n],b[n][n],c[n][n];

printf("enter the matrix row by row\n");

for(i=0;i<n;i++){
    for(j=0;j<n;j++){

            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
            c[i][j]=0;

    }
}



for(i=0;i<n;i++){
    for(j=0;j<n;j++){


       for(k=0;k<n;k++){

        c[i][j]+=a[i][k]*b[k][j];

       }

    }
}



for(i=0;i<n;i++){
    for(j=0;j<n;j++){

            printf("%d ",c[i][j]);

    }
    printf("\n");
}

}
