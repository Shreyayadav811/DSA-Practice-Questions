/*
Problem: count number of words in a string
Link: https://takeuforward.org/data-structure/count-the-number-of-words-in-a-given-string/

Approach:
the number of words will always be equal to number of spaces+1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  string str = "hey there";

  int spaces = 0;
  for(int i=0; i<str.length(); i++){
    if(str[i] == ' '){
      spaces = spaces+1;
  }
}
cout<<spaces+1;
}
