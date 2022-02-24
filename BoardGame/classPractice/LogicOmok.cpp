#include "LogicOmok.h"

LogicOmok::LogicOmok(int _width, int _height) : Logic2D(_width, _height) {
}

LogicOmok::~LogicOmok() {}

bool LogicOmok::analyze(int _x, int _y, int _sw, int _lw) {
    int checkValue = player + 1;
    _sw = 0; _lw = width;
    for (int dir = 0; dir < 4; dir++) {
        analyzeDir(checkValue, dir, _x, _y, _sw, _lw);
        analyzeDir(checkValue, dir + 4, _x, _y, _sw, _lw);

        if (count == 4) return true;
        resetCount();
    }
    return false;
}

bool LogicOmok::setData(int _x, int _y) {
    if (!isEmpty(_x, _y)) return false;
    bool fiveStone = analyze(_x, _y, 0, width);
    setValue(_x, _y, player + 1);
    setPlayer();
    return fiveStone;
}

