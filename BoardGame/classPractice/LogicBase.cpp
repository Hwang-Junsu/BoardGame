#include "LogicBase.h"

LogicBase::LogicBase(int _width, int _height) {
}

LogicBase::~LogicBase() {
}

bool LogicBase::isSequential(int _data, int& count) {
    if (_data == checkValue) {
        count++;
        return true;
    }
    else return false;
}

void LogicBase::setCheckValue(int _checkValue) {
    checkValue = _checkValue;
}

void LogicBase::putInNumber(int _range) {
    for (int i = 0; i < _range; i++) ranNumber[i] = i;
}

int LogicBase::randomNumber(int _min, int _range) {
    int index = ranNum(_min, _range);
    if (ranNumber[index] > ERROR) {
        int tmp = ranNumber[index];
        ranNumber[index] = ERROR;
        return tmp;
    }
    return randomNumber(_min, _range);
}

int LogicBase::ranNum(int _min, int _range) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> range(_min, _range);
    return range(gen);
}
