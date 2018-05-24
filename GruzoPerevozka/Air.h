#pragma once
#include "GruzoPerevoz.h"

class Air :public Gruzo_Perevozka {
protected:
	string nameAir;
	int mest;
public:
	Air(int time, int cost) : Gruzo_Perevozka(time, cost),nameAir("Boing - 737"),mest(26)
	{
	}
	virtual void Show();
};