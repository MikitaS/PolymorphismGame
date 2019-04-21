#pragma once
#include <SFML/Graphics.hpp>

sf::Vector2i PixelToCoordinate	(sf::Vector2i pixel);   		///Transform pixel to square on the map
sf::Vector2i CoordinateToPixe	(sf::Vector2i coordinate);		///Return pixel of the top left corner of the square


class warrior
{
public:
private:
	int sqX_, sqY_;			///Coordinates on the map 
	int HP_; 				///Health Point
	const int attackpow_; 	///Amount of damage
	const int rangemove_;	///Range for unit to move
	const int rangeattack_;	///Range for unit to attack
	const bool is_evil_;	///Value to define team of unit
	
	//add graphical members
};
