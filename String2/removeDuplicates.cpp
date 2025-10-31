/*
Problem: remove duplicates from a string
Link : https://www.geeksforgeeks.org/dsa/remove-duplicates-from-a-given-string/
*/

#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string str){
    vector<int>seen (256,0);
    string result = "";

    for(int i=0; i<str.length(); i++){
        if(seen[str[i]] == 0){  //found first time
            result += str[i]; 
            seen[str[i]] = 1; //marked as visited
        }
    }
    return result;
}

int main(){
    string str = "apple";
    cout<<removeDuplicates(str);
    return 0;
}
