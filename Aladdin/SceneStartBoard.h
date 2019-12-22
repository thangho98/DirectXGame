#pragma once
#include <string>
#include "Aladdin.h"
#include "Define.h"
#include "../Framework/Game.h"
#include "MapStartBackground.h"
#include "Intro.h"
#include "PressStart.h"

class SceneStartBoard
{
	RECT rect;
	ID3DXFont* font;
	LPDIRECT3DDEVICE9 d3ddv;
	LPD3DXSPRITE spriteHandler;
	CSprite* sprite;
	wstring information;

	MapStartBackground* mapStartBackground;
	Intro* intro;
	PressStart* pressStart;

public:
	SceneStartBoard();
	~SceneStartBoard();
	void Update();
	void Render();
};

