#include "stdafx.h"
#include "Agent.h"
#include <memory>

Agent::Agent(AgentManager& manager, std::string& texturePath, Vector startingPosition) : manager(manager), Steppable(texturePath, startingPosition) {
	statepnt = std::unique_ptr<AgentState>(new AgentState);
}

void Agent::updateNeighbours(std::vector<const Agent*> neighbours) {
	neighbourList = neighbours;
}