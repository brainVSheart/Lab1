#include <stdio.h>
int GetSet(int ar[]);
int main(){
    int n, i, data[100];
    n = GetSet(data);
    printf("Capacity = %d\n", n);
    printf("Numbers = ");
    for(i=0 ; i<n ; i++){           
        printf("%d ", data[i]);
    }
    return 0;
}
int GetSet(int ar[]){
    int n, i;
    printf("Enter number of members: ");
    if(scanf("%d", &n) != 1) {
      printf("Error\n");
        return 0;
    }
    for(i=0 ; i<n ; i++){
        printf("Enter member %d: ", i+1);
        if(scanf("%d", &ar[i]) != 1) {
            printf("Error\n");
        return 0;
        }
    }
    return n;
}
