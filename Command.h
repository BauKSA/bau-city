#pragma once
#include<string>

#ifndef _COMMAND_
#define _COMMAND_

template <typename T>
class Command {
private:
	int _key;
public:
	Command(int key) :
		_key(key) {
	};

	virtual void action(T& actor) = 0;

	int key()const { return _key; }
};

#endif // !_COMMAND_
