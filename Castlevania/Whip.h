#include "../Framework/GameObject.h"

class Whip :public CGameObject
{
private:
	int indexAni;
	CAnimation* ani;
	int damage;
	int level;
public:
	void Render(bool IsRight, bool IsJump);
	void SetPosition(float x, float y, bool Issit);
	void Update(DWORD dt, vector<LPGAMEOBJECT>* colliable_objects = NULL);
	void ResetAnimation();
	int GetCurrentFrame();
	void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	void SetLevel(int level) { this->level = level; }
	int GetLevel() { return this->level; }
	Whip();
	~Whip();
};