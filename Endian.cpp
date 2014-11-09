#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	if(*(char *)&num == 1)
		cout<<"Little-Endian"<<endl;
	else
		cout<<"Big-Endian"<<endl;
	system("pause");
	return 0;
}
