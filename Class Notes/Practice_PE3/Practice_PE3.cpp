// Practice_PE3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "functions.h"

using namespace std;

void printCourse();


int main()
{
    printCourse();
    std::cout << min(10, 20) << endl;
    std::cout << min(20, 10) << endl;

    std::cout << max(10, 20) << endl;
    std::cout << max(20, 10) << endl;

    std::cout << inOrder(10, 20, 30) << endl;
    std::cout << inOrder(10, 30, 20) << endl;
}

void printCourse()
{
    std::cout << "IGME-209: Real-Time Simulations and Games 1 (RTSG1)" << endl;
}