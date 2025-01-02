#include <iostream>
using namespace std;

class BuckyClass{
public:
	void coolSaying() {
		cout << "preachin to the choir" << endl;
	}
};

int main()
{
	BuckyClass buckysObject;
	buckysObject.coolSaying();
	return 0;
}