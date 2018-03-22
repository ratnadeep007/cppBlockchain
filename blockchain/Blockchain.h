#pragma once
#include <cstdint>
#include <iostream>
#include <vector>
#include "Block.h"

class Blockchain {
	uint32_t _nDifficulty;
	std::vector<Block> _vChain;

public:
	Blockchain();

	void AddBlock(Block bNew);
	Block _GetLastBlock() const;
};