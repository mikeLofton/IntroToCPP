#include "ActorArray.h"

void ActorArray::addActor(Actor* actor)
{

}

bool ActorArray::removeActor(Actor* actor)
{
	return false;
}

bool ActorArray::removeActor(int index)
{
	return false;
}

Actor* ActorArray::getActor(int index)
{
	if (index < 0 || index >= m_actorCount)
		return nullptr;
	return m_actors[index];
}

bool ActorArray::contains(Actor* actor)
{
	for (int i = 0; i < m_actorCount; i++)
	{
		if (m_actors[i] == actor)
			return true;
	}

	return false;
}
