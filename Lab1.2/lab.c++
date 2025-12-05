#include <stdio.h>
void GetSet(int ar[],int *c);
int main(){
    int *data, num;
    GetSet(data,&num);
    return 0 ;
}
void GetSet(int ar[],int *c){
    int i;
    printf("Enter number capasity: ");
    scanf("%d",c);
    for(i=1;i<=*c;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&ar[i]);
    if(i==*c)
    {
        printf("Now show capasity &all number\n");
        printf("Capasity: %d\n",*c);
        printf("Number is:");
        for(i=1;i<=*c;i++)
        {           
            printf("%d ",ar[i]);
        }
    }
    }
}