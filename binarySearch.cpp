#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int l, int r, int x); // O(log n)

int main(void)
{
    int n, f, A[n];

    cout << "Enter Array size: ";
    cin >> n;
    cout << "\n\nEnter Array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "\n\nEnter search element: ";
    cin >> f;

    int pos = binarySearch(A, 0, n, f);

    if (pos != -1)
        cout << "\n\nThe element found at position " << pos + 1;
    else
        cout << "\n\nElement not found";

    return 0;
}

int binarySearch(int A[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (A[mid] == x)
            return mid;
        else if (A[mid] >= x)
            return binarySearch(A, l, mid - 1, x);
        else
            return binarySearch(A, mid + 1, r, x);
    }
    return -1;
}