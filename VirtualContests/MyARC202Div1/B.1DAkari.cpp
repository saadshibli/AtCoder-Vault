#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> sList;
vector<string> concatSList;
int n;
int k;

void generateConcatSList(int d, string s) {
    if(d==k) {
        concatSList.push_back(s);
        return;
    }
    for(int i=0; i<n; i++) {
        generateConcatSList(d+1, s+sList[i]);
    }
}

int main() {
    int x;
    cin>>n>>k>>x;
    sList.resize(n);

    for(int i=0; i<n; i++) {
        cin>>sList[i];
    }
    generateConcatSList(0, "");
    sort(concatSList.begin(), concatSList.end());
    cout<<concatSList[x-1]<<endl;
    return 0;
}