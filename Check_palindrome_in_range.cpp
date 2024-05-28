#include <iostream>
using namespace std;
bool palindrome(int num){
    int n=num;
    int digit;
    int rev=0;
    while(num!=0){
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    if(n==rev){
        return true;
    }
    else{
        return false;
    }
}
void nos(int r1,int r2){
    for(int i=r1;i<=r2;i++){
        if(palindrome(i)){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int r1,r2;
    cout<<"enter the range nos";
    cin>>r1;
    cin>>r2;
    nos(r1,r2);
    
    

    return 0;
}
