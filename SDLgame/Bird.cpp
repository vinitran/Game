#include "Bird.h"

Bird::Bird()
{
	time = 0;
	bird_fly = false;
	time_notfly = 0;
}

void Bird::Load_bird()
{

	bird_image_down = new GameObject("bird_down_330.png", 86, 400);
	bird_image_mid = new GameObject("bird_mid_330.png", 86, 400);
	bird_image_up = new GameObject("bird_up_330.png", 86, 400);
	bird_image_mid_notfly340 = new GameObject("bird_mid_notfly_340.png", 86, 400);
	bird_image_mid_notfly350 = new GameObject("bird_mid_notfly_350.png", 86, 400);
	bird_image_mid_notfly360 = new GameObject("bird_mid_notfly_360.png", 86, 400);
	bird_image_mid_notfly10 = new GameObject("bird_mid_notfly_10.png", 86, 400);
	bird_image_mid_notfly20 = new GameObject("bird_mid_notfly_20.png", 86, 400);
	bird_image_mid_notfly30 = new GameObject("bird_mid_notfly_30.png", 86, 400);
	bird_image_mid_notfly40 = new GameObject("bird_mid_notfly_40.png", 86, 400);
	bird_image_mid_notfly50 = new GameObject("bird_mid_notfly_50.png", 86, 400);
	bird_image_mid_notfly60 = new GameObject("bird_mid_notfly_60.png", 86, 400);
	bird_image_mid_notfly70 = new GameObject("bird_mid_notfly_70.png", 86, 400);
	bird_image_mid_notfly80 = new GameObject("bird_mid_notfly_80.png", 86, 400);
	bird_image_mid_notfly90 = new GameObject("bird_mid_notfly_90.png", 86, 400);
}
void Bird::Draw_bird_fly()
{
	if (bird_fly == true)
	{
		if ((time % 18 >= 0) && (time % 18 < 3)) bird_image_down->GameObject::Render();
		if ((time % 18 >= 3) && (time % 18 < 6))  bird_image_mid->GameObject::Render();
		if ((time % 18 >= 6) && (time % 18 < 9))  bird_image_up->GameObject::Render();
		if ((time % 18 >= 9) && (time % 18 < 12))  bird_image_up->GameObject::Render();
		if ((time % 18 >= 12) && (time % 18 < 15))  bird_image_mid->GameObject::Render();
		if ((time % 18 >= 15) && (time % 18 < 18))  bird_image_down->GameObject::Render();
	}
	else
	{
		if ((time_notfly % 60 >= 0) && (time_notfly % 60 < 5)) bird_image_mid_notfly340->GameObject::Render();
		if ((time_notfly % 60 >= 5) && (time_notfly % 60 < 10))bird_image_mid_notfly350->GameObject::Render();
		if ((time_notfly % 60 >= 10) && (time_notfly % 60 < 15))bird_image_mid_notfly360->GameObject::Render();
		if ((time_notfly % 60 >= 15) && (time_notfly % 60 < 20))bird_image_mid_notfly10->GameObject::Render();
		if ((time_notfly % 60 >= 20) && (time_notfly % 60 < 25))bird_image_mid_notfly20->GameObject::Render();
		if ((time_notfly % 60 >= 25) && (time_notfly % 60 < 30))bird_image_mid_notfly30->GameObject::Render();
		if ((time_notfly % 60 >= 30) && (time_notfly % 60 < 35))bird_image_mid_notfly40->GameObject::Render();
		if ((time_notfly % 60 >= 35) && (time_notfly % 60 < 40))bird_image_mid_notfly50->GameObject::Render();
		if ((time_notfly % 60 >= 40) && (time_notfly % 60 < 45))bird_image_mid_notfly60->GameObject::Render();
		if ((time_notfly % 60 >= 45) && (time_notfly % 60 < 50))bird_image_mid_notfly70->GameObject::Render();
		if ((time_notfly % 60 >= 50) && (time_notfly % 60 < 55))bird_image_mid_notfly80->GameObject::Render();
		if ((time_notfly % 60 >= 55) && (time_notfly % 60 < 60))bird_image_mid_notfly90->GameObject::Render();
	}
}

void Bird::Update_bird()
{
	time++;
	bird_image_down->GameObject::Update_bird();
	bird_image_up->GameObject::Update_bird();
	bird_image_mid->GameObject::Update_bird();
	bird_image_mid_notfly340->GameObject::Update_bird();
	bird_image_mid_notfly350->GameObject::Update_bird();
	bird_image_mid_notfly360->GameObject::Update_bird();
	bird_image_mid_notfly10->GameObject::Update_bird();
	bird_image_mid_notfly20->GameObject::Update_bird();
	bird_image_mid_notfly30->GameObject::Update_bird();
	bird_image_mid_notfly40->GameObject::Update_bird();
	bird_image_mid_notfly50->GameObject::Update_bird();
	bird_image_mid_notfly60->GameObject::Update_bird();
	bird_image_mid_notfly70->GameObject::Update_bird();
	bird_image_mid_notfly80->GameObject::Update_bird();
	bird_image_mid_notfly90->GameObject::Update_bird();
	if (bird_image_down->Bird_movement() < 0) bird_fly = true;
	if (bird_image_down->Bird_movement() >= 0) bird_fly = false;
	if (bird_fly == true) time_notfly = 0;
	if (bird_fly == false) time_notfly++;
}
void Bird::Click_bird()
{
	bird_image_mid->GameObject::Click();
	bird_image_down->GameObject::Click();
	bird_image_up->GameObject::Click();
	bird_image_mid_notfly340->GameObject::Click();
	bird_image_mid_notfly350->GameObject::Click();
	bird_image_mid_notfly360->GameObject::Click();
	bird_image_mid_notfly10->GameObject::Click();
	bird_image_mid_notfly20->GameObject::Click();
	bird_image_mid_notfly30->GameObject::Click();
	bird_image_mid_notfly40->GameObject::Click();
	bird_image_mid_notfly50->GameObject::Click();
	bird_image_mid_notfly60->GameObject::Click();
	bird_image_mid_notfly70->GameObject::Click();
	bird_image_mid_notfly80->GameObject::Click();
	bird_image_mid_notfly90->GameObject::Click();
}
void Bird::conllision()
{

}