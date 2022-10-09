#include "HW09.cpp"
#include <iostream>
using namespace std;
typedef pair<int, char> pic;

/*
  Count the number of characters in string
*/
Frequency *countFrequency(string s) {
	Frequency *freq = new Frequency();
	map<char, int> m;
	for (char c : s)
		m[c]++;
	priority_queue<pic, vector<pic>, greater<pic>> pq;
	for (auto &it : m)
		pq.push(make_pair(it.second, it.first));
	freq->numChar = pq.size();
	while (!pq.empty()) {
		pic p = pq.top();
		freq->c.push_back(p.second);
		freq->f.push_back(p.first);
		pq.pop();
	}
	return freq;
}

int main() {
	Frequency *freq = countFrequency("feed me more food");
	HuffmanTree huffman_tree;
  huffman_tree.buildTree(freq);
	huffman_tree.decode("00111101000");
	return 0;
}