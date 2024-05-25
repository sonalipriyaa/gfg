class Solution{
    
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n=S.size() - 1;
	    int s=0;
	   
	    while(s<=n){
	        if(S[s]!=S[n]){
	            return 0;
	        }
	        else{
	            s++;
	            n--;
	        }
	    }
	    return 1;
	}

};
