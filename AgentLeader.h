#ifndef AGNETLEADER_H
#define AGNETLEADER_H
#pragma once
//------------------------------------------------------------------------
//
//  Name:   AgentLeader.h
//
//  Utilise l'algorithmes :
//                     -->  Wander
//
//------------------------------------------------------------------------
#include "Vehicle.h"
#include "2d/Vector2D.h"

#include <vector>

class GameWorld;

class AgentLeader :
	public Vehicle
{
public:
	AgentLeader(GameWorld* world,
				Vector2D  position,
				double    rotation,
				Vector2D  velocity,
				double    mass,
				double    max_force,
				double    max_speed,
				double    max_turn_rate,
				double    scale);
	//~AgentLeader();
};


#endif

