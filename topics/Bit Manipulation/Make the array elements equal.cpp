* Make all the elements of the array equal:
1) Select an index i(1≤i≤N−1) and select an integer X.
2) Set A(i) = A(i) ^X  and  A(i+1)=A(i+1)^X;

string testcases()
{
    int a;
    cin>>a;

    int arr[a];
    for(int i=0;i<a;i++)
        cin>>arr[i];

    for(int i=1;i<a-1;i++)
    {
        arr[i+1]^=(arr[i]^arr[i-1]);
        arr[i]=arr[i-1];
    }

    for(int i=a-2;i>0;i--)
    {
        arr[i-1]^=(arr[i]^arr[i+1]);
        arr[i]=arr[i+1];
    }

    for(int i=1;i<a;i++)
        if(arr[i]!=arr[i-1])
            return "NO";

    return "YES";
}