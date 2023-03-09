//write c program to find the largest and smallest elements in an array using function

#include<stdio.h>
int main()
{
    
    int a[10],i,max;
    printf("Enter array element\n");

    scanf("%d\n",&a[i]);
    max=a[0];

    for(i=0;i<=10;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("the maximum number in array is %d\n",max);
return 0;


}