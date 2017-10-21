#ifndef AGENTPOURSUIVEUR_H
#define AGENTPOURSUIVEUR_H
#pragma once
//------------------------------------------------------------------------
//
//  Name:   AgentPoursuiveur.h
//
//  Utilise les algorithmes :
//                     -->  OffsetPursuit
//                     -->  Separation
//
//------------------------------------------------------------------------
#include "Vehicle.h"
#include "2d/Vector2D.h"

#include <vector>

class GameWorld;

class AgentPoursuiveur : public Vehicle
{
public:
	AgentPoursuiveur(GameWorld* world,
					Vector2D  position,
					double    rotation,
					Vector2D  velocity,
					double    mass,
					double    max_force,
					double    max_speed,
					double    max_turn_rate,
					double    scale,
					Vehicle*  target,
					Vector2D  offset);

	//~AgentPoursuiveur();
};

#endif

