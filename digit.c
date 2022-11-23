unsigned int digit(int n, int k)
{
    if (n <= 0 || k <= 0)
    {
        return 0;
    }
    int r = 0;
    int j = 1;
    while (j <= k)
    {
        r = n % 10;
        n = n / 10;
        j++;
    }
    return r;
}
