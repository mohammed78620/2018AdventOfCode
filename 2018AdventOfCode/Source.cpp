#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
bool check_vec(int sum,const std::vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i) == sum) {
			return true;
		}
	}
	return false;
}
int main() {
	int sum = 0;
	int x;
	std::vector<int> v;
	v.push_back(sum);
	std::fstream in("Text.txt");
	std::string line;
	while (std::getline(in, line)) {
		

		if (line[0] == '-') {
			line = line.substr(1, line.size() - 1);
			std::stringstream s(line);
			s >> x;
			sum -= x;
			
			if (check_vec(sum, v)) {
				std::cout << sum << "\n";
				return 0;
			}
			v.push_back(sum);

		}
		else{
			line = line.substr(1, line.size() - 1);
			std::stringstream s(line);
			s >> x;
			sum += x;
			
			if (check_vec(sum, v)) {
				std::cout << sum<<"\n";
				return 0;
			}
			v.push_back(sum);
		}
	}
	std::cout << "no number";
}