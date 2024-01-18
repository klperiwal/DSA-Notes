* Find two non repeating elements of the array:

void nonrepeating(int arr[],int n)
{
    long a=arr[0];
    for(int i=1;i<n;i++)
        a=a^arr[i];

    int k=(a & -a);
    int k1=0,k2=0;
    for(int i=0;i<n;i++)
    {
        if(k & arr[i])
            k1^=arr[i];
        else
            k2^=arr[i];
    }
    cout<<k1<<" "<<k2<<endl;
    return;
}
