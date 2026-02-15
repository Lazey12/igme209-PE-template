#include "functions.h"

//count elements until -1
int getLengthArray(int arr[])
{
    int count = 0;

    while (arr[count] != -1)
    {
        count++;
    }

    return count;
}

//count elements until -1 using pointer arithmetic
int getLengthPointer(int* ptr)
{
    int count = 0;

    while (*(ptr + count) != -1)
    {
        count++;
    }

    return count;
}

//create stack array and return pointer
int* createStackArray()
{
    int data[5];

    for (int i = 0; i < 5; i++)
    {
        data[i] = i;
    }

    return data;
}

//create heap array using new
int* createHeapArray(int size)
{
    int* data = new int[size];

    for (int i = 0; i < size; i++)
    {
        data[i] = i;
    }

    return data;
}