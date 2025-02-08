#include <iostream>
#include <iomanip>
using namespace std;

void rotateMatrix(int matrix[3][3], int n);
void printMatrix(int matrix[3][3], int n);

int main() {
    int matrix[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n=3;
    
    cout << "Matrix = " << endl;
    printMatrix(matrix, n);

    rotateMatrix(matrix, n);

    cout << "Matrix after 90 degree rotation = " << endl;
    printMatrix(matrix, n);

    return 0;
}


void rotateMatrix(int matrix[3][3], int n){
    // Transpose the matrix.
    for(int r=0; r<n; r++)
    {
        for(int c=(r+1); c<n; c++)
        {
            swap(matrix[r][c], matrix[c][r]);
        }
    }

    // Reverse each row.
    for (int i=0; i<n; i++) 
    {
        int start=0, end=(n - 1);
        while (start<end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

void printMatrix(int matrix[3][3], int n){
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<n; c++)
        {
            cout<<matrix[r][c]<<" ";
        }
        cout<<endl;
    }
}
