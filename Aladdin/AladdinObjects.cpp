#include "AladdinObjects.h"
#include "Ground.h"
#include "Pilar.h"
#include "Brick.h"
#include "WreckingBall.h"


AladdinObjects::AladdinObjects()
{
}

AladdinObjects::~AladdinObjects()
{
}

void AladdinObjects::Load(string file, vector<LPGAMEOBJECT>* listObject)
{
	ifstream input;
	input.open(file, ifstream::in);

	string checkEnd;
	int id;
	int type;
	float x;
	float y;
	int width;
	int height;

	int count = 0;

	while (input >> checkEnd)
	{
		if (checkEnd == "END")
		{
			count++;
			continue;
		}
		if (count == 0)
		{
			id = atoi(checkEnd.c_str());
			input >> type >> x >> y >> width >> height;
			LoadObject(id, type, x, y, width, height, listObject);
		}
	}
}

void AladdinObjects::LoadObject(int id, int type, float x, float y, int width, int height, vector<LPGAMEOBJECT>* listObject)
{
	if (type == OBJECT_APPLE)
	{

	}
	else if (type == OBJECT_APPLE) {

	}
	switch (type)
	{
	//case OBJECT_APPLE:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_GOLD:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_GENIE_FACE:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_GENIE_JAR:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_BAT:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_NORMAL_PALACE_GUARD:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_THIN_PALACE_GUARD:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_FAT_PALACE_GUARD:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_PEDDLER:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_BRICK:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_SPIKE_TRAP:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	case OBJECT_WRECKING_BALL:
		{
			WreckingBall* obj = new WreckingBall();
			obj->SetId(id);
			obj->SetType(type);
			obj->SetPosition(x, y);
			obj->SetWidth(width);
			obj->SetHeight(height);
			listObject->push_back(obj);
		}
		break;
	//case OBJECT_CHAINS:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_FENCE:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_ROCK_BAR:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	//case OBJECT_WOOD:
	//	Ground* obj = new Ground();
	//	obj->SetId(id);
	//	obj->SetType(type);
	//	obj->SetPosition(x, y);
	//	obj->SetWidth(width);
	//	obj->SetHeight(height);
	//	listObject->push_back(obj);
	//	break;
	case OBJECT_GROUND:
		{
			Ground* obj = new Ground();
			obj->SetId(id);
			obj->SetType(type);
			obj->SetPosition(x, y);
			obj->SetWidth(width);
			obj->SetHeight(height);
			listObject->push_back(obj);
			
		}
		break;
	case OBJECT_PILAR_5:
		{
			Pilar* obj = new Pilar();
			obj->SetId(id);
			obj->SetType(type);
			obj->SetState(PILAR_STATE_5);
			obj->SetPosition(x, y);
			obj->SetWidth(width);
			obj->SetHeight(height);
			listObject->push_back(obj);
		}
		break;
	default:
		break;
	}
}
