   int NumberOfPath(int a, int b)
    {
        //code here
         if(a==1 || b==1)
            return 1;
        
        return NumberOfPath(a-1,b)+NumberOfPath(a,b-1);
    }
