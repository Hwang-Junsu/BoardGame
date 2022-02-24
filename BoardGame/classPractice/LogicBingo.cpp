#include "LogicBingo.h"

LogicBingo::LogicBingo(int _width, int _height) : Logic2D(_width, _height) {
    this->initData();
}


LogicBingo::~LogicBingo() {}


void LogicBingo::initData() {
    int size = (width/2) * height;
    putInNumber(size);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width/2 ; j++) {
            setValue(i, j, randomNumber(1,size));
        }
    }
    putInNumber(size);
    for (int i = 0; i < height; i++) {
        for (int j = width/2; j < width; j++) {
            setValue(i, j, randomNumber(0,size));
        }
    }
}

bool LogicBingo::analyze(int _x, int _y, int _sw, int _lw) {
    int checkValue = -1;

    for (int dir = 0; dir < 4; dir++) {
        analyzeDir(checkValue, dir, _x, _y, _sw, _lw);
        analyzeDir(checkValue, dir + 4, _x, _y, _sw, _lw);
        if (count == (height - 1) && _sw == 0) bingo1p++;
        if (count == (height - 1) && _sw == width/2) bingo2p++;
        resetCount();

        if (bingo1p > (height-1) || bingo2p > (height-1)) return true;
    }
    return false;
}

bool LogicBingo::setData(int _x, int _y) {
    bool bingo = false;
    findIndex(_x, _y, 0, width/2);
    setValue(vIndex.first, vIndex.second, -1);
    if (analyze(vIndex.first, vIndex.second, 0, (width/2)-1)) bingo = true;

    findIndex(_x, _y, width/2, width);
    setValue(vIndex.first, vIndex.second, -1);
    if (analyze(vIndex.first, vIndex.second, width/2, width)) bingo = true;

    return bingo;
}