#pragma once
class Request
{
public:
	int srclevel;
	int detlevel;
	Request(int inSrcLevel, int inDetLevel);
	~Request();
};

