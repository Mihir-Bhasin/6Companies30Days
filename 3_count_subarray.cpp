class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long p=1;
        int res= 0;
        for(int start=0, i=0;i<n;i++)
        {
            p*=a[i];
           
            while(start<i &&p>=k)
            {
            p/= a[start++];
            }
            
            if(p<k)
            {
                int len = i - start +1;
                res+=len;
                
            }
            
        }
        return res;
    }
};
