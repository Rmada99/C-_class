#include<stdio.h>
#include<stdlib.h>
#include <iostream>

void add(int i);
void add(float f);
void add(double d);
void add(int l, int r, int n);

void add(int i) {
	std::cout << i << std::endl;
	printf("int関数%d\n", i);
}

void add(float f) {
	std::cout << f << std::endl;
	printf("float関数%f\n", f);
}

void add(double d) {
	std::cout << d << std::endl;
	printf("double関数%f\n", d);
}

void add(int l, int r, int n) {
	std::cout << l << "and" << r << "and" << n << std::endl;
	printf("intintint関数%d,%d,%d\n", l,r,n);
}

int main() {
	add(1);
	add(3.5f);
	add(0.23);
	add(3, 6, 21);
}