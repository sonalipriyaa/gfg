#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    // Helper function to find the maximum subarray sum using Kadane's algorithm
    int kadanes(int arr[], int n) {
        int maxi = INT_MIN;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (maxi < sum)
                maxi = sum;
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
    
    // Function to find the maximum sum rectangle in a 2D matrix
    int maximumSumRectangle(int R, int C, vector<vector<int>>& M) {
        int maxsum = INT_MIN;

        for (int cstart = 0; cstart < C; cstart++) {
            int sum[R] = {0}; // Reset the sum array for each column start
            
            for (int cend = cstart; cend < C; cend++) {
                for (int row = 0; row < R; row++) {
                    sum[row] += M[row][cend];
                }
                int cursum = kadanes(sum, R);
                maxsum = max(cursum, maxsum);
            }
        }
        return maxsum;
    }
};
