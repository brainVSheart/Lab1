#include <stdio.h>
int *GetSet(int *c);
int main() {
    int *data, num;
    int i;
    data = GetSet(&num);
        printf("Capacity = %d\n", num);
        printf("Numbers = ");
        for(i=0;i<num;i++)
        {           
            printf("%d ",data[i]);
        }
}
int *GetSet(int *c)
{
    static int ar[100];
    printf("Enter number of members: ");
    scanf("%d", c);
    int i;
    for(i = 0; i < *c; i++)
    {
        printf("Enter member %d: ", i+1);
        scanf("%d", &ar[i]);
    }
        return ar;
}