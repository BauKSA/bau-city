#pragma once
#include "Command.h"
#include "Selector.h"

#ifndef _CITYSELECTORCOMMANDS_
#define _CITYSELECTORCOMMANDS_

class CSRightCommand : public Command<Selector> {
public:
	CSRightCommand() :
		Command(100) {
	};

	virtual void action(Selector& actor) override;
};

class CSLeftCommand : public Command<Selector> {
public:
	CSLeftCommand() :
		Command(97) {
	};

	virtual void action(Selector& actor) override;
};

class CSUpCommand : public Command<Selector> {
public:
	CSUpCommand() :
		Command(119) {
	};

	virtual void action(Selector& actor) override;
};

class CSDownCommand : public Command<Selector> {
public:
	CSDownCommand() :
		Command(115) {
	};

	virtual void action(Selector& actor) override;
};

#endif // !_CITYSELECTORCOMMANDS_
