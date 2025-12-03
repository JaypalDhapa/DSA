#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionsort(int size, int arr[]){
    
    // Outer loop: Iterate from the second element (index 1) to the last element
    for(int i=1; i<size; i++){
        int current = arr[i];  // Store the current element in a variable
        int j = i-1;           // Start comparing with the previous element

        // Inner loop: Shift elements that are greater than 'current' to the right
        while(j >= 0 && arr[j] > current){
            arr[j+1] = arr[j]; // Move the larger element one position ahead
            j--;               // Move to the next element on the left
        }

        // Insert the 'current' element into its correct position
        arr[j+1] = current;
    }
}

// Function to print the array
void print(int size, int arr[]){
    for(int i=0; i<size; i++){
        cout << arr[i] << " "; // Print each element followed by a space
    }
}

int main(){

    // Declare and initialize array
    int arr[] = {5, 0, 3, 7, 9, 4};
    
    // Find size of array (total bytes / bytes of one element)
    int size = sizeof(arr)/sizeof(arr[0]);

    // Call insertion sort function to sort the array
    insertionsort(size, arr);

    // Print sorted array
    print(size, arr);

    return 0; // Exit program successfully
}
