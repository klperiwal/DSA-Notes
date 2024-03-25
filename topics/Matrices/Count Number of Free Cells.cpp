Matrix Size: n*n
Set of coordinates= k*2 (array)
For each task, put 1 in all cells of rth row and all cells of cth column.
After each task, calculate the number of 0 present in the matrix and return it.

   
vector<long long int> countZero(int n,int k,int arr[][])
    {
         vector<bool>visrow(n,0);
         vector<bool>viscol(n,0);
    
        int rowcount=0,colcount=0;
        int ans=n*n;
        vector<long long int>v;
      
        for(int i=0;i<k;i++)
        {       
            int r= arr[i][0];
            int c= arr[i][1];
            r--; c--;
              
            if(!visrow[r])
            {
                visrow[r]=1;
                ans-= (n-colcount);
                rowcount++;
            }

            if(!viscol[c])
            {
                viscol[c]=1;
                ans-= n-rowcount;
                colcount++;
            }
            v.push_back(ans);
        }
        return v;
    }