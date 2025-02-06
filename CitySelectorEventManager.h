#pragma once
#include "EventManager.h"
#include "Selector.h"

#ifndef _CITYSELECTOREVENTMANAGER_
#define _CITYSELECTOREVENTMANAGER_

class CitySelectorEventManager : public EventManager<Selector> {
public:
	static std::shared_ptr<CitySelectorEventManager> _instance;

	CitySelectorEventManager(std::shared_ptr<Selector> selector) :
		EventManager<Selector>(selector) {};

	static CitySelectorEventManager& instance() {
		if (!CitySelectorEventManager::_instance)
			CitySelectorEventManager::_instance = std::make_shared<CitySelectorEventManager>(nullptr);

		return *CitySelectorEventManager::_instance;
	}
};

#endif // !_CITYSELECTOREVENTMANAGER_
