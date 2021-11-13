// Asymptotic Analysis
// we measure the order of growth of program or algorithm based on input size.

int sum1(int n)   // --> C1 (constant work) (3 operaions not depending on n)
{
    return n * (n + 1) / 2;
}

int sum2(int n)   // --> C2 n + C1 
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int sum3(int n)  //--> C4 n^2 + C5 n + C6 
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum++;
        }
    }
    return sum;
}