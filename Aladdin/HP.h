#pragma once
#include "../Framework/GameObject.h"
class HP : public CGameObject
{
	int hp;
public:
	void Render();
	void Update(int hp);
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
	HP(int hp);
};

