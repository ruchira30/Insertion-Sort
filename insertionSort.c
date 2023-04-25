#include<stdio.h>
void Insertionsort(int arr[],int array_size);

int main()
{
	int arr[5]={4,23,56,7,8};
	int array_size =5;
	int j;
	Insertionsort(arr,array_size);
	for(j=0;j<array_size;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
void Insertionsort(int arr[],int array_size)
{
	int i,j,small;
	for(i=1;i<array_size;i++)
	{
		small = arr[i];
    for(j=i-1;j>=0 && small<arr[j];j--)
      {
      	arr[j+1]=arr[j];
	  }
	arr[j+1]=small;
    }

