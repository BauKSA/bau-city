#pragma once
#include<memory>
#include<conio.h>

#include "Debug.h"

#ifndef _INPUT_
#define _INPUT_

class Input {
private:
	static std::shared_ptr<Input> instance;
public: 
	static Input& Instance() {
		if (!instance) instance = std::make_shared<Input>();
		return *instance;
	}

	int listen();
};

#endif // !_INPUT_
