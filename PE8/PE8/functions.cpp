#include "functions.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArray(int arr[])
{
    srand((unsigned)time(nullptr));

    for (int i = 0; arr[i] != -1; i++)
    {
        arr[i] = rand() % 101; //0-100 inclusive
    }
}

void printArray(int arr[])
{
    cout << "Array values: ";
    for (int i = 0; arr[i] != -1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printAverage(int arr[])
{
    int sum = 0;
    int count = 0;

    for (int i = 0; arr[i] != -1; i++)
    {
        sum += arr[i];
        count++;
    }

    if (count > 0)
    {
        cout << "Average: " << (double)sum / count << endl;
    }
}

void printMax(int arr[])
{
    if (arr[0] == -1)
    {
        return;
    }


    int max = arr[0];

    for (int i = 1; arr[i] != -1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Max: " << max << endl;
}

void printMin(int arr[])
{
    if (arr[0] == -1)
    {
        return;
    }


    int min = arr[0];

    for (int i = 1; arr[i] != -1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Min: " << min << endl;
}

void callFunctions(ArrayFunction functions[], int arr[])
{
    for (int i = 0; functions[i] != nullptr; i++)
    {
        functions[i](arr);
    }
}