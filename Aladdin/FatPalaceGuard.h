#pragma once
#include "../Framework/GameObject.h"
#include "Define.h"

class FatPalaceGuard : public CGameObject
{
private:
	bool wait, stab, wave, surprise, jump, die;	// indicate which state a bat object is currently in
	int HP;
public:
	FatPalaceGuard();
	~FatPalaceGuard();

	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObject = NULL);
	virtual void Render();

	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
};
