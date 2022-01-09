void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	     string order = "!#$%&*@^~";
	   unordered_set<char> s;
	   int i = 0;
	   for(; i < n; i++) 
	   s.insert(nuts[i]);
	   int l = 0;
	   for(char ch: order) {
	       if(s.count(ch)) {
	           bolts[l] = ch;
	           nuts[l++] = ch;
	       }
	   }
