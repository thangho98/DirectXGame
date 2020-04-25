#pragma once
#include "../Framework/Scence.h"
#include "../Framework/Grid.h"
#include "../Framework/TileMap.h"
#include "ScoreBoard.h"

#include "Simon.h"
class CPlayScene : public CScene
{
protected:
	Simon* player;					// A play scene has to have player, right? 

	vector<LPGAMEOBJECT> objects;
	vector<LPGAMEOBJECT> coObjects;

	vector<int> listIdTextures;
	vector<int> listIdSprites;
	vector<int> listIdAnimations;
	vector<int> listIdAnimationSets;

	TileMap* tileMap = NULL;
	Grid* grid = NULL;

	float mapWidth, mapHeight;

	ScoreBoard* scoreBoard;
	DWORD time;

	void _ParseSection_SETTINGS(string line);
	void _ParseSection_TEXTURES(string line);
	void _ParseSection_SPRITES(string line);
	void _ParseSection_ANIMATIONS(string line);
	void _ParseSection_ANIMATION_SETS(string line);
	void _ParseSection_OBJECTS(string line);
	void _ParseSection_TILEMAP(string line);
	void _ParseSection_GRID(string line);
	void _Load_OBJECTS(string line);
	CCamera* camera;
public:

	Simon* GetPlayer() { return player; }

	CPlayScene(int id, LPCWSTR filePath);

	virtual void Load();
	virtual void Update(DWORD dt);
	virtual void Render();
	virtual void Unload();

	friend class CPlayScenceKeyHandler;

	float GetMapWidth() { return mapWidth; }
	float GetMapHeight() { return mapHeight; }
};

class CPlayScenceKeyHandler : public CScenceKeyHandler
{
public:
	virtual void KeyState(BYTE* states);
	virtual void OnKeyDown(int KeyCode);
	virtual void OnKeyUp(int KeyCode);
	CPlayScenceKeyHandler(CScene* s) :CScenceKeyHandler(s) {};
};
