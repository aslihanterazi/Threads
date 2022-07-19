#pragma once
#include <iostream>
#include <thread>
using namespace std;

void thread_fnc()
{
		for (int i = 0; i < 3; i++) {
			cout << "func pointer thread "<< i <<" is executing.."<<endl;
		}
};

