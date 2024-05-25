class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
         sort(a, a + n);
        sort(b, b + n, greater<int>());
        
        // Initialize the result variable to store the sum of products
        long long int result = 0;
        
        // Calculate the sum of products
        for (int i = 0; i < n; ++i) {
            result += (long long)a[i] * b[i];
        }
        
        return result;
    }
};
