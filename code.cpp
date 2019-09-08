#include <iostream>
#include <cmath>
#include <stack>
using namespace std;
void printstar(int n);
int main()
{
	int n;
	int num = 1;
	int temp;
	int c;
	cin >> n;
	{
		for (int row = 1; row<=n; row++)
		{
			for (int temp = 1; temp <= row; temp++)
			{
				cout << num;
				if (temp<row)
					cout << '*';
				num++;
			}
			cout << endl;
		}
		num = num - 1;
		stack<int> b;
		for (int row = n; row >= 1; row--)
		{
			for (int temp = row; temp >= 1; temp--)
			{
				b.push(num);
				num--;
			}
			for (int temp = row; temp >= 1; temp--)
			{ 
				c = b.top();
				b.pop();
				cout << c;
				if (temp>1)
					cout << '*';
			}		
			cout << endl;
		}
		system("pause");
	}
	return 0;
}
