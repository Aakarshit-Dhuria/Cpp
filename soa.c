#include <stdio.h>
#include <conio.h>

// void disp(int *, int);
void disp(int *p, int l)
{
    int product = 1;
    while (l > 0)
    {
        product = product * (*p);
        p++;
        l--;
    }
    printf("%d", product);
}

int main(int argc, char const *argv[])
{
    int a[5], i;
    printf("enter elements of array :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    disp(a, 5);
    return 0;
}