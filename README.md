# Algorithms Complexity and Big O Notation

## Introduction
Algorithms complexity is a measure of how the performance of an algorithm changes with respect to the input size. It helps us understand the efficiency and scalability of algorithms. Big O notation is commonly used to describe the complexity of algorithms. It provides an upper bound on the worst-case scenario of an algorithm's time or space requirements.

## Big O Notation
Big O notation expresses the upper bound or worst-case scenario of an algorithm's time or space complexity in terms of the input size. It allows us to compare the relative efficiency of algorithms without getting into specific details. Here are some commonly used notations in Big O notation:

- **O(1)**: Constant time complexity. The algorithm's execution time remains constant regardless of the input size.
- **O(log n)**: Logarithmic time complexity. The algorithm's execution time grows logarithmically with the input size.
- **O(n)**: Linear time complexity. The algorithm's execution time grows linearly with the input size.
- **O(n log n)**: Linearithmic time complexity. The algorithm's execution time grows linearly multiplied by the logarithm of the input size.
- **O(n^2)**: Quadratic time complexity. The algorithm's execution time grows quadratically with the input size.
- **O(2^n)**: Exponential time complexity. The algorithm's execution time grows exponentially with the input size.

## Popular Sorting Algorithms and their Time Complexity

1. **Bubble Sort**:
   - Best Case: O(n)
   - Average Case: O(n^2)
   - Worst Case: O(n^2)
   
   ````c
   void bubbleSort(int arr[], int n) {
       for (int i = 0; i < n-1; i++) {
           for (int j = 0; j < n-i-1; j++) {
               if (arr[j] > arr[j+1]) {
                   int temp = arr[j];
                   arr[j] = arr[j+1];
                   arr[j+1] = temp;
               }
           }
       }
   }
   ```
   
2. **Insertion Sort**:
   - Best Case: O(n)
   - Average Case: O(n^2)
   - Worst Case: O(n^2)
   
   ````c
   void insertionSort(int arr[], int n) {
       for (int i = 1; i < n; i++) {
           int key = arr[i];
           int j = i - 1;
           while (j >= 0 && arr[j] > key) {
               arr[j+1] = arr[j];
               j = j - 1;
           }
           arr[j+1] = key;
       }
   }
   ```
   
3. **Selection Sort**:
   - Best Case: O(n^2)
   - Average Case: O(n^2)
   - Worst Case: O(n^2)
   
   ````c
   void selectionSort(int arr[], int n) {
       for (int i = 0; i < n-1; i++) {
           int minIndex = i;
           for (int j = i+1; j < n; j++) {
               if (arr[j] < arr[minIndex]) {
                   minIndex = j;
               }
           }
           int temp = arr[i];
           arr[i] = arr[minIndex];
           arr[minIndex] = temp;
       }
   }
   ```

4. **Merge Sort**:
   - Best Case: O(n log n)
   - Average Case: O(n log n)
   - Worst Case: O(n log n)
   
   ````c
   void merge(int arr[], int left, int mid, int right) {
       int i, j, k;
       int n1 = mid - left + 1;
       int n2 = right - mid;
   
       int L[n1], R[n2];
   
       for (i = 0; i < n1; i++)
           L[i] = arr[left + i];
       for (j = 0; j < n2; j++)
           R[j] = arr[mid + 1 + j];
   
       i = 0;
       j = 0;
       k = left;
       while (i < n1 && j < n2) {
           if (L[i] <= R[j]) {
               arr[k] = L[i];
               i++;
           }
           else {
               arr[k] = R[j];
               j++;
           }
           k++;
       }
   
       while (i < n1) {
           arr[k] = L[i];
           i++;
           k++;
       }
   
       while (j < n2) {
           arr[k] = R[j];
           j++;
           k++;
       }
   }
   
   void mergeSort(int arr[], int left, int right) {
       if (left < right) {
           int mid = left + (right - left) / 2;
   
           mergeSort(arr, left, mid);
           mergeSort(arr, mid + 1, right);
   
           merge(arr, left, mid, right);
       }
   }
   ```

## Stable Sorting Algorithms
A stable sorting algorithm is one in which the relative order of elements with equal keys remains unchanged after sorting. In other words, if two elements have the same key and appear in a certain order before sorting, they will retain that order after sorting. Here's an example of a stable sorting algorithm:

**Merge Sort** is a stable sorting algorithm. In the merge step, when merging two sorted subarrays, if two elements have equal keys, the element from the left subarray is placed before the element from the right subarray. This ensures that the relative order of equal elements is preserved.

```c
void merge(int arr[], int left, int mid, int right) {
   // Merging logic
}

void mergeSort(int arr[], int left, int right) {
   if (left < right) {
       int mid = left + (right - left) / 2;
   
       mergeSort(arr, left, mid);
       mergeSort(arr, mid + 1, right);
   
       merge(arr, left, mid, right);
   }
}
```

In the above code snippet, the `merge` function merges two sorted subarrays in a stable manner by considering the relative order of equal elements.

## Repo files layout

0. **Bubble Sort**:

    - *bubble_sort.c*: Bubble sort algorithm logic.
    - *0-O*: BigO  “short” notation for the algorithm.

        - best

        - average
        
        - worst

## Conclusion
Understanding algorithms complexity and Big O notation is crucial for analyzing and comparing the efficiency of different algorithms. We discussed the basics of Big O notation and provided code snippets for popular sorting algorithms, namely Bubble Sort, Insertion Sort, Selection Sort, and Merge Sort. Additionally, we defined stable sorting algorithms and provided an example using Merge Sort. These concepts and examples should help you understand and analyze algorithms more effectively.

