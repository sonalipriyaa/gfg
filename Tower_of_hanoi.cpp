class Solution{
    public:
    // You need to complete this function
long long count=0;
void helper(int N,int from,int to,int aux){
    if(N>0){
        helper(N-1,from,aux,to);
        count++;
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;;
        helper(N-1,aux,to,from);
    }
}
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        helper(N,from,to,aux);
        return count;
    }

};
