
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int killinSpree(long long int n)
    {
        // Code Here
        long long int count=0;
        long long int i=1;
        while(n>=(i*i)){
            count++;
            n = n-(i*i);
            i++;
        }
        return count;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
