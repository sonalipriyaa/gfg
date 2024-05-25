class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
       int expectedSum = (n * (n + 1)) / 2;
        
        // Calculate the actual sum of elements in the array
        int actualSum = 0;
        for (int i = 0; i < array.size(); i++) {
            actualSum += array[i];
        }
        
        // The missing number is the difference between the expected sum and the actual sum
        return expectedSum - actualSum;
    }
};
