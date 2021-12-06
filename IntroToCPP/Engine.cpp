#include "Engine.h"
#include <iostream>

bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
	m_entityCount = 0;
	m_currentFighterIndex = 0;
}

Engine::~Engine()
{
	delete[] m_scenes;
}

void Engine::run()
{
	start();

	while (!getApplicationShouldClose())
	{
		update();
		draw();
	}

	end();
}

/// <summary>
/// Adds a scene to the engine's scene array
/// </summary>
/// <param name="scene">The scene that will be added to the scene array</param>
void Engine::addScene(Scene* scene)
{
	Scene** tempArray = new Scene * [m_sceneCount + 1];

	//Copy all values from the old array into the new one
	for (int i = 0; i < m_sceneCount; i++)
	{
		tempArray[i] = m_scenes[i];
	}

	//Set the last index to be the new scene
	tempArray[m_sceneCount + 1] = scene;

	//Set the old array to be the new array
	m_scenes = tempArray;

}

Scene* Engine::getCurrentScene()
{
	return nullptr;
}

void Engine::setCurrentScene(int index)
{
}

void Engine::start()
{
	Entity wompus = Entity('W', 130, 57, 15);
	Entity redactedLittleSkeleton = Entity('r', 440, 45, 1);
	Entity unclePhil = Entity('U', 1, 10, 69);

	m_entities[0] = wompus;
	m_entities[1] = redactedLittleSkeleton;
	m_entities[2] = unclePhil;
	m_entityCount = 3;

	int test = 5;
	Entity* entityPtrs[5];
	Entity** entities = new Entity*[test];

	m_currentFighter1 = &m_entities[0];
	m_currentFighter2 = &m_entities[1];
	m_currentFighterIndex = 2;
}

void Engine::update()
{
	//Check death
	if (m_currentFighter1->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		m_currentFighter1 = &m_entities[m_currentFighterIndex];
		m_currentFighterIndex++;
	}
	if (m_currentFighter2->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		m_currentFighter2 = &m_entities[m_currentFighterIndex];
		m_currentFighterIndex++;
	}

	if (m_currentFighter1->getHealth() <= 0 || m_currentFighter2->getHealth() <= 0 && m_currentFighterIndex >= m_entityCount)
	{
		m_applicationShouldClose = true;
		return;
	}

	m_currentFighter1->attack(m_currentFighter2);
	m_currentFighter2->attack(m_currentFighter1);
}

void Engine::draw()
{
	m_currentFighter1->printStats();
	m_currentFighter2->printStats();
	system("pause");
	system("cls");
}

void Engine::end()
{
}
