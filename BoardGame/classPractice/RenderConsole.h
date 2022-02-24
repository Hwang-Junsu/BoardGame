#pragma once
#include <iostream>

using namespace std;

class RenderConsole
{
	int** dat;

	string resource[13] = {
		"¦¡", "¦¢",		// 0 , 1
		"¦£", "¦¨", "¦¤",	// 2 , 3 , 4
		"¦§", "¦«", "¦©",  // 5 , 6 , 7
		"¦¦", "¦ª", "¦¥",	// 8 , 9 , 10
		"¡Ü", "¡Û"        // 11, 12
	};

public:
	RenderConsole(int**, int,int);
	~RenderConsole();
	int getIndex(int, int);
	void getData(int&, int&, string);
	int getInt(char&);
	char getChar(const int&);
	void printRes(int);

};

