#pragma once
#include <iostream>
#include <random>
#define ERROR -1
#define EMPTY 0
using namespace std;

class LogicBase // 가장 기초적인 수학적 로직
{
private:
	int checkValue = ERROR;
	int ranNumber[100] = { 0, };

protected:
	bool isSequential(int, int&); // 연속성을 판단하는 bool
	void setCheckValue(int); // 체크할 기준 값
	int ranNum(int,int);
	int randomNumber(int,int); // 난수 뽑기.
	void putInNumber(int); // 배열에 숫자 넣기(중복피하기)
public:
	LogicBase(int, int);
	~LogicBase();

};


