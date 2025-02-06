#pragma once
#include<memory>
#include<vector>
#include<string>

#include "Command.h"

#ifndef _EVENTMANAGER_
#define _EVENTMANAGER_

template <typename T>
class EventManager {
private:
	std::shared_ptr<T> actor;
	std::vector<std::shared_ptr<Command<T>>> commands;
public:
	EventManager(std::shared_ptr<T> _actor) :
		actor(_actor) {
	};

	void addCommand(std::shared_ptr<Command<T>> command) { commands.push_back(command); }
	void execute(int key) {
		for (size_t i = 0; i < commands.size(); i++) {
			if (commands.at(i)->key() == key) {
				commands.at(i)->action(*actor.get());
				return;
			}
		}
	}

	void setActor(std::shared_ptr<T> _actor) {
		actor = _actor;
	}
};

#endif // !_EVENTMANAGER_
