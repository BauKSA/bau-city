#include "Input.h"

std::shared_ptr<Input> Input::instance = nullptr;

int Input::listen() {
	if (!_kbhit()) return -1;

	int key = _getch();
	if (key) {
		//Debug::MSG(MESSAGES::DBG, std::to_string(key));
		return key;
	}

	return 0;
}