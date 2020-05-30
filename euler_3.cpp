#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main () 
{
    long long n = 600851475143;
    int maxPrime = -1;
    // removing 2's factors
    while(n % 2 == 0){
        maxPrime = 2;
        n = n / 2;
    }
    // checking for any odd prime
    for(int i = 3; i <= sqrt(n) ; i=i+2)
    {
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        }
    }
    if(n>2){
        maxPrime=n;
    }
    cout << maxPrime << endl;
}