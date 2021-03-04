#pragma once
#include <cstdint>


class bus
{

public:
	bus();
	~bus();
	
	void write(uint16_t address, uint8_t data);
	uint8_t read(uint8_t address);
	
};

