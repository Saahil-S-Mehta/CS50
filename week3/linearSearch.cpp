#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int A[], int n, int f); // O(n)

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

    int pos = linearSearch(A, n, f);

    if (pos != -1)
        cout << "\n\nThe element found at position " << pos + 1;
    else
        cout << "\n\nElement not found";

    return 0;
}

int linearSearch(int A[], int n, int f)
{
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == f)
        {
            pos = i;
            return pos;
        }
    }
    return -1;
}