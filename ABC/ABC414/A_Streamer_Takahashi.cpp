// Problem: A - Streamer Takahashi
// Source: AtCoder Beginner Contest 253 (https://atcoder.jp/contests/abc414/tasks/abc414_a)
// Tags: implementation, interval check
// Difficulty: 100 pts
// Description:
// Takahashi streams from time L to R.
// Count how many of N listeners can watch the full stream.
// Each listener i is available from Xi to Yi.

#include<iostream>
using namespace std;

int main() {
    int L, R, N, n=0;
    cin>>N>>L>>R;
    for(int i=0; i<N; i++) {
        int x,y;
        cin>>x>>y;
        if(x<=L && y>=R) {
            n++;
        }
    }
    cout<<n;
}