#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main(int argc, char const *argv[])
{
    int a = 1000;
    // sum of multiple of 3 below a
    int sum3 = 3 * (((a-1)/3 * (((a-1)/3) + 1))/2);
    int sum5 = 5 * (((a-1)/5 * (((a-1)/5) + 1))/2);
    int sum15 = 15 * (((a-1)/15 * (((a-1)/15) + 1))/2);
    printf("%d %d\n", sum3, sum5);
    printf("%d\n", sum3 + sum5 - sum15);
    return 0;
}


