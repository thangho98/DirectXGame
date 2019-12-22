#pragma once
#include "../Framework/GameObject.h"
#include "Define.h"
#include "Aladdin.h"
class Fire : public CGameObject
{
private:
	int damage;
	Aladdin* aladdin;
	vector<LPGAMEOBJECT> objects;
public:
	Fire();
	~Fire();

	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* colliable_objects = NULL);
	virtual void Render();
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	void SetState(int state);
};
