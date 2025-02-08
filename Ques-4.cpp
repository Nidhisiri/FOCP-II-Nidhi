#include <iostream>
using namespace std;
void spiralMatrix(int n);
int main(){
     int n;
     cout<<"Enter the size of the matrix = ";
     cin>>n;
     spiralMatrix(n);

    return 0;
}


void spiralMatrix(int n){
   int matrix[n][n];
   int value = 1;
   int top = 0, bottom = (n-1), left = 0, right = (n-1);

   while(top<=bottom && left<=right)
   {

    //First row.
         for(int i=left; i<=right; i++)
         {
             matrix[top][i] = value++;
         }
         top++;

    //Right column.     
        for(int i=top; i<=bottom; i++)
        {
            matrix[i][right] = value++;
        }
        right--;
    
   // Bottom row
        if(top<=bottom)
        {
            for(int i=right; i>=left; i--)
             {
                matrix[bottom][i] = value++;
             }
             bottom--;
        }

    // Left column
        if(left<=right)
        {
            for (int i=bottom; i>=top; i--)
            {
                matrix[i][left] = value++;
            }
            left++;
        }
    }
     // Print the matrix
     for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<< matrix[i][j] << " ";
        }
        cout<<endl; 
   }
}

   
















































