#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// 1. every 3rd term is even in fibonacci series

int main()
{
    long long n1 = 2;
    long long n2 = 8,temp;
    int sum = 4000000;
    long long sum1 = 0;
    while(n2 < 4000000)
    {
        sum1 += n2;
        temp = n2;
        n2 = 4 * n2 + n1;
        n1 = temp;
    }
    printf("%lld\n", sum1 + 2);
}