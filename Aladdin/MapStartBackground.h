#pragma once
#include "../Framework/GameObject.h"

class MapStartBackground : public CGameObject
{
public:
	void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
	MapStartBackground();
};