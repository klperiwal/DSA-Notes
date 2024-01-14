// Consecutive numbers can be in any order.
// Length of the longest sub-sequence such that elements in the subsequence are consecutive.
// Ex: 	N = 7
// 	a[] = {2,6,1,9,4,5,3}
// 	Output: 6	(Numbers from 1 to 6)


int findLongestConseqSubseq(int arr[], int N)
{
    set<int>s;
    for(int i=0;i<N;i++)
        s.insert(arr[i]);
        
    int res=1,sum=1;
    for(auto it: s)
    {
        if(s.find(it+1)!=s.end())
        {
            sum++;
            res=max(res,sum);
        }
        else
            sum=1;
    }
    return res;
}
