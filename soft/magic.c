/*
Author:-Debayan De
CS791
Checking Magic Square
*/
//headers
#include<stdio.h>
#include<stdlib.h>

//function prototypes
void input();
void init(int,int);
void getdata(int);
void validate();
//void rowsum(int**,int);
//void colsum(int**,int);

//global vars
int arr[100][100],size;

//functions	
void input(){
	int num=0;
	printf("Enter magic square size");
	scanf("%d",&size);
	init(size,num);
	printf("enter the elements");
	getdata(size);
	
}


void init(int size,int num)
{
int i,j;
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        arr[i][j]=num;
    }
}
}

void getdata(int size)
{
int i,j,num;
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        scanf("%d",&num);
        arr[i][j]=num;
    }
}
}


void validate()
{
    int valid=0;
    int i,j,k;
    int ar[size*2+2];
     for(i=0;i<(size*2+2);i++)
   {
        ar[i]=0;
   }
    for(i=0;i<size;i++)
    {
        ar[i]=rowsum(arr,i);
       // printf("%d%d",ar[i],i);
    }
    for(j=0;j<size;j++)
    {
        ar[j+i]=colsum(arr,j);
       // printf("%d%d",ar[i+j+1],(i+j+1));
    }
   for(k=0;k<(size*2+2);k++)
   {
        printf("%d",ar[k]);
   }
    
    
}

int rowsum(int arr[100][100],int index)
{
    int i,x=0;
    for(i=0;i<size;i++)
    {
        x=x+arr[index][i];
    }
    return x;
}


int colsum(int arr[100][100],int index)
{
    int i,x=0;
    for(i=0;i<size;i++)
    {
        x=x+arr[i][index];
    }
    return x;
}

int main()
{

input();
validate();

return 0;
}
