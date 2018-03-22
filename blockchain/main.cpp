#include "Blockchain.h"

// For checking runtime
#include <ctime>
#include <sstream>

int main() {
	Blockchain bChain = Blockchain();

	int num;
	std::cout << "How many blocks do you want to mine?";
	std::cin >> num;

	for (int i = 0; i < num; i++) {
		int start_s = clock();
		std::cout << "Mining Block " << i << std::endl;
		std::ostringstream oss;
		oss << "Block " << i << " data";
		std::string block_data = oss.str();
		std::cout << block_data;
		bChain.AddBlock(Block(1, block_data));
		int stop_s = clock();

		int time = (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000;
		std::cout << "\nTime:" << time / 1000 << " secs" << std::endl;
	}
	int nn;
	std::cout << "Press any key to quit...";
	getchar();
	return 0;
}
