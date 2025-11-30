#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionsort(int arr[], int size)
{

    int minIndex; // will store index of minimum element
    int temp;     // used for swapping

    // Outer loop: moves from first element to second last element
    for (int i = 0; i < size - 1; i++)
    {

        minIndex = i; // assume current position has the minimum element

        // Inner loop: find the actual minimum element in remaining array
        for (int j = i + 1; j < size; j++)
        {

            // If we find element smaller than current minimum, update minIndex
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // update minIndex to new smallest element
            }
        }

        // After inner loop finishes, minIndex has the index of smallest element
        // Now swap the smallest element with element at position i

        temp = arr[i];          // store element at i
        arr[i] = arr[minIndex]; // place smallest element at i
        arr[minIndex] = temp;   // put the original element at minIndex
    }
}

// Function to print array
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // print each element followed by a space
    }
}

int main()
{

    // Declare and initialize array
    int arr[] = {-100, 99, 1, 0, 36, 78};

    // Calculate size of array (total bytes / bytes of one element)
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call selection sort to sort the array
    selectionsort(arr, size);

    // Print sorted array
    print(arr, size);

    return 0; // exit program successfully
}
