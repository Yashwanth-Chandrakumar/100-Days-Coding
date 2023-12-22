#include <bits/stdc++.h> 
using namespace std;

int maxXor(int L, int R)
{
    int msb = 0;
    for (int i = L ^ R; i > 0; i >>= 1)
    {
        msb++;
    }

    return (1 << msb) - 1;
}
