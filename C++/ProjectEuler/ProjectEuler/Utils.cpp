/*
=================
	Utilities - 
==================

Useful functions compiled from problem solutions.
*/

#include "pch.h"
#include "Utils.h"

bool Utils::IsDivisibleBy(int num, int divideBy)
{
	for (int i = 0; i < num; ++i)
	{
		if (i % divideBy == 0)
		{
			return true;
		}
	}
	return false;
}