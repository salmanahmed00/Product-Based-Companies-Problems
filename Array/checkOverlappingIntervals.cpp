/*
***Overlapping Intervals***

Link: https://www.codingninjas.com/codestudio/guided-paths/interview-guide-for-product-based-companies/content/110297/offering/1280151

You have been given the start and end times of 'N' intervals. Write a function to check if any two intervals overlap with each other.

*/


bool checkOverlappingIntervals(long* start, long* end, int n)
{
    //Write your code here 
    
    for(int i = 1; i < n; i++){
        if(start[i-1] < start[i]){
            if(end[i-1] > start[i]){
                return true;
                break;
            }
        }
        
        else{
            if(end[i] > start[i-1]){
                return true;
                break;
            }
        }
    }
    
    return false;
}
