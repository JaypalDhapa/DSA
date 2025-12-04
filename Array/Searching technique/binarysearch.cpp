#include <iostream>
using namespace std;

// Function to perform Binary Search
int binarysearch(int arr[], int size, int search){

    int start = 0;           // Start index of the array
    int end = size - 1;      // End index of the array

    // Loop continues as long as start index is <= end index
    while(start <= end){

        // Find middle index to divide the array
        int mid = start + (end - start) / 2;

        // Check if middle element is the one we are searching
        if(arr[mid] == search){
            return mid;      // If found, return the index
        }
        // If middle element is smaller than search value, search in right half
        else if(arr[mid] < search){
            start = mid + 1;  // Move start to mid+1
        }
        // If middle element is larger than search value, search in left half
        else{
            end = mid - 1;    // Move end to mid-1
        }
    }

    // If element not found, return -1
    return -1;
}

int main(){

    // Declare and initialize a sorted array (binary search requires sorted array)
    int arr[] = {10,20,30,40,50,60,70,80,90,100};

    // Calculate size of array
    int size = sizeof(arr) / sizeof(arr[0]);

    int search;   // Variable to store the number user wants to search

    // Ask user for the element to search
    cout << "Search Element : ";
    cin >> search;

    // Call binary search function and store result
    int result = binarysearch(arr, size, search);

    // If result is not -1, element was found
    if(result != -1){
        cout << "Element found at index " << result;
    }
    else{
        cout << "Not found";  // If result is -1 → element not present
    }

    return 0;  // Program ended successfully
}
