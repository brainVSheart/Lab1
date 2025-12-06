#include <stdio.h>
int GetSet(int ar[]);
int main()
{
    int data[100];
    int n, i;
    n = GetSet(data);
    printf("Capacity = %d\n", n);
    printf("Numbers = ");
    for(i = 0; i < n; i++)
    {           
        printf("%d ", data[i]);
    }
    return 0;
}
int GetSet(int ar[])
{
    int n, i;
    printf("Enter number of members: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter member %d: ", i+1);
        scanf("%d", &ar[i]);
    }
    return n;
}