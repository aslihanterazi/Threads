#pragma once
#include "thread_.h"
using namespace std;

class ThreadObj
{
public:
	void operator()(int x){
		for (int i = 0; i < x; i++) {
			cout << "func object thread " << i + 1 << " is executing.." << endl;
		}
	}
};

