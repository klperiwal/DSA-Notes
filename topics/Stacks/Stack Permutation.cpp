Stack permutation: array B can be created from array A using a stack.

bool isStackPermutation(int N,vector<int> &A,vector<int> &B){
        
        if(A.size()!=B.size())
            return 0;
            
        int a=A.size();
        stack<int>s;
        int j=0;
        
        for(int i=0;i<a;i++)
        {
            s.push(A[i]);
            while(!s.empty()&& s.top()==B[j])
            {
                s.pop();
                j++;
            }
        }
        
        if(s.empty())
            return 1;
          
        return 0;
    }