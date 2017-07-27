#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class tag {
public:
	tag(tag* a) : child(a) {}
	unordered_map<string, bool> values;
	tag* child;
};

int main() {
	unordered_map<string, tag*> tags;
	string tag_input, value_input, garbage_input;
	int num_tags, num_queries;

	cin >> num_tags >> num_queries;

	for (int i = 0; i < num_tags; ++i) {
		cin >> tag_input;

		if (tag_input[1] == '/') {
			continue;
		}



		tag* temp_tag = new tag(nullptr);
		temp_tag->values.emplace("value", true);
		tags.emplace(tag_input, temp_tag);
	}
}
