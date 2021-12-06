#include "Scene.h"

Scene::Scene()
{
	m_actorCount = 0;
}

void Scene::addActor(Actor* actor)
{
	m_actors.addActor(actor);
}

bool Scene::removeActor(Actor* actor)
{
	m_actors.removeActor(actor);
}

void Scene::start()
{
	m_started = true;
}

void Scene::update()
{
	for (int i = 0; i < m_actors.getLength(); i++)
	{
		if (!m_actors.getActor(i))
	}
}
