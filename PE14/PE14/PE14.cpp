// PE14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "Pet.h"

int main()
{
    std::string filename = "pets.txt";

    //create pets
    Pet p1("Lacy", "cat", 5);
    Pet p2("Shiro", "cat", 8);
    Pet p3("Pax", "dog", 7);

    //display and save
    p1.DisplayInfo();
    p1.SaveToFile(filename);

    p2.DisplayInfo();
    p2.SaveToFile(filename);

    p3.DisplayInfo();
    p3.SaveToFile(filename);

    std::cout << "\nloaded pets from file:\n";

    //load pets
    std::vector<Pet> pets;
    std::ifstream inFile(filename);

    if (inFile.is_open())
    {
        std::string line;

        while (std::getline(inFile, line))
        {
            if (!line.empty())
            {
                Pet p(line);
                pets.push_back(p);
            }
        }

        inFile.close();
    }
    else
    {
        std::cout << "error opening file" << std::endl;
    }

    //display loaded pets
    for (const Pet& p : pets)
    {
        p.DisplayInfo();
    }

    return 0;
}