#include "Character.h"
#include <iostream>
#include <string>

const char* name_ = {};
int hp_ = 0;
int attack_ = 0;
Character::Character(const char* name, int hp, int attack) {
	name_ = name;
	hp_ = hp;
	attack_ = attack;

	printStatus(name_, hp_, attack_);
}
void printStatus(const char* name, int hp, int attack) {
	printf("–¼‘O:%s\n", name);
	printf("HP:%d\n", hp);
	printf("UŒ‚—Í:%d\n",attack);
	printf("\n");
}