// We can calculate the sum of the elements in the array by traversing the array once.
// Since the array elements can be quite large, we need to use the long data types for the sum.
// A signed 32−bit integer value uses the 1st bit to represent the sign of the number and the remaining 31−bits to represent the magnitude.
// The range of the 32−bit integer is −231 to 231−1−231 to 231−1 or [−2147483648,2147483647][−2147483648,2147483647].
// When we add several integer values, the resulting sum might exceed this range. Use long long in C/C++ and long in Java.

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
    long long int sum = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       sum+=arr[arr_i];
    }
    cout<<sum<<endl;
    return 0;
}
