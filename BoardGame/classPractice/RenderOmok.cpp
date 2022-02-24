#include "RenderOmok.h"


RenderOmok::RenderOmok(int** _dat, int _width, int _height) : RenderNarrow(_dat, _width, _height){
}

RenderOmok::~RenderOmok() {}



void RenderOmok::printTopIndex() {
	for (int i = 0; i < width; i++) {
		cout << " " << hex << i;
	}
	cout << endl;
};

void RenderOmok::println() {
	line = line % 16;
	cout << getChar(line++) << endl;
}
