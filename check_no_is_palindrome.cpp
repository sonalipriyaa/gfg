#include <iostream>
using namespace std;
void palindrome(int num){
    int n=num;
    int digit;
    int rev=0;
    while(num!=0){
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    if(n==rev){
        cout<<"is palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}

int main()
{
    int numb;
    cout<<"enter num";
    cin>>numb;
    palindrome(numb);
    

    return 0;
}
