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
        int height = 1;
        for(int i=1;i<=n;++i){
            if(i%2==0){
                ++height;
            }
            else{
                height*=2;
            }
        }
        cout<<height<<endl;
    }
    return 0;
}
