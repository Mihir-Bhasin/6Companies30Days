vector<string> generate(int N)
{
	// Your code here
	 vector<string>ans;
    string s="";
	// Your code here
	for(int i=1;i<=N;i++){
	    int a=i;
	    while(a){
	        int b= a%2;
	        s=to_string(b)+s;
	        a=a/2;
	    }
	    ans.push_back(s);
	    s="";
	}
	return ans;
}
