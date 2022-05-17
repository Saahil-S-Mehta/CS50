#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i = 0;
    char *s = "hi!!";
    char *t = (char *)malloc(strlen(s) + 1);
    strcpy(t, s);
    while (t[i] != '\0')
    {
        t[i] = toupper(t[i]);
        i++;
    };
    cout << s << endl
         << t;
    free(t);
}
