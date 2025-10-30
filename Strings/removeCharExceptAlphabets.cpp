/* Problem: remove special characters except alphabets

Time complexity: O(n);
Space Complexity: O(1);
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

//function to remove non-alphabet characters
string removeNonAlphabets(string s){
  string result = "";
  for (char c: s){
    if((c>= 'a' && c<='z') || (c >= 'A' && c <= 'Z')){
      result += c;
    }
  }
  return result;
  }
};

int main(){
  string s = "He!!oo Dun??ya";
   Solution sol;
    cout << "Original String: " << s << endl;
    cout << "Filtered String: " << sol.removeNonAlphabets(s) << endl;
    return 0;
}
