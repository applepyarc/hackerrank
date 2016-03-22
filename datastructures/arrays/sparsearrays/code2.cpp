#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;
    cin>>n;
    
    map<string, int> myMap;
    string query;
    map<string, int>::iterator it;
    for(int i=0;i<n;++i){
        cin>>query;
        it = myMap.find(query);
        if(it!=myMap.end()){
            (it->second)++;
        }
        else{
            myMap.insert(pair<string, int>(query, 1));
        }
    }
    
    cin>>q;
    for(int i=0;i<q;++i){
        cin>>query;
        it = myMap.find(query);
        if(it!=myMap.end()){
            cout<<(it->second)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
