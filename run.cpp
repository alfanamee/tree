#include <iostream>
#include <string>
#include <sstream>
#include "tree.h"
#include <fstream>
using namespace std;

void main()
{
	Tree<int> mytree;


	int i;
	int insert;
	int seach;
	int del;

	cout << "How many Node Do you want to insert : ";
	cin >> insert;
	for (i = 1; i <= insert; i++)
	{
		int  x = rand();
		mytree.insert(x);

	}

	mytree.inorder();
	cout << "Height of tree is : " << mytree.height(mytree.root);
	mytree.clear();
	mytree.balance(mytree.myvecter, 0, mytree.myvecter.size() - 1);
	cout << endl;
	cout << "Height Balance is : " << mytree.height(mytree.root);
	cout << endl;
	cout << "What node Do you want to Search ? : ";
	cin >> seach;  
	cout << "There are " << mytree.search(seach) << " Node from searching";
	cout << endl;
	cout << "Which node Do you want to Delete ? : ";
	cin >> del;
	mytree.findAndDelete(del);
	cout << "Height when deleted : " << mytree.height(mytree.root);

}
