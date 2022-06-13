#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int RandomNumber() { return (std::rand() % 100); }

void print(vector <int> a)
{
	for (int i: a)
		cout << i << " ";	
	cout << endl;
	
}

int searchmiel(vector <int> a)
{
	
	int min = a[0];
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] % 2 == 0 && a[i] < min)
			min = a[i];
	}
	return min;
}
int main()
{
	srand(unsigned(time(0)));
	int n;
	cout << "n =  "; cin >> n;
	vector<int> v(n);
	
	generate(v.begin(), v.end(), RandomNumber);
	print(v);

	cout << "min - " << searchmiel(v) << endl;
	return 0;
}