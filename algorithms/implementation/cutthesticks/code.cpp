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

    while(arr.size()>0){
        multiset<int> tmp;
        int count = 0;
        for(multiset<int>::iterator it=arr.begin();it!=arr.end();++it){
            tmp.insert(*it-*(arr.begin()));
            ++count;
        }
        arr = tmp;
        arr.erase(0);
        cout<<count<<endl;
    }
    return 0;
}
