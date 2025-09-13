#include<iostream>
using namespace std;


//function to perform Bubble Sort
void bubblesort(int arr[],int size){

    int temp; //variable used for swapping
    bool swapped; //flag to check if any swapping happened in a pass

    // Inner loop: compares adjacent elements up to (size - i - 1)
    for(int i=0; i<size-1; i++){

        swapped=false; // initially set swapped to false at the start of each pass

            // Inner loop: compares adjacent elements up to (size - i - 1)
            for(int j=0; j<size-(i+1); j++){

                // If current element is greater than next element, swap them
                if(arr[j]>arr[j+1]){
                    temp=arr[j];        // store current element in temp
                    arr[j]=arr[j+1];     // move next element to current position
                    arr[j+1]=temp;      // put temp (original current element) in next position

                    swapped=true;   // since swap happened, set swapped = true
                }

        
            }

            // If no swap happened in the entire pass, array is already sorted → break early
            if(!swapped){
                break;
        }
    }
    

}

// Function to print array
void print(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i] <<" "; // print each element followed by a space
    }
}



int main(){

    // Declare and initialize array
    int arr[]={9,8,7,6,5,4,3,2,1};

    // Find size of array (total bytes / bytes of one element)
   int size=sizeof(arr)/sizeof(arr[0]);

   // Call bubble sort function to sort the array
    bubblesort(arr,size);

    // Print sorted array
    print(arr,size);

    
    return 0;    // exit program successfully
}