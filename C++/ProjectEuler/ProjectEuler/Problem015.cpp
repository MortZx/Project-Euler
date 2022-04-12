#include "pch.h"
#include "Problems.h"
#include "Utils.h"


/*
=================
=   Problem 15   =	Lattice paths
==================

Starting in the top left corner of a 2�2 grid, 
and only being able to move to the right and down, 
there are exactly 6 routes to the bottom right corner.

_ _		_			_		
   |	  |_		 |		|_ _		|_		|
   |		|		 |_		    |		  |_	|_ _

How many such routes are there through a 20�20 grid?

*/
//
//class GraphNode
//{
//	GraphNode(unsigned int x, unsigned int y) { xPos = x; yPos = y; }
//	GraphNode* Parent;
//	unsigned int xPos;
//	unsigned int yPos;
//private:
//	//MoveDown
//};
//
///**
// * Can we move right on the grid?
// *
// * @param xPos - How far right we are
// * @param gridSize - Maximum size in x-axis
// * @return true - If we can move right on the grid
// */
//bool CanMoveRight(unsigned int xPos, unsigned int gridSize)
//{
//	return xPos < gridSize ? true : false;
//}
//
///**
// * Can we move down on the grid?
// *
// * @param xPos - How far down we are
// * @param gridSize - Maximum size in y-axis
// * @return true - If we can move down on the grid
// */
//bool CanMoveDown(unsigned int yPos, unsigned int gridSize)
//{
//	return yPos < gridSize ? true : false;
//}

/**
 * Have we reached the goal?
 *
 * @param xPos - How far right we are
 * @param yPos - How far down we are
 * @param gridSize - Total size of the square grid
 * @return true - If we're at the bottom right corner
 */
//bool IsAtGoal(unsigned int xPos, unsigned int yPos, unsigned int gridSize)
//{
//	if (xPos == )
//	return xPos < gridSize ? true : false;
//}

std::vector<std::vector<unsigned int>> graph;

unsigned long long CountTotalRoutes(const unsigned int length, const unsigned width)
{
	if (length == 0 || width == 0)
	{
		return 1;	// can maybe also return 0? or something about being at the goal = 1
	}

	// if we've already explored this node, return the total routes from here
	if (graph.at(length).at(width) != 0)
	{
		return graph.at(length).at(width);
	}

	unsigned long long res = 0;

	if (length == width)
	{
		// square graph so distance will be the same in either direction, hence 2*
		res = 2 * CountTotalRoutes(length, width - 1);
	}
	else
	{
		// Total routes at this node = total routes goind down + total routes going right
		res = CountTotalRoutes(length - 1, width) + CountTotalRoutes(length, width - 1);
	}
	
	graph.at(length).at(width) = res;
	graph.at(width).at(length) = res;
	return res;
}

// store number of routes to the end at each node
//std::map<std::pair<unsigned int, unsigned int>, unsigned long long>


unsigned int problem15(const unsigned int width, const unsigned long long length)
{
	unsigned int maxRoutes = 0;

	unsigned int xPos = 0;
	unsigned int yPos = 0;

	// store number of routes to reach the end at each node, initialised to 0
	graph = std::vector<std::vector<unsigned int>>(width + 1, std::vector<unsigned int>(length + 1, 0));

	return CountTotalRoutes(width, length);
}