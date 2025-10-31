/*
Problem: maximum occuring character in a string 
Link : https://takeuforward.org/data-structure/maximum-occurring-character-in-a-string/
*/
#include<bits/stdc++.h>
using namespace std;

char getMaxChar(string str){
    unordered_map<char,int>freq;

    for(char ch: str){
        freq[ch]++;
    }

    //find character with max frequency
    int maxCount = 0;
    char maxChar = '\0';

    for(auto pair: freq){
        if(pair.second > maxCount){
            maxCount = pair.second;
            maxChar = pair.first;
        }
    }
    return maxChar;
}

int main(){
    string str = "takeuforward";
    cout<<getMaxChar(str);
    return 0;
}

