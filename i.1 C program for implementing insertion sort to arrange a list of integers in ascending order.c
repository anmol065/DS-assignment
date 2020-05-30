#include<stdio.h>
void insertionsort(int a[],int n);
int main()
{   
    int i;
    int a[]={10,9,8,7,6,5,4,3,2,1,0};
    printf("\nbefore insertion sort array is\t");
    for(i=0;i<11;i++)
    printf("%d ",a[i]);
    insertionsort(a,11);
    printf("\nafter insertion sort array is\t");
    for(i=0;i<11;i++)
    printf("%d ",a[i]);
}
void insertionsort(int a[],int n)
{
    int t,i,j;
    for(i=1;i<n;i++)
    {
        j=i-1;
        t=a[i];
        while(j>-1&&t<a[j])
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=t;
	}
}
