#pragma once
#include "Libery.h"

class Gruzo_Perevozka {
protected:
	unsigned time;
	unsigned cost;
public:
	Gruzo_Perevozka() = default;
	Gruzo_Perevozka(unsigned time, unsigned cost);
	int GetTime();
	void SetTime(int time);
	int GetCost();
	void SetCost(int cost);
};