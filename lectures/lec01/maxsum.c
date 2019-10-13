/**
* Cubic maximum contiguous subsequence sum algorithm.
*/
int maxSubSum1(const int a[] , int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            int thisSum =0;

            for (int k = i; k <= j; k++)
                thisSum += a[k];
  
            if (thisSum > maxSum)
                maxSum = thisSum;            
        }
        
    return maxSum;
}

/**
* Quadratic maximum contiguous subsequence sum algorithm.
*/
int maxSubSum2(const int a[] , int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        int thisSum = 0;
        for (int j = i; j < n; j++)
        {
            thisSum += a[j];
            if(thisSum > maxSum)
                maxSum = thisSum;
        }        
    } 

    return maxSum;   
}

/**
* Recursive maximum contiguous subsequence sum algorithm.
* Finds maximum sum in subarray spanning a[left..right].
* Does not attempt to maintain actual best sequence.
*/
int maxSumRec( const int a[], int left, int right )
{

}

/**
* Driver for divide-and-conquer maximum contiguous
* subsequence sum algorithm.
*/
int maxSubSum3( const int a[], int n)
{
    return maxSumRec(a, 0, n-1);
}