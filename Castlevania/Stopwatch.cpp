﻿#include "Stopwatch.h"
#include "Enemy.h"

void Stopwatch::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	Enemy::IsStop = true;
	Enemy::StartTimeStop();
	if (Enemy::timestop_start > 5000)
		isEnable = false;
}

void Stopwatch::Render()
{
}

void Stopwatch::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
}

Stopwatch::Stopwatch()
{
	useHeart = 5;
}

Stopwatch::~Stopwatch()
{
}
