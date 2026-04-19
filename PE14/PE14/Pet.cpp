#include "Pet.h"
#include <iostream>
#include <fstream>

//constructor with values
Pet::Pet(const std::string& name, const std::string& type, int age)
{
    this->name = name;
    this->type = type;
    this->age = age;
}

//constructor from line
Pet::Pet(std::string& line)
{
    size_t pos1 = line.find(',');
    size_t pos2 = line.find(',', pos1 + 1);

    name = line.substr(0, pos1);
    type = line.substr(pos1 + 1, pos2 - pos1 - 1);

    std::string ageStr = line.substr(pos2 + 1);
    age = std::stoi(ageStr);
}

//display info
void Pet::DisplayInfo() const
{
    std::cout << name << " is a " << age << "-year-old " << type << "." << std::endl;
}

//save to file
void Pet::SaveToFile(std::string& filename) const
{
    std::ofstream outFile(filename, std::ios::app);

    if (outFile.is_open())
    {
        outFile << name << "," << type << "," << age << std::endl;
        outFile.close();
    }
    else
    {
        std::cout << "error opening file" << std::endl;
    }
}