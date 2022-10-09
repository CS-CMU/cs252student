#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

struct Frequency {
public:
	vector<char> c; // ตัวอักษร
	vector<int> f;  // ความถี่
	int numChar; // จำนวนตัวอักษรทั้งหมด
};

class treeNode {
public:
	char character;
	int frequency;
	treeNode *leftChild;
	treeNode *rightChild;
};

class HuffmanTree {
private:
	treeNode *root;

public:
	HuffmanTree() {
		root = nullptr;
	}

	void buildTree(Frequency *freq) {
		/*
    Write your code here
    */
	}


	void decode(string code) {
    /*
    Write your code here
    */
	}
};
