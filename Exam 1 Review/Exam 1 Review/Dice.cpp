#include "Dice.h"
#include <cstdlib>
using namespace std;

Dice::Dice(int newSides)
{
	if (newSides > 3) sides = newSides;
	else sides = 6;

	// Initialize rolls to 0.
	rolls = 0;

}

int Dice::Roll()
{
	// Increment rolls.
	rolls++;

	return (rand() % sides + 1);
}

int Dice::GetRolls()
{
	return rolls;
}

int Dice::GetSides()
{
	return sides;
}
