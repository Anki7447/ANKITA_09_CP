//write a C program to find the largest and smallest elements in an array using function
#include<stdio.h>
int main()
{
	int n,j,a=0;
	int arr[20];
	printf("Enter how many numbers:\n");
	scanf("%d",&n);
	printf("Enter the elements\n:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	printf("sort list array");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nLargest %d",arr[0]);
	printf("\nSmallest %d",arr[n-1]);
	return 0;
}




