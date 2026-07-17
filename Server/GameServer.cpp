#include "gameServer.h"
#include "player/player.h"
#include <iostream>
#include <chrono>
#include <thread>


Player player1(30, 0, 100);
Player player2(50, 0, 100);

void GameServer::update() {

	player1.update();
	player2.update();


}


void GameServer::run() {

	while (true) {

		auto start_time = std::chrono::steady_clock::now();

		update();

		std::cout << player1.GetX()<<"\n";

		auto time_took = std::chrono::steady_clock::now() - start_time;

		std::chrono::duration<double, std::milli> wait_time(16.67);

		if (time_took <= wait_time)
		{ 

			auto total_time = wait_time - time_took;

			std::this_thread::sleep_for(total_time);
		}
	}



}