#include <bits/stdc++.h>
using namespace std;

int unique(int ara[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
        xorSum = xorSum ^ ara[i];
    return xorSum;
}
int main()
{
    int ara[] = {1, 2, 3, 4, 3, 2, 1}; // one unique, others twice
    cout << unique(ara, 7) << endl;

    return 0;
}