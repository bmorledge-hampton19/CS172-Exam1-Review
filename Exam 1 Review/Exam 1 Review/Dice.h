#pragma once

class Dice {

private:
	int sides;
	int rolls;

public:

	// Creates a Dice with "newSides" sides.
	// Sides must be a number greater than 3, else it defaults to 6.
	Dice(int newSides);

	// Returns a number between 1 and the number of sides on the die. (inclusive)
	int Roll();

	// Returns how many times the dice has been rolled.
	int GetRolls();

	// Basic Getter for integer sides.
	int GetSides();

};