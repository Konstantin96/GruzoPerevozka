#include "GruzoPerevoz.h"

Gruzo_Perevozka::Gruzo_Perevozka(unsigned time, unsigned cost)
{
	this->time = time;
	this->cost = cost;
}

int Gruzo_Perevozka::GetTime()
{
	return time;
}

void Gruzo_Perevozka::SetTime(int time)
{
	this->time = time;
}

int Gruzo_Perevozka::GetCost()
{
	return cost;
}

void Gruzo_Perevozka::SetCost(int cost)
{
	this->cost = cost;
}
