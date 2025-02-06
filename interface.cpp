#include "Interface.h"
#include "Utils.h"

void Interface::DrawBorders() {
	for (int i = 0; i < SCREEN_HEIGHT; i++) {
		if (i == 0) {
			printf("%c", 201);
			for (int it = 0; it < SCREEN_WIDTH - 1; it++) printf("%c", 205);
			printf("%c", 187);
		}
		else if (i == SCREEN_HEIGHT - 1) {
			printf("%c", 200);
			for (int it = 0; it < SCREEN_WIDTH - 1; it++) printf("%c", 205);
			printf("%c", 188);
		}
		else {
			printf("%c", 186);
			for (int it = 0; it < SCREEN_WIDTH - 1; it++) printf(" ");
			printf("%c", 186);
		}

		printf("\n");
	}
}