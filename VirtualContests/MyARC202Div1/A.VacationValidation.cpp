#include<iostream>
using namespace std;

int main() {
    string S;
    int l,r,n;
    bool flag=true;
    cin>>n>>l>>r;
    cin>>S;
    for(int i=l-1; i<r;i++) {
        if(S[i]!='o') {
            flag=false;
            break;
        }
    }
    if(flag==true) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return 0;
}