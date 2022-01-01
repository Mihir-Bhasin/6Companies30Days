class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        unordered_map <string,vector<string>> um;
        
        for(int i=0;i<string_list.size();i++)
        {
            string store = string_list[i];
            
            sort(store.begin(),store.end());
            
            um[store].push_back(string_list[i]);
            
            
        }
        for(auto itr =um.begin();itr!=um.end();itr++)
        ans.push_back(itr ->second);
        
        return ans;
    }
};
