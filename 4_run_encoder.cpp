string encode(string src)
{     
  //Your code here 
  int n= src.size();
  string um ="";
  
  for (int i=0;i<n;i++)
  {
      um +=src[i];
      int cnt =1;
      
      while(i+1 <n && src[i]==src[i+1])
      {
         cnt++;
         i++;
      }
      um+=to_string(cnt);
  }
 return um;
  
}     
 
