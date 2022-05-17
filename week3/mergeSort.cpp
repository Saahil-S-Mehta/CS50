#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int b, int mid, int e)
{
    const int sizeLeft = mid - b + 1;
    const int sizeRight = e - mid;

    int indexL = 0;
    int indexR = 0;
    int indexMerged = b;

    int arrLeft[sizeLeft];
    int arrRight[sizeRight];

    for (int i = 0; i < sizeLeft; i++)
        arrLeft[i] = a[b + i];
    for (int i = 0; i < sizeRight; i++)
        arrRight[i] = a[mid + 1 + i];

    while (indexL < sizeLeft && indexR < sizeRight)
    {
        if (arrLeft[indexL] < arrRight[indexR])
        {
            a[indexMerged] = arrLeft[indexL];
            indexL++;
        }
        else
        {
            a[indexMerged] = arrRight[indexR];
            indexR++;
        }
        indexMerged++;
    }

    while (indexL < sizeLeft)
    {
        a[indexMerged] = arrLeft[indexL];
        indexL++;
        indexMerged++;
    }

    while (indexR < sizeRight)
    {
        a[indexMerged] = arrRight[indexR];
        indexR++;
        indexMerged++;
    }
}

void mergeSort(int a[], int b, int e)
{
    if (b >= e)
        return;

    int mid = b + (e - b) / 2;
    mergeSort(a, b, mid);
    mergeSort(a, mid + 1, e);
    merge(a, b, mid, e);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(void)
{
    int n, arr[n];

    cout << "Enter Array size: ";
    cin >> n;
    cout << "\n\nEnter Array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}