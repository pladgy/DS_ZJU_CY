/**
* Cubic maximum contiguous subsequence sum algorithm.
*/
int maxSubSum1(const int a[], int n)
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
int maxSubSum2(const int a[], int n)
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
 * Return maximum of three integers.
 */
int max3(int a, int b, int c)
{
    return a > b ? a > c ? a : c : b > c ? b : c;
}

/**
* Recursive maximum contiguous subsequence sum algorithm.
* Finds maximum sum in subarray spanning a[left..right].
* Does not attempt to maintain actual best sequence.
*/
int maxSumRec(const int a[], int left, int right)
{
    if (left == right)
        if (a[left] > 0) //Base case
            return a[left];
        else
            return 0;
        
    int center = (left + right) / 2;
    int maxLeftSum = maxSumRec(a, left, center);
    int maxRightSum = maxSumRec(a, center + 1, right);
    
    int maxLeftBorderSum = 0, leftBorderSum = 0;
    for (int i = center; i >= left; i--)
    {
        leftBorderSum += a[i];
        if (leftBorderSum > maxLeftBorderSum)
            maxLeftBorderSum = leftBorderSum;
    }

    int maxRightBorderSum = 0, rightBorderSum = 0;
    for (int i = center + 1; i <= right; ++i)
    {
        rightBorderSum += a[i];
        if (rightBorderSum > maxRightBorderSum)
            maxRightBorderSum = rightBorderSum;            
    }
    
    return max3(maxLeftSum, maxRightSum, 
                    maxLeftBorderSum + maxRightBorderSum);        
}

/**
* Driver for divide-and-conquer maximum contiguous
* subsequence sum algorithm.
*/
int maxSubSum3(const int a[], int n)
{
    return maxSumRec(a, 0, n-1);
}

/**
* Linear-time maximum contiguous subsequence sum algorithm.
*/

int maxSubSum4(const int a[], int n)
{
    int maxSum = 0, thisSum = 0;

    for (int i = 0; i < n; i++)
    {
        thisSum += a[i];

        if (thisSum > maxSum)
            maxSum = thisSum;
        else if(thisSum < 0)
            thisSum = 0;
    }
    return maxSum;    
}