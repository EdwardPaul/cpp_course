#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <utility>

using namespace std;


template <typename Collection>
string Join(Collection& v, char d) {
	stringstream ss;
	bool first = true;
	for (const auto& item : v) {
		if (!first) {
			ss << d;
		}
		ss << item;
		first = false;
	}
	return ss.str();
}

// template <typename T>
// ostream& operator<<(ostream& out, const vector<T>& v) {
// 	return out << '[' << Join(v, ',') << ']';
// }

// template <typename First, typename Second>
// ostream& operator<<(ostream& out, const pair<First, Second>& v) {
// 	return out << '(' << v.first << ',' << v.second << ')';
// }

template <typename First, typename Second>
pair<First, Second> operator*(const pair<First, Second>& p1, const pair<First, Second>& p2) {
	return {p1.first * p2.first, p1.second * p2.second};
}

template <typename T>
vector<T> operator*(const vector<T>& v1, const vector<T>& v2) {
	vector<T> nv;
	for (int i = 0; i < v1.size(); i++) {
		T temp = v1[i] * v2[i];
		nv.push_back(temp);
	}
	return nv;
}

template <typename Key, typename Value>
map<Key, Value> operator*(const map<Key, Value>& v1, const map<Key, Value>& v2) {
	map<Key, Value> squares;
	for (const auto& item : v1) {
		auto value_v2 = v2.at(item.first);
		squares[item.first] = value_v2 * item.second;
	}
	return squares;
}

// template <typename Key, typename Value>
// ostream& operator<<(ostream& out, const map<Key, Value>& v) {
// 	return out << '{' << Join(v, ',') << '}';
// }

template <typename T>
vector<T> Sqr(const vector<T>& v) {
	vector<T> squares;
	for (const T& item : v) {
		T new_item = item * item;
		squares.push_back(new_item);
	}
	return squares;
}

template <typename Key, typename Value>
map<Key, Value> Sqr(const map<Key, Value>& v) {
	map<Key, Value> squares;
	for (const auto& item : v) {
		Value new_item = item.second * item.second;
		squares[item.first] = new_item;
	}
	return squares;
}

template <typename First, typename Second>
pair<First, Second> Sqr(const pair<First, Second>& v) {
	return v*v;
}

template <typename T>
T Sqr(T x) {
    return x * x;
}

int main() {

	pair<pair<int,double>,pair<double, int>> p{{1,1.5}, {2, 2.5}};
	cout << Sqr(p).first.second << " " << Sqr(p).second.first << endl;

	return 0;
}