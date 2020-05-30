#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main () {
    long total = 0;
    long previous = 0;        
    long current = 2;        
    while(current < 4000000) {  
        total += current;          
        long aux = current;
        current = current * 4 + previous;
        previous = aux;
    }
    cout << total << "\n";
}