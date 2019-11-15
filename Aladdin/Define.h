#pragma once
#define WINDOW_CLASS_NAME L"Aladdin"
#define MAIN_WINDOW_TITLE L"Aladdin"

#define BACKGROUND_COLOR D3DCOLOR_XRGB(255, 255, 200)
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

#define MAX_FRAME_RATE 120

#define ID_TEX_ALADDIN 0
#define ID_TEX_ENEMY 10
#define ID_TEX_MISC 20

#define ID_TEX_ALADDIN_GO_RIGHT 0
#define ID_TEX_ALADDIN_GO_LEFT 1

#define ALADDIN_WALKING_SPEED		0.1f 
//0.1f
#define ALADDIN_JUMP_SPEED_Y		0.5f
#define ALADDIN_JUMP_DEFLECT_SPEED 0.2f
#define ALADDIN_GRAVITY			0.002f
#define ALADDIN_DIE_DEFLECT_SPEED	 0.5f

#define ALADDIN_STATE_IDLE			0
#define ALADDIN_STATE_STANDING		1
#define ALADDIN_STATE_SITTING_DOWN	2
#define ALADDIN_STATE_LOOKING_UP	3

#define ALADDIN_STATE_WALKING_RIGHT	100
#define ALADDIN_STATE_WALKING_LEFT	200
#define ALADDIN_STATE_JUMP			300
#define ALADDIN_STATE_DIE			400
#define ALADDIN_STATE_STANDING_SLASH	500
#define ALADDIN_STATE_SITTING_SLASH	600
#define ALADDIN_STATE_LOOKING_UP_SLASH	700
#define ALADDIN_STATE_STOP			800

#define ALADDIN_STATE_THOW_APPLE	900
#define ALADDIN_STATE_SITTING_THOW_APPLE	1000
#define ALADDIN_STATE_JUMPING_THOW_APPLE	1100

#define ALADDIN_ANI_IDLE_RIGHT		0
#define ALADDIN_ANI_IDLE_LEFT		1
#define ALADDIN_ANI_SITTING_DOWN_RIGHT	2
#define ALADDIN_ANI_SITTING_DOWN_LEFT	3
#define ALADDIN_ANI_LOOKING_UP_RIGHT	4
#define ALADDIN_ANI_LOOKING_UP_RIGHT	5


#define ALADDIN_ANI_STANDING_RIGHT 6
#define ALADDIN_ANI_STANDING_LEFT 7

#define ALADDIN_ANI_WALKING_RIGHT		8
#define ALADDIN_ANI_WALKING_LEFT		9
#define ALADDIN_ANI_STOP_RIGHT			10
#define ALADDIN_ANI_STOP_LEFT			11

#define ALADDIN_ANI_STANDING_SLASH_RIGHT		13
#define ALADDIN_ANI_STANDING_SLASH_LEFT		14
#define ALADDIN_ANI_SITTING_SLASH_RIGHT		15
#define ALADDIN_ANI_SITTING_SLASH_LEFT		16
#define ALADDIN_ANI_LOOKING_UP_SLASH_RIGHT	17
#define ALADDIN_ANI_LOOKING_UP_SLASH_LEFT	18

#define ALADDIN_ANI_THROW_APPLE_RIGHT		19
#define ALADDIN_ANI_THROW_APPLE_LEFT		20
#define ALADDIN_ANI_SITTING_THROW_APPLE_RIGHT	21
#define ALADDIN_ANI_SITTING_THROW_APPLE_LEFT	22
#define ALADDIN_ANI_JUMPING_THROW_APPLE_RIGHT	23
#define ALADDIN_ANI_JUMPING_THROW_APPLE_LEFT	24

#define ALADDIN_ANI_DIE				12

#define ALADDIN_BBOX_WIDTH  54
#define ALADDIN_BBOX_HEIGHT 46

#define ALADDIN_UNTOUCHABLE_TIME 5000