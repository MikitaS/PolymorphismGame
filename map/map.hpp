#pragma once
#include <SFML/Graphics.hpp>

#include "../barrier/barrier.hpp"
#include "../warrior/warrior.hpp"

#define MAP_SQUARE_LENGTH 20
#define MAP_SQUARE_WIDTH 10

struct onesquare
{
	bool is_free_;		///True if there is nothing on this square
	bool is_barrier_;   	///True if there is a barrier on this square
	
	warrior * PtrUnit_; ///Pointer to unit on this field
};

class map
{
public:
private:
	onesquare field_ [MAP_SQUARE_WIDTH] [MAP_SQUARE_LENGTH]; ///Main field
	
	//add buttons...
};
