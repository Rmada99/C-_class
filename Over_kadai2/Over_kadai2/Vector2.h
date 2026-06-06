#pragma once
#include<iostream>
class Vector2 final
{
public:
	void operator +(int t);

	void operator -(int i);

	void operator ==(int f);

	void operator <<(int a);

public:
	int x=0;
	int y=0;
};

