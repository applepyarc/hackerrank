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
        bool flag = false;
        for(int i=n;i>=0;--i){
            if(i%3==0 && (n-i)%5==0){
                flag = true;
                cout<<string(i, '5')<<string(n-i, '3')<<endl;
                break;
            }
        }
        if(!flag){
            cout<<-1<<endl;
        }
    }
    return 0;
}
