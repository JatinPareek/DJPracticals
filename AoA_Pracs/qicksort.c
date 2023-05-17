#include <stdio.h>

int partition(int a[], int low, int high);
void quicksort(int a[], int low, int high);
void printarray(int a[], int n);

void main()
{
    printf("Name:JatinPareek\nSAPID: 60019210026\nBranch: CSE(ICB)\n");
    int n;
    printf("Size: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int low = 0;
    int high = n - 1;
    printarray(a, n);
    quicksort(a, low, high);
    printarray(a, n);
}

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void quicksort(int a[], int low, int high)
{
    int p;
    if (low < high)
    {
        p = partition(a, low, high);
        quicksort(a, low, p - 1);
        quicksort(a, p + 1, high);
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}