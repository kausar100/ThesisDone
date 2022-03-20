#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int ara[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
        xorSum = (xorSum ^ ara[i]);

    int check = 0, pos = 0; // check rightmost 1 bit and store position
    int temp = xorSum;      // for later use

    while (check != 1)
    {
        check = (xorSum & 1);
        if (!check)
            pos++;
        xorSum = (xorSum >> 1); // right shift
    }

    // now pos store rightmost bit 1 position
    // xor those value whose value at pos is 1

    int val = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(ara[i], pos)) // check if 1 exist in pos
        {
            val = (val ^ ara[i]);
        }
    }
    cout << val << endl; // first unique value
    // second unique value
    cout << (temp ^ val) << endl;
    return;
}
int main()
{
    int ara[] = {1, 2, 3, 4, 7, 4, 1, 7}; // one unique, others twice
    unique(ara, 8);

    return 0;
}
/*
0100->4
0101->5
0001->1
5-1 = 1
1^4 = 5
1^5 = 4
*/