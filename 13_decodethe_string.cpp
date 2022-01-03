 bool isNum(char a){
        return (a >= '0' and a <= '9');
    }
    string solve(string &s,int &n,int &i){
        string ans = "";
        int num = 0;
        for(;i<n;i++){
          
            if(isNum(s[i])){
                num = num * 10 + (s[i] - '0');
            }
          
            else if(s[i] == '['){
                i++;
                string temp = solve(s,n,i);
                while(num--)    
                    ans += temp;
                num = 0;
            }
            else if(s[i] == ']'){
                return ans;
            }
         
            else{
                ans += s[i];
            }
        }
        return ans;
    }

    string decodedString(string s){
        int i=0,n=s.length();
        return solve(s,n,i);
    }
