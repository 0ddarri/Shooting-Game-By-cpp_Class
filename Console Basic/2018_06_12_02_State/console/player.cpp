#include "Include.h"

Hero::Hero()
{
	fcolor = YELLOW;
	isActive = true;
}

Hero::~Hero()
{

}

void Hero::Update()
{
	Move();
	Clipping();
}

void Hero::Move()
{
	if (IsKey(VK_LEFT))
	{
		x -= speed;
	}
	if (IsKey(VK_RIGHT))
	{
		x += speed;
	}
	if (IsKey(VK_UP))
	{
		y -= speed;
	}
	if (IsKey(VK_DOWN))
	{
		y += speed;
	}
}

void Hero::Clipping()
{
	if (x >= 118)
	{
		x = 118;
	}
	if (x <= 0)
	{
		x = 0;
	}

	if (y >= 28)
	{
		y = 28;
	}
	if (y <= 0)
	{
		y = 0;
	}

}
