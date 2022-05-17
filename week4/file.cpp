#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    FILE *fd;
    fd = fopen("text.txt", "r");
    char *t;
    fread(t, sizeof(char), 10, fd);
    cout << t << endl;
    return 0;
}