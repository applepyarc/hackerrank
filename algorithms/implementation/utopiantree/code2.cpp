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
        cout<<( ~(~1<<(n>>1)) << n%2 )<<endl;
        // ((1<<((N>>1)+1))-1) << n%2
    }
    return 0;
}
