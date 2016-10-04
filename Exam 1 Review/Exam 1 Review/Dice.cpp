#include "Dice.h"
#include <ctime>
#include <cstdlib>
using namespace std;

Dice::Dice(int newSides)
{
	if (newSides > 3) sides = newSides;
	else sides = 6;
}

int Dice::Roll()
{
	// Increment rolls.
	rolls++;

	return (rand() % sides);
}

int Dice::GetRolls()
{
	return rolls;
}

int Dice::GetSides()
{
	return sides;
}
