class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // // Your code here
        // if(a.length()!=b.length()){
        //     return false;
        // }
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // return a==b;
        // //t(c)=nlogn sc=o(1)
        unordered_map<char,int> cnt1;
        unordered_map<char,int> cnt2;
        for(auto ch:a) cnt1[ch]++;
        for(auto ch:b) cnt2[ch]++;
        return (cnt1==cnt2);
    }

};
