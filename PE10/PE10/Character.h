#pragma once
#include <iostream>
#include <string>

using namespace std;

//base class
class Character
{
protected:
    string name;
public:
    Character(const string& n)
    {
        name = n;
    }

    virtual void speak() = 0
    {

    }

    virtual ~Character()
    {

    }
};

//archer class
class Archer : public Character
{
public:
    Archer(const string& n) : Character(n)
    {
    }

    void speak()
    {
        cout << name << " (Archer): \"I see the target ahead!\"" << endl;
    }
};

//warrior class
class Warrior : public Character
{
public:
    Warrior(const string& n) : Character(n)
    {

    }

    void speak()
    {
        cout << name << " (Warrior): \"Ready my sword!\"" << endl;
    }
};