/*
Author:-Debayan De
CS791
Checking Magic Square
*/
#include<stdio.h>
int arr[100][100];	
void input(){
	int size;
	printf("Enter magic square size");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			arr[i][j]=0;
		}
	}
	printf("enter the elements");
	
}

int main()
{

input();
return 0;
}
