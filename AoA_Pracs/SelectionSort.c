#include<stdio.h>

void printarray(int a[],int n);
void selectionsort(int a[],int n);


void main()
{
    printf("Name: Jatin Pareek\nSapID: 60019210026\nBranch: CSE(ICB)\nBatch:A1\n");
    int n;
    printf("Enter the size of your array: ");
    scanf("%d",&n)
;
int a[n];
printf("Enter the elements of your Array\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Original Array\n");
printarray(a,n);
printf("Sorted Array\n");
selectionsort(a,n);
printarray(a,n);
}

void selectionsort(int a[],int n)
{
    int i,j,temp,indexconsidermin;
    for(i=0;i<n-1;i++)
    {
        indexconsidermin=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[indexconsidermin])
            {
                indexconsidermin=j;
            }
            temp=a[i];
            a[i]=a[indexconsidermin];
            a[indexconsidermin]=temp;
        }
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