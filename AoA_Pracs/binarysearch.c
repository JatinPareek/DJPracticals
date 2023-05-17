#include <stdio.h>

int binarysearch(int a[], int l, int h, int ele);

void main()
{
    printf("Name: Jatin Pareek\nSapID: 60019210026\nBranch: CSE(ICB)\nBatch:A1\n");
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of your sorted array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ele;
    printf("Enter the element you want to search: ");
    scanf("%d", &ele);
    int l = 0;
    int h = n - 1;
    int p = binarysearch(a, l, h, ele);
    if (p == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element is found at position %d\n", p);
    }
}

/*int binarysearch(int a[], int l, int h, int ele)
{
    if (l > h)
    {
        return -1;
    }

    if (l == h)
    {
        if (ele == a[l])
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        int mid;
        mid = (l + h) / 2;
        if (a[mid] == ele)
        {
            return mid;
        }
        else if (a[mid] < ele)
        {
            int x = binarysearch(a, mid + 1, h, ele);
            return x;
        }
        else
        {
            int y = binarysearch(a, l, mid - 1, ele);
            return y;
        }
    }
}*/
int binarysearch(int a[], int l, int h, int ele)
{
    if (l > h)
    {
        return -1;
    }
    if (l == h)
    {
        if (a[l] == ele)
        {
            return l;
        }
        else
        {
            return -1;
        }
    }
    int mid = (l + h) / 2;
    if (a[mid] == ele)
    {
        return mid;
    }
    else if (a[mid] < ele)
    {
        return binarysearch(a, mid + 1, h, ele);
    }
    else
    {
        return binarysearch(a, l, mid - 1, ele);
    }
}
