// PE15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <thread>
#include "GamePlay.h"
#include "NumberPrinter.h"
using namespace std;


int main()
{

	// PART 1
	//vector<thread> threads;

	////ok before 50 it was more clearer, now after 50 it is ENTIRELY messed up.
	//// too many threads running to cout i think? and not everything is filled up wioth thread
	////its like fighting for a shampoo all at the same time and
	//// there is too much people compared to shampoo
	//// then they run to cashier (cout) and try to checkout, but cashier (cout) can only do so much
	//for (size_t i = 0; i < 50; i++)
	//{
	//	NumberPrinter numPrinter(i);

	//	////numbers are grouped well, row by row column by coluimn
	//	//// is it because it runs one by one
	//	//numPrinter.Print();

	//	threads.push_back(thread(&NumberPrinter::Print,numPrinter));
	//}



	////numbers are really wierldy grouped, out off roder, 
	//// i think its because every thread is running on its own
	//for (int i = 0; i < threads.size(); i++)
	//{
	//	threads[i].join();
	//}
	//cout << endl;


	// PART 2

	//create gameplay objects
	GamePlay physics("Physics");
	GamePlay pathfinding("Pathfinding");
	GamePlay ai("AI");
	GamePlay animation("Animation");
	GamePlay audio("Audio");

	vector<thread*> threads;

	//create threads (each runs Update)
	threads.push_back(new thread(&GamePlay::Update, &physics));
	threads.push_back(new thread(&GamePlay::Update, &pathfinding));
	threads.push_back(new thread(&GamePlay::Update, &ai));
	threads.push_back(new thread(&GamePlay::Update, &animation));
	threads.push_back(new thread(&GamePlay::Update, &audio));

	//print immediately
	//update complete appears before most or all of the updates finished
	cout << "Update Complete! Time to Draw" << endl;

	//the program sometimes reached 80%?


	//join threads
	for (int i = 0; i < threads.size(); i++)
	{
		threads[i]->join();
		delete threads[i];
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
