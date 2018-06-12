#include <thread>
#include <iostream>

using namespace std;

void hello()
{
	std::cout<<"hello concurrent world\n";
}

int main()
{
	std::thread t(hello);
	t.join();
	//printf("Hello, world\n");
	
	//return 0;
}
