#pragma once
#ifndef _UTILS_
#define _UTILS_

#include<Windows.h>
#include<iostream>

constexpr int SCREEN_HEIGHT = 27;
constexpr int SCREEN_WIDTH = 117;
constexpr int GAME_SCREEN_LEFT_UP = 1;
constexpr int GAME_SCREEN_LEFT_DOWN = 25;
constexpr int GAME_SCREEN_RIGHT = 115;

struct Coords {
	int x;
	int y;
};

enum Directions {
	RIGHT = 0,
	LEFT = 1,
	UP = 2,
	DOWN = 3
};

void gotoxy(int x, int y);
void setColor(int color);
void hideCursor();

#endif // !_UTILS_
