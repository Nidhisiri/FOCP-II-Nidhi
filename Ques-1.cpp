#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

    
    bool PrimeNumber(int n){
        if (n<=1)
        return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    
    vector<int> Factors(int n){
        vector<int> factors;
        for(int i=1;i<=n;i++){
            if(n%i==0){ 
                factors.push_back(i);
            }
        }
        return factors;
    }

    int nextPrimeNumber(int n){
        int nextNum=n+1;
        while(!PrimeNumber(nextNum)){
            nextNum++;
        }
        return nextNum;
    }

    int main(){
      int n;
      cout<<"Enter a number = ";
      cin>>n;

      if(PrimeNumber(n)){
        cout<<n<<" is a prime number."<<endl;
        cout<<"The next prime number greater than "<< n <<" is "<<nextPrimeNumber(n)<<endl; 
      }else{
        cout<<n<<" is not a prime number."<<endl;
        cout<<"Factors of "<<n<<" are = ";
        vector<int> factors = Factors(n);
        for(int factors :factors){
            cout<<factors<<" ";
        }
        cout<<endl;
      }
      return 0; 
    }
   





  

