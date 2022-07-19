#include "thread_.h"
#include "ThreadObj.h"
#include "add.h"
using namespace std;

int main() {
	
	thread th1(add,2);
	th1.join();
	cout << "func pointer thread is terminated.."<<endl<<endl;

	thread th2(ThreadObj(),3);
	th2.join();
	cout << "func obj thread is terminated.." << endl << endl;

	return 0;
}