
int is_prime(int p)
{
    for(int i = 2; i <= p/2; i++)
    {
        if (p % i == 0)
            return 0;
    }
    return 1;
}

int next_prime(int i)
{
    int next = i + 1;
    while (!is_prime(next))
    {
        next += 1;
        // printf("Testujê %i\n", next);
    }
    return next;
}
