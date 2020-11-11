#include "Include.h"

Bullet::Bullet()
{
	isActive = false;
	x =50;
	y = -50;
	body = '^';
	hp = 0;
	speed = 1;
	attack = 1;

}

Bullet::~Bullet()
{

}

void Bullet::Update()
{
	Create();
	Clipping();
	Move();
	Collision();
}

DWORD Timer = GetTickCount();

void Bullet::Move()
{
	if (isActive)
	{
		y -= speed;
	}
}

void Bullet::Clipping()
{

	if (y <= 0)
	{
		isActive = false;
		x = -999;
		y = -999;
	}
}

void Bullet::Create()
{
	if (IsKey(VK_SPACE))
	{
		if (Timer < GetTickCount())
		{
			if (!isActive)
			{
				x = manager.hero.x;
				y = manager.hero.y - 1;
				isActive = true;
				Timer = GetTickCount() + 100;
			}

		}
	}
}

void Bullet::Collision()
{
	for (int i = 0; i < Max; i++)
	{
		if (x == manager.monster[i].x && y <= manager.monster[i].y)
		{
			isActive = false;
			x = -100;
			y = -100;
			manager.monster[i].isActive = false;
			manager.monster[i].x = -150;
			manager.monster[i].y = -150;
		}
	}
}
