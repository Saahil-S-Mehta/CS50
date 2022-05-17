#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s = "Hi!";
    int a = 5;
    int *point = &a;
    char *p = &s[0];

    printf("\n%p", p);
    printf("\n%p\n", s);

    int i = 0;
    while (s[i] != '\0')
    {
        cout << s[i] << endl;
        i++;
    }
}