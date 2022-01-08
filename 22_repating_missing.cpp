	string FirstNonRepeating(string A){
		    // Code here
		    string sol ="";
		    deque<char> q;
		    
		    int hash[26] ={0};
		    for(auto it : A)
		    {
		        int pos= it -'a';
		        
		        if(hash[pos]==0)
		        {
		            q.push_back(it);
		            
		        }
		        
		        hash[pos]++;
		        while(!q.empty() and hash[q.front() - 'a'] !=1)
		            q.pop_front();
		            
		            if(q.empty())
		            sol +='#';
		            else
		            sol +=q.front();
		    }
		    return sol;
		}
