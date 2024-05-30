
#include<bits/stdc++.h>
using namespace std;
void dec_no(int num){
    int n=num;
    int dec_no=0;
    int d;
    int digit;
    int base=1;
    while(n>0){
        digit=n%10;
        d=digit*base;
        dec_no=dec_no+d;
        base=base*2;
        n=n/10;
        
    }
    cout<<dec_no;
}
int main() {
	int numb=100;
	dec_no(numb);
}
