#include "BoardGame.h"

BoardGame::BoardGame(int _gameSelect, int** _dat, int _size, bool _type) {
	gameSelect = _gameSelect;
	if (gameSelect == 1) {
		LogicOthello logic(_size, _size);
		RenderOthello render(_dat, _size, _type);
	}
	else if(gameSelect == 2){
		LogicOmok logic(_size, _size);
		RenderOmok render(_dat, _size, _type);
	}

}

BoardGame::~BoardGame() {}

void BoardGame::run() {
	char x, y;
	while (1) {
		system("cls");
		rptr->printBoard();
		if(lptr->gameOver()==false) break;
		if (lptr->getPlayer() == 1) cout << endl << "Èæ Â÷·ÊÀÔ´Ï´Ù." << endl;
		else cout << endl << "¹é Â÷·Ê ÀÔ´Ï´Ù. " << endl;
		cout << "Input Position : ";
		cin >> x >> y;
		lptr->inputPos(x, y);
	}
}