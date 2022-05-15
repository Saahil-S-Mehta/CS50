#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string name;
    int i = 0;

    cout << "Enter Name:\t";
    getline(cin, name);

    while (name[i] != '\0')
    {
        cout << i + 1 << endl;
        i++;
    }

    cout << "\nHello World!!!\n"
         << "Hi " << name << endl;

    return 0;
}