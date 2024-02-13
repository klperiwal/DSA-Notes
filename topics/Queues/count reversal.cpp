// A reversal means changing '{' to '}' or vice-versa.
// Find the minimum reversals required to convert the string into a balanced expression.


int countRev (string s)
{
    int n=s.length();
    if(n%2)
        return -1;
        
    int sum1=n,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='}')
        {
            if(sum1!=0)
                sum1--;
            else
            {
                sum1++;
                sum2++;
            }
        }
        else
            sum1++;
    }
    int res= sum1/2 +sum2;
    return res;
}
