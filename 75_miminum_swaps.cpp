 int minSwaps(vector<vector<int>>& g) {
         int n = g.size();
        vector<int> v(n,0);
        for(int i = 0;i < n;i++){
            int j = n - 1;
            while(j >= 0 && g[i][j] == 0)  
                v[i]++,j--;
        }
        int sum = 0;
        for(int i = 0;i < n;i++){
            if(v[i] >= n - 1 - i)
                continue;   
            int f = 0;
            int k = -1;
            for(int j = i + 1;j < n;j++){
                if(v[j] >= n - 1 - i){
                    f = 1;
                    k = j;
                    break;
                }
            }
            if(!f) return -1;
            for(int j = k;j  > i;j--)
                swap(v[j],v[j-1]) , sum++;
        }
        return sum;
    }
