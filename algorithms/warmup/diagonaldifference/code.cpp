#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
        vector<int> a(n*n);
    for(int i=0;i<n*n;++i){
        cin>>a[i];
    }

    int x = 0, y = 0, i = 0, j = n-1;
    do{
        x+=a[i];
        i+=n+1;
        y+=a[j];
        j+=n-1;
    }while(i<n*n);

    cout<<abs(x-y)<<endl;

    return 0;
}
