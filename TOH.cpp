#include <iostream>
using namespace std;

void TOH(int num , char Beg , char Aux , char End)
{
	if (num==1)
	{
		cout << "Move Disk 1 from " << Beg << " to " << End << endl;
		return;
	}
	TOH(num-1 , Beg , End , Aux);
	cout << "Move disk " << num << " from " << Beg << " to " << End << endl;
	TOH(num-1 , Aux , Beg , End); 
}

int main()
{
	int n;
	cout << "Enter rings:";
	cin >> n;
	TOH(n , 'A' , 'B' , 'C' );
	return 0;
}
