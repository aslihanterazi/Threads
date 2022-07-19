#pragma once
#include <iostream>

using namespace std;

int add(int a) {
	int sum = 0;
	for (int i = 0; i < a;i++) {
		sum += i;

		cout << "func pointer thread " <<i+1<<" is executing.."<<endl;
	}
	//cout << "sum is " <<sum<<endl;
		
	//return sum;
	return 0;
}