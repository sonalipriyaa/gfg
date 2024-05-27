class Solution{
    public:
    void rev(int a[],int start,int end){
        while(start<end){
            swap(a[start],a[end]);
            start++;
            end--;
        }
    }
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        d=d%n;
        rev(arr,0,d-1);
        rev(arr,d,n-1);
        rev(arr,0,n-1);
    }
};
