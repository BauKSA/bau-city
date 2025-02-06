#include "Utils.h"

void gotoxy(int x, int y) {
	HANDLE cHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cCoords{};
	cCoords.X = x;
	cCoords.Y = y;

	SetConsoleCursorPosition(cHandle, cCoords);
}

void setColor(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

void hideCursor() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;

	GetConsoleCursorInfo(hConsole, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(hConsole, &cursorInfo);
}