
long long sum = 0;
int i;

if (n < 0)
{
    printf("NG\n");
}
else
{
    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }

    printf("%lld\n", sum);
}
