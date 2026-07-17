#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    int health{};
    int cooldown{};
    float x{};
    float y{};
    
public:

    Player(float startX, float startY, int startHealth): x(startX), y(startY) , health(startHealth) {}

    
    int GetHealth() const {
        return health;
    }
    float GetX() const {
        return x;
    }
    float GetY() const {
        return y;
    }

    void attack(Player& target); // Declaration only

    void update();

    void move();
};

#endif   