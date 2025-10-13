/*
Problem: reversing the array
Link: https://www.naukri.com/code360/problems/reverse-the-array_1262298

Approach: just use two pointers and swap the left and right values, left would start after index m 

Time complexity: O(n)
Space complexity: O(1)
*/

void reverseArray(vector<int> &arr , int m) {
    int left = m+1;
    int right =  arr.size()-1;

    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }    	
}
