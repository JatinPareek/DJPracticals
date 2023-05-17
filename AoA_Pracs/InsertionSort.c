#include<stdio.h>

void printarray(int a[],int n);
void insertionsort(int a[],int n);

void main()
{
    printf("Name: Jatin Pareek\nSAP ID: 60019210026\nBranch: CSE(ICB)\n Batch: A1\n");
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of your array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Array is\n");
    printarray(a,n);
    printf("Array after Calling InsertionSort function is\n");
    insertionsort(a,n);
    printarray(a,n);
}

void insertionsort(int a[],int n)
{
    int key,i,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}