#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
bool armstrong(int num){
    int sum=0;
    int k = to_string(num).length();
    int temp;
    int n;
    temp=num;
    while(num>0){
        n=num%10;
        sum += pow(n,k);
        num=num/10;
    }
    return sum==temp?true:false;
}
int main()
{
    
    int number;
    cout<<"enter a number";
    cin>>number;
   if(armstrong(number)){
       cout<<"is armstrong number";
   }
   else{
       cout<<"not a armstrong number";
   }
    

    return 0;
}
