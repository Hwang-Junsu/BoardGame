#include "RenderOthello.h"


RenderOthello::RenderOthello(int** _dat, int _width, int _height) : RenderWide(_dat,_width, _height){
}

RenderOthello::~RenderOthello() {}


void RenderOthello::printTopIndex() {
	for (int i = 0; i < width-2; i++) {
		cout << "   " << hex << i;
	}
	cout << endl;
};

void RenderOthello::printSpace(int _r, int _c) {
	int posData = getIndex(_r, _c);
	if (posData == 0) cout << "  ";
	else printRes(13-posData);

}

void RenderOthello :: println() {
	line = line % 8;
	cout << getChar(line++) << endl;
}