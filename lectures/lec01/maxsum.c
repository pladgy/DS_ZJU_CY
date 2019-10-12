/**
 *最大子序列和：
 * Maximum subsequence sum  * 
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