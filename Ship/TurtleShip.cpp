#include "stdafx.h"
#include "TurtleShip.h"


TurtleShip::TurtleShip()
{
	form1 = Sprite::Create("Resources/TurtleShip/form1.png");
	form2 = Sprite::Create("Resources/TurtleShip/form2.png");
	form3 = Sprite::Create("Resources/TurtleShip/form3.png");
	form4 = Sprite::Create("Resources/TurtleShip/form4.png");

	form1->SetVisible(true);
	form2->SetVisible(false);
	form3->SetVisible(false);
	form4->SetVisible(false);

	worker = new AnimationSprite(1, 10);

	worker->AddFrame(Sprite::Create("Resources/Unit/worker1.png"));
	worker->AddFrame(Sprite::Create("Resources/Unit/worker2.png"));
	worker->parentObject = this;
	form2->position.y -= 10;
	form3->position.y -= 12;
	AddChild(form1);
	AddChild(form2);
	AddChild(form3);
	AddChild(form4);
	AddChild(worker);

	worker->SetPosition(30, 180);
	this->SetPosition(0, 150);
}


TurtleShip::~TurtleShip()
{

}

void TurtleShip::OnUpdate()
{

}

void TurtleShip::OnDraw()
{

}

void TurtleShip::SetTurtleShipForm(TurtleShipForm::Enum form)
{
	switch (form)
	{
	case TurtleShipForm::Enum::Form1:
		form1->SetVisible(true);
		break;

	case TurtleShipForm::Enum::Form2:
		form1->SetVisible(false);
		form2->SetVisible(true);
		break;

	case TurtleShipForm::Enum::Form3:
		form2->SetVisible(false);
		form3->SetVisible(true);
		break;

	case TurtleShipForm::Enum::Form4:
		form3->SetVisible(false);
		form4->SetVisible(true);
		break;
	}
}
