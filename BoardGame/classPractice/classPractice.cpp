#include <iostream>
#include "RenderBingo.h"
#include "LogicBingo.h"

using namespace std;


int main()
{
	int width = 10;
	int height = 5;
	LogicBingo logic(width, height);
	RenderBingo render(logic.getDat(), width, height);
	bool bGameOver = false;

	string input;
	int x, y;
	while (1) {
		system("cls");
		render.printBoard();
		if (bGameOver) break;
		cout << "Input Number : ";
		cin >> input;
		render.getData(x, y, input);
		bGameOver = logic.setData(x, y);
	}
}
