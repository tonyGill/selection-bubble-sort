/*

Algorithm was designed in the following series of steps:
1) Declare void function prototypes for bubble sort and selection sort with integer array and data types
3) Declare and define the main function with integer data types identical arrays for storing 8 integers 
4) Display output for the array of integers contained in the first array 
5) Call upon the bubble sort function to determine and display array contents after each pass of the sort is made
6) Display output for the array of integers contained in the second array
7) Call upon the selection sort function to determine and display array contents after each pass of the sort is made
8) Declare and define the bubble sort method to determine each of the passes made in the bubble sort 
9) Declare and define the selection sort method to determine each of the passes made in the selection sort

Functions/Formulas:

Functions in this case are the main, bubbleSort and selectionSort functions.

The main function defines and initializes the two identical arrays of 8 integer data type elements and displays contents of each of the arrays.
Main also calls upon the bubble and selection sort functions to display array contents after each pass is made within the sorts,


The bubble sort function determines and displays each of the passes made by a bubble sort approach.
The selection sort function determines and displays each of the passes made by a selection sort approach.


Revision History:
March 11, 2019: First working edition created, revised and completed


*/

#include<iostream>
using namespace std;

// Function prototype for determining and displaying array contents after each pass is made in a bubble sort 
void bubbleSort(int arr[], int);

// Function prototype for determining and displaying array contents after each pass is made in a selection sort 
void selectionSort(int arr[], int);



// Declares the main function
int main()
{
	// Defines the main function

	// Integer data type array for storing an array of 8 integers 
	int arr[8] = { 7,6,23,13,10,11,17,1 };

	// Integer data type second identical array for storing an array of 8 integers 
	int arr2[8] = { 7,6,23,13,10,11,17,1 };

	// Displays output for the array1 of integers before sorting
	cout << "\nContents of Array 1 : " << endl;

	// Iterates over each of the 8 array integer values 
	for (int i = 0; i < 8; i++)

		// Displays output for each of the array contents before sorting
		cout << " " << arr[i];
	cout << endl;

	// Calls the bubble sort function to determines and display each of the passes made in a bubble sort 
	bubbleSort(arr, 8);

	// Displays output for the array2 of integers before sorting
	cout << "\nContents of Array 2 : " << endl;

	// Iterates over each of the 8 array integer values 
	for (int i = 0; i < 8; i++)

		// Displays output for the array2 of integers before sorting
		cout << " " << arr2[i];
	cout << endl;

	// Calls the selection sort function to determines and display each of the passes made in a selection sort 
	selectionSort(arr2, 8);


	return 0;
}

// Declares the bubble sort function 
void bubbleSort(int arr[], int size)
{
	// Defines the bubble sort function 

	// Declares integer data type variable for a temporary storage value
	int temp;

	// Declares integer data type variable for storing each swap value
	int swap;

	// Display output of the array contents prior to bubble sort
	cout << "\nBubble Sort" << endl;

	// Do while loop for determing each pass made in the bubble sort 
	do {

		// Initialize swap to false
		swap = false;

		// Iterates over the integer array of values for the bubble sort array 
		for (int c = 0; c < (size - 1); c++) {

			// Checks to see if the array value is greater than the subsequent/next array value
			if (arr[c] > arr[c + 1]) {

				// If the above is true then the current array value element is overwritten by the array element thats greater than the subsequent array value
				temp = arr[c];
				arr[c] = arr[c + 1];
				arr[c + 1] = temp;
				swap = true;

			}
		}
		// Iterates over each of the array elements 
		for (int i = 0; i < size; i++)

			// Displays each pass made by the bubble sort 
			cout << arr[i] << " ";
		cout << endl;
	}
	// The loop continues as long as passes are being made in the bubble sort 
	while (swap);
}


// Declares the selection sort function
void selectionSort(int arr[], int size)
{

	// Defines the selection sort function

	// Integer data type variable used to scan each of the array contents after passes are made
	int scan;


	// Integer data type variable for the minimum integer value within the selection sort array 
	int minIntVal;

	// Integer data type variable for the minimum index value within the selection sort array 
	int minIndex;

	// Display output of the array contents prior to selection sort 
	cout << "\nSelection Sort" << endl;



	// Iterates over the integer array of values for the selection sort array 
	for (int scan = 0; scan < (size - 1); scan++) {

		// Sets the scan value to the minimum array index value
		minIndex = scan;

		// Stores each array scan iteration as the minimum integer value 
		minIntVal = arr[scan];


		// Iterates over each of the selection sort array values 
		for (int j = scan + 1; j < size; j++)
		{

			// Checks to see if the array iteration value is less than the minimum selection sort array value
			if (arr[j] < minIntVal) {

				// If the above is true the minimum array value is overwritten by the array iteration value
				minIntVal = arr[j];

				// Minimum array index value is set as the array iteration
				minIndex = j;


			}
		}

		// Sets the selection sort scan iterations as the minimum array index element
		arr[minIndex] = arr[scan];

		// Eacg array scan iteration is equal to the minimum array integer value
		arr[scan] = minIntVal;

		// Iterates over each of the selection sort array elements
		for (int i = 0; i < size; i++)

			// Displays each pass made by the selection sort 
			cout << arr[i] << " ";
		cout << endl;
	}

}
