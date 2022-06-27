/*
***Pair Sum***

Link: https://www.codingninjas.com/codestudio/guided-paths/interview-guide-for-product-based-companies/content/110297/offering/1280152

You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements
such that each sum of elements of each pair equals 'S'.

*/


#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    
    vector<vector<int>> ans;
    
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]+arr[j] == s){
                if(arr[i] < arr[j]){
                    ans.push_back({arr[i], arr[j]});
                }
                
                else{
                    ans.push_back({arr[j], arr[i]});
                }
            }
        }
    }
    
    sort(ans.begin(), ans.end());
    
    return ans;
}
