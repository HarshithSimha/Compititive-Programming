#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b=0;
        string s;
        cin>>a;
        cin>>s;
        for(int j=0;j<a/2;j++){
            if(s[j]!=s[a-1-j]){
                b++;
            }
        }

    cout<<(b+1)/2<<endl;
    }
    return 0;
}