#include<iostream>

#include "Utils.h"
#include "Interface.h"
#include "Input.h"
#include "Selector.h"
#include "CitySelectorEventManager.h"
#include "CitySelectorCommands.h"

void drawPattern(char c) {
    const int rows = 6;
    const int cols = 8;
    const std::string pattern = " " + std::string(4, c) + " " + std::string(4, c);

    for (int y = 0; y < rows; y++) {
        int baseY = 2 + y * 3;
        for (int x = 0; x < cols; x++) {
            int baseX = 1 + x * pattern.size();

            gotoxy(baseX, baseY);
            std::cout << pattern;
            gotoxy(baseX, baseY + 1);
            std::cout << pattern;
        }
    }
}

int main() {
	Interface::DrawBorders();

	Input& input = Input::Instance();

    Coords coord{ 1, 1 };
	std::shared_ptr<Selector> selector = std::make_shared<Selector>(3, 3, coord);
    CitySelectorEventManager& eventManager = CitySelectorEventManager::instance();
    eventManager.setActor(selector);

    std::shared_ptr<CSRightCommand> rightCommand = std::make_shared<CSRightCommand>();
    std::shared_ptr<CSLeftCommand> leftCommand = std::make_shared<CSLeftCommand>();
    std::shared_ptr<CSUpCommand> upCommand = std::make_shared<CSUpCommand>();
    std::shared_ptr<CSDownCommand> downCommand = std::make_shared<CSDownCommand>();

    eventManager.addCommand(rightCommand);
    eventManager.addCommand(leftCommand);
    eventManager.addCommand(upCommand);
    eventManager.addCommand(downCommand);

	hideCursor();

    drawPattern(254);

    selector->draw();

	while (true) {
        int key = input.listen();
        if(key != -1) eventManager.execute(key);
	}

	return 0;
}