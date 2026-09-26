#include<stdio.h>
#include<stdlib.h>
void spiralOrder(int n){
int** matrix=(int**)malloc(n*sizeof(int*));
int num=1;
int top=0;
int bottom=n-1;
int left=0;
int right=n-1;
for(int i=0;i<n;i++){
    matrix[i]=malloc(n*sizeof(int));
}
while(top<=bottom && left<=right){
//left to right
for(int i=left;i<=right;i++){
matrix[top][i]=num++;
}
top++;
//top to bottom
for(int i=top;i<=bottom;i++){
matrix[i][right]=num++;
}
right--;
//right to left
for(int i=right;i>=left;i--){
matrix[bottom][i]=num++;
}
bottom--;
//bottom to top
for(int i=bottom;i>=top;i--){
matrix[i][left]=num++;
}
left++;

}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}

free(matrix);
}
int main(){
int n=3;
//using pointers
spiralOrder(n);
return 0;
}