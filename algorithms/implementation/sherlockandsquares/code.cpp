#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int a, b;
        cin>>a>>b;
        int count = 0;
        int sum = 1;
        int j = 0;
        while(sum<=b){
            if(sum>=a){
                ++count;
            }
            ++j;
            sum = sum+2*j+1;
        }
        cout<<count<<endl;
    }
    return 0;
}
