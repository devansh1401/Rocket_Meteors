#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
private:
    std::string name;
    int score;

public:
    Player() {}
    Player(const std::string &playerName, int playerScore)
    {
        name = playerName;
        score = playerScore;
    }

    std::string getName() const
    {
        return name;
    }

    int getScore() const
    {
        return score;
    }
};

#endif // PLAYER_H
