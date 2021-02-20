#include<iostream>;
using namespace std;
int a[3] = { 2,3,5 };

bool Judge(double d) {
	int tag = 0;
	int n = d;
	while (1) {
		tag = 0;
		for (int i = 0; i < 3; i++)
			if ((n / a[i]) == 0) {
				return 1;
			}
			else
				if ((d / a[i]) == (n / a[i])) {
					n = d = n / a[i];
					tag = 1;
					break;
				}
		if (tag==0)
			return 0;
	}
}

    
int main() {
	double d;
	cin >> d;
	if (Judge(d))
		cout << "True";
	else
		cout << "False";
	return 0;

}