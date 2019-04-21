#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

#include "./map/map.hpp"
#include "./barrier/barrier.hpp"
#include "./warrior/warrior.hpp"

class game
{
public:
	void ChooseUnits(); ///function to choose units
	void start();
	
private:
	std::vector<barrier> barriers_;
	std::vector<warrior> goodwarriors_;
	std::vector<warrior> evilwarriors_;
	map map_;
	
	//add window and other graphical members
};
