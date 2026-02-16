#pragma once
// typedef for all array helper functions
typedef void (*ArrayFunction)(int arr[]);

void fillArray(int arr[]);
void printArray(int arr[]);
void printAverage(int arr[]);
void printMax(int arr[]);
void printMin(int arr[]);

void callFunctions(ArrayFunction functions[], int arr[]);