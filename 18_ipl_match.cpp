vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> ans;
        deque<int> dq;
        int i=0;
        while(i < n){
            while(!dq.empty() and dq.front() == i-k) 
            dq.pop_front();
            
            while(!dq.empty() and arr[dq.back()] < arr[i]) 
            dq.pop_back();
            
            dq.push_back(i);
            
            if(i >= k-1)
            ans.push_back(arr[dq.front()]);
            
            i++;
        }
        return ans;
    }
