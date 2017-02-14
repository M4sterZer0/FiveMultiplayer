#pragma once
/*
* The global server entity ids
*/
class CServerEntity
{
public:
	enum Type
	{
		Player = 0,
		Vehicle = 1,
		Object = 2
	};
private:
	struct Entity
	{
		int Id;
		Type type;

		CPlayerEntity	*player;
		CVehicleEntity	*vehicle;
		CObjectEntity	*object;
	} Data;

public:
	CServerEntity() {}
	~CServerEntity() {}

	void Create(int entity);
	void Destroy();

	void SetId(int id) { Data.Id = id; }

	Type GetType() { return Data.type; }
	void SetType(Type type);

	int GetId() { return Data.Id; }

	CPlayerEntity* GetPEntity() { return Data.player; }
	void		SetEntity(CPlayerEntity *player) { Data.player = player; }
	CVehicleEntity* GetVEntity() { return Data.vehicle; }
	void		SetEntity(CVehicleEntity *vehicle) { Data.vehicle = vehicle; }
	CObjectEntity* GetOEntity() { return Data.object; }
	void		SetEntity(CObjectEntity *object) { Data.object = object; };

	CVector3	GetPosition();
	void		SetPosition(CVector3 position);

	void		SetQuaternion(CVector4 quaternion);

	void		SetAssignement(RakNetGUID guid);
};
extern std::vector<CServerEntity> g_Entities;

namespace ServerEntity
{
	bool		IsValid(int entity);
	RakNetGUID	GetAssignee(int entity);
	void		SetAssignee(int entity, RakNetGUID assignee);
}