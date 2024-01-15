// //User function template for C++
// Given an array Arr of size N, print second largest distinct element from an array.

// Example 1:

// Input: 
// N = 6
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the 
// array is 35 and the second largest element
// is 34.
// Example 2:

// Input: 
// N = 3
// Arr[] = {10, 5, 10}
// Output: 5
// Explanation: The largest element of 
// the array is 10 and the second 
// largest element is 5.






class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int maxi1=INT_MIN,maxi2=INT_MIN,c=0;
	    for(int i=0;i<n;i++)
	  {
	      if(maxi1<arr[i]){
	          c++;
	          maxi2=maxi1;
	          maxi1=arr[i];
	          
	      }
	     else if(maxi1>arr[i] && maxi2<arr[i]){
	         c++;
	         maxi2=arr[i];
	     }
	  }
	  if(c==1){
	      return -1;
	  }
	    return maxi2;    
	    
	}
};