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
	if (std::count(v.begin(), v.end(), sum) > 1) {
		return true;
	}
	return false;
	
}
int findFirstFrequency(int &sum,std::vector<int>& v) {
	int x;
	std::fstream in("Text.txt");
	std::string line;

	while (std::getline(in, line)) {


		if (line[0] == '-') {
			line = line.substr(1, line.size() - 1);
			std::stringstream s(line);
			s >> x;
			sum -= x;
			
			
		}
		else {
			line = line.substr(1, line.size() - 1);
			std::stringstream s(line);
			s >> x;
			sum += x;
			
		}
		v.push_back(sum);
		if (check_vec(sum, v)) {
			std::cout << sum;
			sum = 0;
			return 0;
		}
		
		
		std::cout << sum << "\n";
	}
	return sum;
}
int main() {
	int sum = 0;
	std::vector<int> v;
	v.push_back(sum);
	if (findFirstFrequency(sum, v) == 0) {
		return 0;
	}
	
	while (findFirstFrequency !=0) {
		findFirstFrequency(sum, v);
	}
}