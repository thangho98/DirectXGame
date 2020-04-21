#pragma once
#pragma once
#include "GameObject.h"

#define E_INVINCIBLE_TIME 0.4
class CEnemy;
typedef CEnemy* LPENEMY;
class CEnemy :public CGameObject
{
protected:
	int hp;
	int e_prevHP;
	int hpC;
	int damage;
	int point;
	bool isGrounded;
	static int score;
	void AddScore();
public:
	static int timestop;
	static DWORD timestop_start;
	static float stopTime;
	static bool IsStop;
	CEnemy();
	CEnemy(int hp);
	~CEnemy();
	static void StartTimeStop() { timestop = 1; timestop_start = GetTickCount(); }
	virtual void Render() = 0;
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	int GetHP() { return this->hp; }
	void SetHP(int hp) { this->hp = hp; }
	int GetDamage() { return this->damage; }
	void SetDamage(int damage) { this->damage = damage; }
	int GetPoint() { return point; }
	void Reload();
	void Respawn();
	DWORD respawnTime;
	static void SetScore(int score);
	static int GetScore();
};
