#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n, q;
    cin>>n>>q;
    
    long long query[q][3];
    for(long i=0;i<q;++i){
        for(int j=0;j<3;++j){
            cin>>query[i][j];
        }
    }
    
    vector<long long> sequence[n];
    long long lastans = 0;
    for(long i=0;i<q;++i){
        long long index = query[i][0];
        long long x = query[i][1];
        long long y = query[i][2];
        
        if(index==1){
            sequence[(x^lastans)%n].push_back(y);
        }
        else if(index==2){
            lastans = sequence[(x^lastans)%n][y%(sequence[(x^lastans)%n].size())];
            cout<<lastans<<endl;
        }
    }
    return 0;
}
