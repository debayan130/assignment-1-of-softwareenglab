/*
*Author:Debayan De
*Write Pattern to print banary seq
*cs791 Software Engineering
*Date:-16 sep 2017
*/

//header
#include<stdio.h>
#include<stdlib.h>


//function
int main()
{
int n,i,j,k;
printf("Enter the number of lines\n");
scanf("%d",&n);
k=1;
for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("%d",k);
        if(k==1){
            k=0;
        }else{
            k=1;
        }
    }
    printf("\n");
}
return 0;
}
