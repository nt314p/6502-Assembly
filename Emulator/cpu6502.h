#pragma once
#include <cstdint>

class cpu6502
{
private:
    uint8_t A, X, Y; // acumulator, registers x and y
    uint8_t PS; // processor status register
    uint16_t PC; // program counter
    uint8_t SP; // stack pointer register

    void reset()
    {

    }
	
};

