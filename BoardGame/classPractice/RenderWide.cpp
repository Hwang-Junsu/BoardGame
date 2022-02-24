#include "RenderWide.h"

RenderWide::RenderWide(int** _dat, int _width, int _height) : RenderConsole(_dat,_width, _height) {
	height = _height + 2;
	width = _width + 2;
}

RenderWide::~RenderWide() {}

void RenderWide::printBoard() {
	printTopIndex();

	printLine(2);
	for (int i = 1; i < height - 2; i++) {
		printBlank(i - 1);
		printLine(5);
	}
	printBlank(height - 3);
	printLine(8);
}

void RenderWide::printLine(int _start) {
	int index = _start;
	printRes(index++); printRes(0);
	for (int i = 0; i < width-3; i++) {
		printRes(index);
		printRes(0);
	}
	printRes(++index);
	cout << endl;
}

void RenderWide::printSpace(int r, int c) {
	cout << "  ";
}

void RenderWide::printBlank(int _r) {
	printRes(1);
	for (int _c = 0; _c < width-2; _c++) {
		printSpace(_r, _c);
		printRes(1);
	}
	println();
}

void RenderWide::printTopIndex() {
	cout << endl;
};

void RenderWide::println() {
	cout << endl;
}