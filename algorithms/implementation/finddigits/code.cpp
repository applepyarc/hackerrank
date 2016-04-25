#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int tmp = n;
        int count = 0;
        while(tmp>0){
            int index = tmp%10;
            if(index!=0 && n%index==0){
                ++count;
            }
            tmp/=10;
        }
        cout<<count<<endl;
    }
    return 0;
}
