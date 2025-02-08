#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array = ";
    for(int i=0;i<n;i++) {
      cin>>arr[i];
    }
    cout<<"Reverse of an Array = ";
    for(int i=(n-1);i>=0;i--){
        cout<<arr[i]<<" ";
    }
   cout<<endl;

   if (n<2) {
        cout<<"Array is too small to find second smallest and second largest."<<endl;
    } else {
        int largest = arr[0], secondLargest = arr[0];
        int smallest = arr[0], secondSmallest = arr[0];
        
        for (int i = 1; i < n; i++) {
            // Check for largest and second largest
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }

            // Check for smallest and second smallest
            if (arr[i] < smallest) {
                secondSmallest = smallest;
                smallest = arr[i];
            } else if (arr[i] < secondSmallest && arr[i] != smallest) {
                secondSmallest = arr[i];
            }
        }

        cout<<"Second smallest element = " << secondSmallest << endl;
        cout<<"Second largest element =  " << secondLargest << endl;
    }

    return 0;
}
   

    







    