#pragma once
#include<string>
#include<iostream>
#include<iomanip>

#include "Utils.h"


#ifndef _DEBUG_
#define _DEBUG_

enum class MESSAGES {
	DBG = 0,
	WRN = 1,
	ERR = 2
};

class Debug {
public:
	static int line;
	static int column;

	static void MSG(MESSAGES type, std::string msg) {
		switch (type) {
		case MESSAGES::DBG:
			setColor(7);
			break;
		case MESSAGES::WRN:
			setColor(6);
			break;
		case MESSAGES::ERR:
			setColor(4);
			break;
		default:
			setColor(7);
			break;
		}

		gotoxy(Debug::column, Debug::line);
		std::cout << std::setw(6) << msg;
		Debug::line++;
		if (Debug::line > GAME_SCREEN_LEFT_DOWN) Debug::line = 1;
	}
};

#endif // !_DEBUG_
