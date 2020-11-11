#pragma once

class Bullet : public Unit
{
public:
	Bullet();
	~Bullet();

	virtual void Update();
	virtual void Move();
	virtual void Clipping();
	void Create();

	void Collision();
};