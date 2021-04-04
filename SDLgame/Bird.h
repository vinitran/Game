#pragma once
#include "Game.hpp"
#include "GameObject.h"

class Bird {
public:
	Bird();
	~Bird();
	void Load_bird();
	void Draw_bird_fly();
	void Draw_bird_notfly();
	void Update_bird();
	void conllision();
	void Click_bird();

private:
	GameObject* bird_image_mid;
	GameObject* bird_image_up;
	GameObject* bird_image_down;
	GameObject* bird_image_mid_notfly340;
	GameObject* bird_image_mid_notfly350;
	GameObject* bird_image_mid_notfly360;
	GameObject* bird_image_mid_notfly10;
	GameObject* bird_image_mid_notfly20;
	GameObject* bird_image_mid_notfly30;
	GameObject* bird_image_mid_notfly40;
	GameObject* bird_image_mid_notfly50;
	GameObject* bird_image_mid_notfly60;
	GameObject* bird_image_mid_notfly70;
	GameObject* bird_image_mid_notfly80;
	GameObject* bird_image_mid_notfly90;
	bool bird_fly;
	int time;
	int time_notfly;
};
