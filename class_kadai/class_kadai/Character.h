#pragma once
#include <string>
#include <iostream>

class Character
{
public:

	Character(const char* name, int hp, int attack);

};

void printStatus(const char* name, int hp, int attack);

