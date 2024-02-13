struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump p[],int n)
    {
        int sum=0,res=0;
        int left=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=p[i].petrol-p[i].distance;
            if(sum<0)
            {
                left+=sum;
                res=i+1;
                sum=0;
            }
        }
        if(sum+left>=0)
            return res;
            
        return -1;
    }