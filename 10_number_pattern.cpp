string printMinNumberForPattern(string S){
        // code here 
        
                  
        int max = 0; 
      
     
        int last_val = 0; 
      
        int j; 
        string ans="";
      
        for (int i=0; i<S.length(); i++) 
        { 
            
            int next_val = 0; 
      
            switch(S[i]) 
            { 
            case 'I': 
                
                j = i+1; 
                while (S[j] == 'D' && j < S.length()) 
                { 
                    next_val++; 
                    j++; 
                } 
                    
                if (i==0) 
                { 
                    max = next_val + 2; 
      
                    
                    ++last_val;
                    ans+=('0'+last_val);
                    ans+=('0'+max);

                   
                    last_val = max; 
                } 
                else
                { 
                    
                    max = max + next_val + 1; 
      
                   
                    last_val = max; 
                    ans+=('0'+last_val);
                } 
      
               
                for (int k=0; k<next_val; k++) 
                {   
                    --last_val;
                    ans+=('0'+last_val);
                    i++; 
                } 
                break; 
      
           
            case 'D': 
                if (i == 0) 
                { 
                    j = i+1; 
                    while (S[j] == 'D' && j < S.length()) 
                    { 
                        next_val++; 
                        j++; 
                    } 
      
                    
                    max = next_val + 2; 
      
                   
                    ans+=('0'+max);
                    ans+=('0'+(max - 1));

      
                 
                    last_val = max - 1; 
                } 
                else
                { 
                    
                    ans+=('0'+(last_val - 1));
                   
                    last_val--; 
                } 
                break; 
            } 
        } 
        return ans;
