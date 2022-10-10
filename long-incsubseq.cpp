#include<bits/stdc++.h>
using namespace std;
int longestIncreasingSubsequence(int* arr, int n) {
	if(n==0)
        return 0;
    int out[n];
    out[0]=1;
    for(int i=1;i<n;i++){
        out[i]=1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>=arr[i]){
                continue;
            }
            int ans=(1+out[j]);
            if(ans>out[i]){
                out[i]=ans;
            }
        }
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxi<out[i]){
            maxi=out[i];
        }
    }
    return maxi;
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestIncreasingSubsequence(arr, n);
}