#pragma once
#include<iostream>


#include "Utils.h"

#ifndef _SLECTOR_
#define _SELECTOR_

class Selector {
private:
	int width;
	int height;
	Coords coords;
public:
	Selector(int w, int h, Coords c) :
		width(w), height(h), coords(c) {
	};

	void draw() const;
	void clear() const;
	void move(Directions dir);
};

#endif // !_SLECTOR_
