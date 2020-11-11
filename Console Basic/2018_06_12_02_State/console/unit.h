#pragma once

class Unit
{
public: 
	Unit();
	~Unit();

	int x;
	int y;
	char body;
	int hp;
	int speed;
	int attack;

	bool isActive;

	DWORD fcolor;
	DWORD bcolor;

	virtual void Update() = 0;
	virtual void Draw();
	virtual void Move() = 0;
	virtual void Clipping() = 0;
};