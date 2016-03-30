#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;++i){
        cout<<setw(n)<<string(i, '#')<<endl;
    }
    return 0;
}
