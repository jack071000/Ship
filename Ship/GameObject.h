#pragma once
class GameObject
{
protected:


public:
	D3DXMATRIX matrix; 

	D3DXVECTOR2 position;

	D3DXVECTOR2 scale;
	D3DXVECTOR2 scaleCenter;

	float rotation;
	D3DXVECTOR2 rotationCenter;

	GameObject* parentObject;
	std::vector<GameObject*> childrenObjects;

	bool visible;
	
public:
	GameObject();
	~GameObject();

	virtual void OnUpdate();
	virtual void OnDraw();

	virtual void Update();
	virtual void Draw();

	GameObject* GetParent() { return parentObject; }
	void SetParent(GameObject* obj) { parentObject = obj; }

	D3DXVECTOR2 GetPosition() const;

	void SetPosition(int x, int y);
	void SetPosition(D3DXVECTOR2 position);

	void AddChild(GameObject* object);
	void RemoveChild(GameObject* object);

	void ClearChildren();


	bool GetVisisble() { return visible; }
	void SetVisible(bool visible);

	int GetPositionX() const;
	int GetPositionY() const;


};