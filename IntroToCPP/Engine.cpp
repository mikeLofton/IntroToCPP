#include "Engine.h"

bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
	m_entityCount = 0;
	m_currentFighterIndex = 0;
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

void Engine::start()
{
	Entity wompus = Entity('W', 13002000, 578002, -15000);
	Entity redactedLittleSkeleton = Entity('r', 4400000 - 44000, 45500 - 40, -80 + 80);
	Entity unclePhil = Entity('U', 1, 0, 690000055);

	m_entities[0] = wompus;
	m_entities[1] = redactedLittleSkeleton;
	m_entities[2] = unclePhil;

	m_currentFighter1 = m_entities[0];
	m_currentFighter2 = m_entities[1];
	m_currentFighterIndex = 2;
}

void Engine::update()
{
	//Check death

	m_currentFighter1.attack(m_currentFighter2);
	m_currentFighter2.attack(m_currentFighter2);
}

void Engine::draw()
{
}

void Engine::end()
{
}
