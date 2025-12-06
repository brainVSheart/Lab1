#include <stdio.h>
void GetMatrix(int val[], int *r, int *c){
    int i, j;
    printf("Enter rows & columns: ");
    scanf("%d %d", r, c);
    for(i=0 ; i<*r ; i++)
    for(j=0 ; j<*c ; j++){
        printf("Data[%d][%d]: ", i, j);
        scanf("%d", &val[i * (*c) + j]);
    }
}
int main(){
    int data[100];
    int rows, cols;
    int i, j;
    GetMatrix(data, &rows, &cols);
    printf("Rows = %d\nColumns = %d\n", rows ,cols);
    printf("Matrix:\n");
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<cols ; j++){
            printf("%d ", data[i*cols+j]);
        }
        printf("\n");
    }   
    return 0;

}
