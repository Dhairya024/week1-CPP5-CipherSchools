#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;

    cout << ***p3 << endl;

    return 0;
}