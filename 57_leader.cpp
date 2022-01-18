vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        int x=a[n-1];
         int second_last=n-2;
        ans.push_back(x);
        for(int i= second_last;i>=0;i--)
        {
            if(a[i]>=x)
                {
                    x=a[i];
                    ans.push_back(x);
                    
                }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
