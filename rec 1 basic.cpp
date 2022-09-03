#include<iostream>
using namespace std;
void reverse(int n) {
	if(n==0) {
		return;
	} else {
		cout<<n;
		reverse(n-1);

	}
}

int main() {
	int a;
	cout<<"Enter the value"<<endl;
	cin>>a;
	reverse(a);
	system("pause");
	return 0;
}

