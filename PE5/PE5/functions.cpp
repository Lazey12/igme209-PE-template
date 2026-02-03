// This is needed at the TOP of the file to disable secure warnings on Visual Studio
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstring> 

using namespace std;

void generateRandom(int numberOfRandoms)
{
    // Seed the random number generator ONCE
    srand(time(NULL));

    for (int i = 0; i < numberOfRandoms; i++)
    {
        int value = rand();
        cout << "Iteration " << i << ": " << value << endl;
    }
}


// This function takes in a C String and attempts to reverse it. 
// It returns a character "pointer". 
// 
// We will talk about pointers soon, but for the sake of this example, just imagine it is 
// returning a char[]. Arrays and pointers are very similar and can be used in a lot 
// of similar ways, including printing out to the console.
//char* reverseString_broken(char inputString[])
//{
//    char newString[256] = "";
//    int length = strlen(inputString);
//    for (int i = 0; i < length; i++)
//    {
//        char c = inputString[i];
//        newString[length - i] = c;
//    }
//
//    // The next two lines are fine. Leave them alone.
//    strcpy(inputString, newString);
//    return inputString;
//}


char* reverseString_fixed(char inputString[])
{
    int length = strlen(inputString);

    for (int i = 0; i < length / 2; i++)
    {
        char temp = inputString[i];
        inputString[i] = inputString[length - 1 - i];
        inputString[length - 1 - i] = temp;
    }

    return inputString;
}