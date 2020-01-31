# include <iostream>
# include <vector>

using std::vector;

int main() {
	//BUBBLE SORT
	vector <int> v = { 2 , 9 , 6 , 3 , 8 , 7 , 4 , 1 };
	int tmp;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size() - 1; j++) {
			if (v[j] > v[j + 1]) {
				tmp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = tmp;
			}
		}
	}
	for (auto it : v) {
		std::cout << it << std::endl;
	}

	/*MAP
	std::map<int, char> example = { {1,'a'},{2,'b'} };

	auto search = example.find(2);
	if (search != example.end()) {
		std::cout << "Found " << search->first << " " << search->second << '\n';
	}
	else {
		std::cout << "Not found\n";
	}
	*/
}










//IN.l_p_d
//PRE.p_l_d
//POST.l_d_p