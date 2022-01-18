 private:
    
    int dp[501][501];
    int sol(int i,int j,vector<int> &a)
    {
        int op1=0,op2=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i>j)
            return 0;
        if(i==j)
            return a[i];
        op1=a[i]+min(sol(i+2,j,a),sol(i+1,j-1,a));
        op2=a[j]+min(sol(i-2,j,a),sol(i+1,j-1,a));
            
            return dp[i][j]= max(op1,op2);
        
        
    }
    
public:
    int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    memset(dp,-1,sizeof(dp));
	    return sol(0,n-1,A);
