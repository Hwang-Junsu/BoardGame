#include "Logic2D.h"

Logic2D::Logic2D(int _width, int _height) : LogicBase(_width, _height) {
    player = 0;
    width = _width;
    height = _height;
    dat = new int* [width * height];
    dat[0] = new int[(width * height) * (width * height)];
    for (int i = 1; i < width * height; i++) dat[i] = dat[i - 1] + (width * height);

    memset(dat[0], 0, sizeof(int) * (width * height) * (width * height));
}

Logic2D::~Logic2D() {
    delete[] dat[0];
    delete[] dat;
}


bool Logic2D::analyzeDir(int _checkValue, int _dir, int _x, int _y, int _sw, int _lw) {
    setCheckValue(_checkValue); 
    for (int nx = _x, ny = _y; (0 <= nx && nx <= height) && (_sw <= ny && ny <= _lw); 
        nx += dx[_dir], ny += dy[_dir]) {
        if (nx == _x && ny == _y) continue;
        if (!isSequential(dat[nx][ny], count)) return (dat[nx][ny] == EMPTY);
        else {
            int index = count - 1;
            vPoint[index].first = nx;
            vPoint[index].second = ny;
        }
    }
    return true;
}

void Logic2D::findIndex(int _x, int _y, int _si, int _li) {
    int idx = (_x * 10) + _y;
    for (int i = 0; i < height; i++) {
        for (int j = _si; j < _li; j++) {
            if (getValue(i, j) == idx) {
                vIndex.first = i;
                vIndex.second = j;
            }
        }
    }
}

bool Logic2D::isEmpty(int _x, int _y) {
    return (dat[_x][_y] == EMPTY);
}

int** Logic2D::getDat() {
    return dat;
}

int Logic2D::getValue(int _xPos, int _yPos) {
    return dat[_xPos][_yPos];
}

void Logic2D::setValue(int _xPos, int _yPos, int _color) {
    dat[_xPos][_yPos] = _color;
}

int Logic2D::getPlayer() {
    return player;
}

void Logic2D::setPlayer() {
    player = 1 - player;
}

void Logic2D::resetCount() {
    count = 0;
}