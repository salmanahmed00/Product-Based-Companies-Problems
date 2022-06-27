/*
***Majority element***

Link: https://www.codingninjas.com/codestudio/guided-paths/interview-guide-for-product-based-companies/content/110297/offering/1280156?leftPanelTab=0

You have been given an array/list 'ARR' consisting of 'N' integers. Your task is to find the majority element in the array. 
If there is no majority element present, print -1.

*/

#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	
    int ele;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        if(count == 0){
            ele = arr[i];
        }
        
        if(ele == arr[i]){
            count++;
        }
        
        else{
            count--;
        }
    }
    
    count = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == ele){
            count++;
        }
    }
    if(count > n/2){
        return ele;
    }
    
    return -1;
}
