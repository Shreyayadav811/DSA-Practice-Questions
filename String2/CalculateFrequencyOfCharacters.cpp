/*
Problem: caclculate frequency of characters in  a string
*/

#include<bits/stdc++.h>
using namespace std;

void printFrequency(string str){
    char ch = str[0];
    int count = 1;
    for(int i=1; i<str.length(); i++){
        if(str[i] == ch){
            count++;
        }
        else{
            cout<<ch<<count<<" ";
            count  = 1;
            ch = str[i];
        }
        
    }
     cout << ch << count << " ";
}

int main()
{
  string str = "halloween";
  printFrequency(str);
  return 0;
}
