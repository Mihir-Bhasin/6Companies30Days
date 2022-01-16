 vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        
     int l = 0, h = n - 1, sum = 0, i = 0;
        while(l <= h){
            sum+=a[i];
            if(sum == s){
                return {l+1,i+1};
            }
            if(sum > s){
                while(sum > s){
                    sum-=a[l];
                    l++;
                    if(sum == s){
                        return {l+1,i+1};
                    }
                }
            }
            i++;
        }
        return {-1};
    }
