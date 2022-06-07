class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
           int i=0,j=0;
        vector<int> v;
        
        while (i<m && j<n){
           if (v1[i]<v2[j]){
               v.push_back(v1[i]);
               i++;
           } 
            else{
                v.push_back(v2[j]);
                j++;
            }
        }
        
        while (i<m){
            v.push_back(v1[i]);
            i++;
        }
        while (j<n){
            v.push_back(v2[j]);
            j++;
        }
        
        for (i=0; i<n+m; i++){
            v1[i]=v[i];
        }
    }
};
