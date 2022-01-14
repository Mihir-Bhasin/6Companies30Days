 int minSteps(int d){
        // code here
        int steps=0,sum=0;
        while(true)
        {
            sum +=steps;
            steps++;
            if(sum==d)
            {
                return steps-1;
                break;
            }
            if(sum>d && (sum-d)%2==0){
                return steps-1;
                break;
            }
        }
        return 0;
    }
