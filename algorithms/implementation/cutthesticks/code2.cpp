#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    multiset<int> arr;
    int tmp;
    for(int i=0;i<n;++i){
       cin >> tmp;
       arr.insert(tmp);
    }

    int count = 1;
    int num = n;
    cout<<num<<endl;
    for(multiset<int>::iterator it=arr.begin();it!=arr.end();++it){
        multiset<int>::iterator tmp = ++it;
        --it;
        if(*it<*(tmp)){
            num -= count;
            if(num){
                cout<<num<<endl;
            }
            count = 1;
        }
        else{
            ++count;
        }
    }
    return 0;
}
