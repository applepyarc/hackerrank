#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    float a, b, c;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i]>0){
           ++a;
       }
       else if(arr[arr_i]<0){
           ++b;
       }
       else{
           ++c;
       }
    }
    cout<<a/n<<endl;
    cout<<b/n<<endl;
    cout<<c/n<<endl;
    return 0;
}
