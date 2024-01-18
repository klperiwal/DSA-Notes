 :: Rightmost SetBit Mask ::

Suppose take a number 52 --> 000...00110100.
RSBM of 52: 000...00000100.

The rightmost bit which is 1 will only be present, rest all the bits will become 0.
RSBM of x = x & (2's complement of x)
		  = x & -x

* Kernighan's Algorithm:
Efficient way to find the number of set bits in an integer.
Calculate the RSBM and subtract it from the given number (until number>0).
Increase the counter every time while performing the above steps.

int kernighan(int n
{
    int sum=0;
    while(n>0)
    {
        int k=(n & -n);
        n=n-k;
        sum++;
    }
    return sum;
}