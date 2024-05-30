class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        pair<long long,long long> mypair;
        long long min=a[0];
        long long max=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<min){
                min=a[i];
                
            }
            if(a[i]>max){
                max=a[i];
            }
        }
        mypair.first=min;
        mypair.second=max;
        return mypair;
    }
};
