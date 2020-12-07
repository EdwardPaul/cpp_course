#include <iostream>
#include <map>
#include <utility>
#include <exception>
#include <string>

using namespace std;

template <typename Key, typename Value>
Value& GetRefStrict(map <Key, Value>& m, Key k) {
	try {
        return m.at(k);
    } catch (const std::out_of_range& oor) {
        throw std::runtime_error("Out of Range error");
    }
}	

int main() {
	map<char, string> m = {{'c', "value"}};
	// GetRefStrict(m, 0);
	string& item = GetRefStrict(m, 'c');
	item = "newvalue";
	cout << m['c'] << endl; // выведет newvalue

	return 0;
}
