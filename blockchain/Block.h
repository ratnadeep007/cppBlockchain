#pragma once
#include <cstdint>
#include <iostream>

class Block {
	uint32_t _nIndex;
	int64_t _nNonce;
	std::string _sData;
	std::string _sHash;
	time_t _tTime;

	std::string _CalculateHash() const;

public:
	std::string sPrevHash;

	Block(uint32_t nIndexIn, const std::string &sDataIn);

	std::string GetHash();

	void MineBlock(uint32_t nDifficulty);
};