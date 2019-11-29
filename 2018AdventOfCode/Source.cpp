#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
bool check_vec(int sum,const std::vector<int>& v) {
	std::vector<int>::const_iterator it = v.begin();
	int count = 0;
	for (; it != v.end();++it) {
		if (*it == sum) {
			count++;
			if (count == 2) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	int sum = 0;
	int x;
	std::map<int,int> m;
	++m[sum];
	
	std::fstream in("Text.txt");
	std::string line;

	while (std::getline(in, line)) {
		

		if (line[0] == '-') {
			line = line.substr(1, line.size() - 1);
			std::stringstream s(line);
			s >> x;
			sum -= x;
		}
		else{
			line = line.substr(1, line.size() - 1);
			std::stringstream s(line);
			s >> x;
			sum += x;
		}
		std::cout << sum << "\n";
		if (++m[sum]==2) {
			std::cout << sum;
			return 0;
		}
		else {
			++m[sum];
		}
		

	}
}