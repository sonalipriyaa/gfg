#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void freq(vector<int> v){
    map<int,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main()
{
   vector<int> v(5);
   for(int i=0;i<v.size();i++){
       cin>>v[i];
   }
   v.push_back(6);
   
   
   freq(v);
    return 0;
}
