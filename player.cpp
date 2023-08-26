#include "player.h"

// Implement the member functions of the Player class here

// Constructor
Player::Player(const std::string &playerName, int playerScore)
{
    name = playerName;
    score = playerScore;
}

// Getter for name
std::string Player::getName() const
{
    return name;
}

// Getter for score
int Player::getScore() const
{
    return score;
}
