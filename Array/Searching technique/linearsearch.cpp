#include <iostream>
using namespace std;

// Function to perform Linear Search
int linearsearch(int arr[], int size, int search){

    // Loop through each element of the array
    for(int i = 0; i < size; i++){

        // Check if current element matches the value we are searching for
        if(arr[i] == search){
            return i;  // If match found, return its index
        }
    }

    // If loop completes and no match found → return -1
    return -1;
}

int main(){

    // Declare and initialize array
    int arr[] = {5, 4, 7, 8, 2, 1, 3};

    // Calculate size of array (total bytes / bytes of one element)
    int size = sizeof(arr) / sizeof(arr[0]);

    int search;  // Variable to store the number user wants to search

    // Ask user for the element to search
    cout << "Search Element : ";
    cin >> search;

    // Call linear search function and store result
    int result = linearsearch(arr, size, search);

    // If result is not -1, element was found
    if(result != -1){
        cout << "Found at index " << result;
    }
    else{
        cout << "Not found";   // If result is -1 → element not present
    }

    return 0; // Program ended successfully
}
