#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    string time;
    cin >> time;
    string tmp1 = time.substr(0, 2);
    string tmp2 = time.substr(0, 8);
    if(time.find("AM")!=string::npos){
        if(tmp1 == "12"){
            tmp2.replace(0,2,"00");
        }
    }
    else{
        if(tmp1 != "12"){
            stringstream ss;
            ss<<atoi(tmp1.c_str())+12;
            tmp2.replace(0, 2, ss.str());
        }
    }
    cout<<tmp2<<endl;
    return 0;
}
