#include "RenderBingo.h"

RenderBingo::RenderBingo(int** _dat, int _width, int _height) : RenderWide(_dat, _width, _height) {
}

RenderBingo::~RenderBingo() {}


void RenderBingo::printBlank(int _r) {
	printRes(1);
	for (int _c = 0; _c < (width - 2)/2; _c++) {
		printSpace(_r, _c);
		printRes(1);
	}
	cout << "  ";
	printRes(1);
	for (int _c = (width - 2) / 2; _c < width-2; _c++) {
		printSpace(_r, _c);
		printRes(1);
	}
	println();
}

void RenderBingo::printLine(int _start) {
	for (int j = 0; j < 2; j++) {
		int index = _start;
		printRes(index++); printRes(0);
		for (int i = 0; i < (width - 3)/2; i++) {
			printRes(index);
			printRes(0);
		}
		printRes(++index);

		cout << "  ";
	}
	cout << endl;
}

void RenderBingo::printSpace(int _r, int _c) {
	int posData = getIndex(_r, _c);
	if (posData == -1) printRes(11);
	else cout << setw(2) << setfill('0') << posData;
}

void RenderBingo::printTopIndex() {
	cout << " 1p                      2p" << endl;
};

void RenderBingo::println() {
	cout << endl;
}