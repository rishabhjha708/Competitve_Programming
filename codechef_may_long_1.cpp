#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define FAST ios::sync_with_stdio(false);cin.tie(NULL);


int main()
{
    // FAST;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int diff[n];
        diff[0]=0;
        for(int i=1;i<n;i++)
        {
            diff[i]=arr[i]-arr[i-1];
        }
        int cnt=1;
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(diff[i]<=2)
            {
                cnt++;
            }
            else
            {
                mn=min(cnt,mn);
                mx=max(cnt,mx); 
                cnt=1;
            }
            
        }
        mn=min(cnt,mn);
        mx=max(cnt,mx);
        cout<<mn<<" "<<mx<<endl;
    }
}
