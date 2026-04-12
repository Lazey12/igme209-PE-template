#include "Dog.h"
#include <iostream>


Dog::Dog(const std::string& name, int age)
    : m_name(name), m_age(age)
{
    //default
}

void Dog::bark() const
{
    std::cout << m_name << " says: Woof!" << std::endl;
}

std::string Dog::getName() const
{
    return m_name;
}