#include<stdio.h>
#include<stdlib.h>

typedef struct Matrix
{
	int matrix[1000][1000];
}Matrix;

Matrix *matrix_multiply(Matrix *a,Matrix *b,int p,int q,int r)
{
	Matrix *result;
	result = malloc(sizeof(Matrix));
	/*
	size of matrix a is pxq
	size of matrix b is qxr
	Maximum value of p,q or r can be 1000.
	Your Code goes here. The output of their matrix multiplication
	should be stored in result and returned. Just code this function,
	no need to write anything in main(). This function will be called directly.
	We are dealing with pointers so use result->matrix and not result.matrix

	Also note you can write any other function that you might need.
	*/

    //int **a_poi = (int **)a->matrix;
    //printf("%d\n",**a_poi);
    int i = 0;
    int j = 0;
    int k = 0;


    while(j < q){
        
        while(i < p){
            k = 0;
            while(k < r){
                result->matrix[i][k] += a->matrix[i][j]*b->matrix[j][k];
                k++;
            }
         }
    }
     

    return result;
}

int main()
{
    Matrix a,b;

    for(int i = 0;i < 1000;i++){
        for(int j = 0;j < 1000;j++){
            a.matrix[i][j] = 2;
            b.matrix[i][j] = 2;
        }
    }

    Matrix *res = matrix_multiply(&a,&b,1000,1000,1000);

    for(int i =  0;i < 5;i++){
        printf("%d\n",res->matrix[i][4]);
    }
    return 0;
}

