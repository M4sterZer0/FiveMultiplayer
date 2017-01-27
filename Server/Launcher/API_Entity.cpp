#include "stdafx.h"

namespace API
{
	namespace Entity
	{
		const char *ThisNamespace = "API::Entity";

		void Destroy(int entity)
		{
			g_Entities[entity].Destroy();
		}

		CVector3 GetPosition(int entity)
		{
			if (!g_Entities.empty())
			{
				for (int i = 0; i < g_Entities.size(); i++)
				{
					if (i == entity)
					{
						return g_Entities[entity].GetPosition();
					}
				}
			}

			std::cout << "[" << ThisNamespace << "] Entity " << entity << " invalid." << std::endl;
		}

		void SetPosition(int entity, CVector3 position)
		{
			g_Entities[entity].SetPosition(position);
		}
	}
}
