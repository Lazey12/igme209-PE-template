#pragma once

#include <string>

class Dog
{
    Dog(const std::string& name, int age);

    void bark() const;


    std::string getName() const;
    int getAge() const;

    void setAge(int age);


protected:
	std::string m_name;

private:
	int m_age;
};

