 string amendSentence (string s)
    {
        // your code here
        string ans="";
        int len=s.length();
        int i=0;
        
        while(i<len)
        {
            
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
                if(i!=0)
                    ans+=" ";
                
                
            }
            ans+=s[i];
            i++;
        }
        return ans;
    }
