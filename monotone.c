//Steven Cotton A12565940
#include <stdio.h>
int main(){
    int rows, columns, i, j, temp;
    printf("Number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    int matrix[rows][columns];
    printf("Matrix elements:\n");
    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++)
            scanf(" %d",&matrix[i][j]);
    }
    
    for (i=0;i<rows;i++){                   //sorts each row
        for (j=0;j<columns-1;j++){
            if(matrix[i][j]<matrix[i][j+1]){
                temp=matrix[i][j];
                matrix[i][j]=matrix[i][j+1];
                matrix[i][j+1]=temp;
                j=-1;
            }
        }
    }

    for(i=rows-1;i>0;i--){                  //sorts each column (backwards)
        for(j=columns;j>=0;j--){        
            if (matrix[i-1][j]<matrix[i][j]){
                temp=matrix[i][j];
                matrix[i][j]=matrix[i-1][j];
                matrix[i-1][j]=temp;
                i=rows;
            }
        }
    }

    printf("Sorted matrix:\n");
    for(i=0;i<rows;i++){ 
        for (j=0;j<columns;j++){
            if (j<columns-1)
                printf("%d ",matrix[i][j]);
            else
                printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
