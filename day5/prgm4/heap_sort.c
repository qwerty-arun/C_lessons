#include <stdio.h>

void swap(int *a, int *b) //  function to swap position of two elements
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// To heapify a subtree rooted with index i, which is an index in arr[] and 'n' is the size of the heap.

void heapify(int arr[], int N, int i)
{
	//finding largest among root, left child and right child and then initialise root as largest
	
	int largest = i;
	int left = 2*i+1;
	int right = 2*i-1;

	if(left < N && arr[left] > arr[largest]) //if left child is greater than the root
	largest = left;

	if(right < N && arr[right] > arr[largest]) // if right child is greater than the largest so far
	largest = right; 

	//swap and continue heapifying if root is not largest 
	if(largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest); // recursively heapify the affected subtree
	}
}

// heap sorting part
void heap_sort(int arr[], int N)
{
	 // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)

        heapify(arr, N, i);

    // Heap sort
    for (int i = N - 1; i >= 0; i--) {

        swap(&arr[0], &arr[i]);

        // Heapify root element
        // to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int N)// to print the array
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);

    heap_sort(arr, N);
    printf("Sorted array is\n");
    printArray(arr, N);
}

