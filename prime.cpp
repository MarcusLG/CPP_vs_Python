#include <chrono>
#include <iostream>
#include <vector>

int main()
{
	// This function shall return the time to find all prime numbers in from 0-1000
	// using the exhaustive method

	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	std::vector<int> prime_list;

	bool tok;
	for (int i=2; i <= 10001; i++){
		tok = false;
		for (int j=2; j < i; j++){
			if (i%j == 0){
				tok = true;
				break;
			}
		}
		if (!tok){
			prime_list.push_back(i);
		}
	}
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "CPP Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
	return 0;
}