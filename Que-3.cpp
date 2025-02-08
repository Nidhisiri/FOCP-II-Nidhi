#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool Palindrome(string str);
void countFrequency(string str);
string replaceVowels(string str);

int main(){
    string str;
    cout << "Enter a string = ";
    getline(cin, str);  

    // Checking whether the string is a palindrome or not.
    if(Palindrome(str))
    {
        cout<<"The string is the Palindrome."<<endl;
    } else
    {
        cout<<"The string is not the Palindrome."<<endl;
    }

    // Counting the frequency of the characters in the string
    cout<<"Character Frequency = "<<endl;
    countFrequency(str);

    // Replacing vowels in the string with '*'
    string newStr = replaceVowels(str);
    cout<<"The string after vowels are replaced by '*' = " <<newStr<<endl;

    return 0;
}

// Function to check if the string is a palindrome
bool Palindrome(string str){
    string modified = "";

    for (int i = 0; i < str.length(); i++)
    {
        char c = tolower(str[i]);  
          if (c != ' ') 
          {
              modified += c; 
          }
    }

    int n = modified.length();
    for (int i=0; i<(n/2); i++) {
        if (modified[i] != modified[n-i-1])
        {
            return false;  
        }
    }

    return true; 
}

// Function to count the frequency of each character in the string
void countFrequency(string str){
    int count[26]={0}; 

    
    for(int i=0; i<str.length(); i++)
    {
        if(isalpha(str[i]))
        {
            count[tolower(str[i])-'a']++;
        }
    }

    for(int i=0; i<26; i++)
    {
        if(count[i]>0)
        {
            cout<<char(i+'a')<<": "<<count[i]<<endl;
        }
    }
}

// Function to replace vowels with '*' in the string
string replaceVowels(string str){
    for(int i=0; i<str.length(); i++)
    {
        char ch=tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            str[i] = '*';
        }
    }
    return str;
}
