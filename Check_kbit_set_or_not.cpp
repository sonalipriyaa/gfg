class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool binary(int n,int k){
        int i=0;
        while(n){
            int d=n%2;
            if(d==1 && i==k){
                return true;
            }
            else{
                i++;
                n=n/2;
            }
        }
        return false;
    }
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        binary(n,k);
    }
};
