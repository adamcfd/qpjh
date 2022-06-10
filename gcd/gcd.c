#include <stdio.h>
int main()
{
    int a, b;
    printf("please enter a:");
    scanf("%d", &a);
    printf("please enter b:");
    scanf("%d", &b);
    printf("%d %d\n", a, b);
    printf("gcd = %d\n", gcd(a, b));
}

int gcd(int a, int b)
{
    int r = a % b;
    if (r == 0)
    {
        return b;
    }
    return gcd(b, r);
}
