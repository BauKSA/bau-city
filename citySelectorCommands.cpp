#include "CitySelectorCommands.h"

void CSRightCommand::action(Selector& actor) {
	actor.move(Directions::RIGHT);
}

void CSLeftCommand::action(Selector& actor) {
	actor.move(Directions::LEFT);
}

void CSUpCommand::action(Selector& actor) {
	actor.move(Directions::UP);
}

void CSDownCommand::action(Selector& actor) {
	actor.move(Directions::DOWN);
}