class Solution{
public:	
		
	string removeDups(string str) 
	{
	    // Your code goes here
	    unordered_set<char> seen;
        string result;
        
        for (char c : str) {
            // If the character has not been seen before, add it to the result
            if (seen.find(c) == seen.end()) {
                seen.insert(c);
                result += c;
            }
        }
        
        return result;
    }
};
