#include "Selector.h"

void Selector::clear() const {
	for (int i = 0; i < height + 1; i++) {
		int tmp_x = coords.x;
		if (i == 0 || i == height) {
			while (tmp_x - coords.x < width + 3) {
				gotoxy(tmp_x, coords.y + i);
				std::cout << " ";
				tmp_x++;
			}
		}
		else {
			gotoxy(tmp_x, coords.y + i);
			std::cout << " ";

			tmp_x += width + 2;
			
			gotoxy(tmp_x, coords.y + i);
			std::cout << " ";
		}
	}
}

void Selector::draw() const {
	for (int i = 0; i < height + 1; i++) {
		int tmp_x = coords.x;
		char c{};
		if (i == 0) {
			gotoxy(tmp_x, coords.y + i);
			c = 201;
			std::cout << c;
			tmp_x++;
			while (tmp_x - coords.x < width + 2) {
				c = 205;
				gotoxy(tmp_x, coords.y + i);
				std::cout << c;
				tmp_x++;
			}
			gotoxy(tmp_x, coords.y + i);
			c = 187;
			std::cout << c;
		}
		else if (i == height) {
			gotoxy(tmp_x, coords.y + i);
			c = 200;
			std::cout << c;
			tmp_x++;
			while (tmp_x - coords.x < width + 2) {
				c = 205;
				gotoxy(tmp_x, coords.y + i);
				std::cout << c;
				tmp_x++;
			}
			gotoxy(tmp_x, coords.y + i);
			c = 188;
			std::cout << c;
		}
		else {
			gotoxy(tmp_x, coords.y + i);
			c = 186;
			std::cout << c;

			tmp_x += width + 2;

			gotoxy(tmp_x, coords.y + i);
			std::cout << c;
		}
	}
}

void Selector::move(Directions dir) {
	clear();
	switch (dir) {
	case Directions::RIGHT:
		coords.x += width + 2;
		break;
	case Directions::LEFT:
		coords.x -= width + 2;
		break;
	case Directions::UP:
		coords.y -= height;
		break;
	case Directions::DOWN:
		coords.y += height;
		break;
	default:
		break;
	}

	draw();
}