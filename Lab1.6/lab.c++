#include <stdio.h>
int* GetMatrix(int *r, int *c){
    static int val[100];
    int i, j;
    printf("Enter rows & columns: ");
    scanf("%d %d", r, c);
    for(i=0 ; i<*r ; i++)
    {
        for(j=0 ; j<*c ; j++){
            printf("Data[%d][%d]: ", i, j);
            scanf("%d", &val[i * (*c) + j]);
        }
    }
    return val;
}
int main(){
    int *data;
    int rows, cols, i, j;
    data = GetMatrix(&rows, &cols);
    printf("Rows = %d\nColumns = %d\n", rows, cols);
    printf("Matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", data[i * cols + j]);
        }
        printf("\n");
    }
    return 0;
}