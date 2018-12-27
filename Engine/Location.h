#pragma once

struct Location
{
	void Add(const Location& val)
	{
		x += val.x;
		y += val.y;
	}
	void Mul(const Location& val)
	{
		x *= val.x;
		y *= val.y;
	}
	bool Equal(const Location& val)
	{
		if (x == val.x && y == val.y)
			return true;
		else
			return false;
	}
	void Reverse()
	{
		int tmp = x;
		x = y;
		y = tmp;
	}
	void Negate()
	{
		x = -x;
		y = -y;
	}
	int x;
	int y;
};