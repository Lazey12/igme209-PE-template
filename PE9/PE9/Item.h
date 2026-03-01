#pragma once
struct Item
{
private:
	char* itemName;
	int itemWeight;

public:
	Item(const char* itemName, int itemWeight);
	~Item();
	void print();
};