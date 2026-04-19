#pragma once
#include <string>

class Pet
{
public:
    Pet(const std::string& name, const std::string& type, int age);
    Pet(std::string& line);

    void DisplayInfo() const;
    void SaveToFile(std::string& filename) const;

private:
    std::string name;
    std::string type;
    int age;
};