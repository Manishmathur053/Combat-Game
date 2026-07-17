#include "player.h"


void Player::attack(Player& target ) {

    

    target.health -= 20;
    if (target.health < 0)
        target.health = 0;
   
}

void Player::move() {

    x += 1;


}

void Player::update() {


    move();


}

