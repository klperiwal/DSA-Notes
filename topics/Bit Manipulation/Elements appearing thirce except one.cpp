* All element appears thrice except one:
Find that element which occur only once.

int findele(int n,int arr[])
{
    int one=0,two=0;
    for(int i=0;i<n;i++)
    {
        two=two | (one & arr[i]);
        one=one ^arr[i];
        int k=~(one & two);
        one=(one & k);
        two=(two & k);
    }
    return one;
}
