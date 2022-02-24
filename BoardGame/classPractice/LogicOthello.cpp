#include "LogicOthello.h"


LogicOthello::LogicOthello(int _width, int _height) : Logic2D(_width, _height) {
    this->initData();
}


LogicOthello::~LogicOthello() {}


bool LogicOthello::analyze(int _x, int _y, int _sw, int _lw) {
    _sw = 0; _lw = width;
    int checkValue = 2 - player ;
    resetCount();
    for (int dir = 0; dir < 8; dir++) {
        int tmpCount = count;
        if (analyzeDir(checkValue, dir, _x, _y, _sw, _lw)) {
            count = tmpCount;
        }
    }
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            setValue(vPoint[i].first, vPoint[i].second, player + 1);
        }
        return true;
    }
    return false;
}

void LogicOthello::setData(int _x, int _y) {
    if (!isEmpty(_x, _y)) return;
    if (!analyze(_x, _y, 0, width)) return;

    setValue(_x, _y, player + 1);
    setPlayer();
}


void LogicOthello::initData() {
    setValue(3,4, 1);
    setValue(4,3, 1);
    setValue(3,3, 2);
    setValue(4,4, 2);
}

