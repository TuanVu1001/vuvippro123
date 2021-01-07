#include<iostream>
using namespace std;
//int main()
//{
	//	int n; /////// tinh tong S=1+2+3.....+n
	//		do {
	//			cout << "nhap n:" << endl;
	//			cin >> n;
	//		} while (n <= 3 || n >= 50);
	//		int tong = 0;
	//		for ( int i = 1; i <= n; i++)
	//		{
	//			tong = tong + i;
	//			/*cout << "tong la:" << endl;*/
	//		}
	//		cout << "tong la:" << tong << endl;
	//
	//	int n;   //tinh tong S=1*binh+2binh+3binh+.....nbinh
	//	do {
	//	    cout << "nhap n:" << endl;
	//		cin >> n;
	//	} while (n <= 5 || n >= 20);
	//	int tong = 0;
	//	for (int i = 1; i <= n; i++)
	//	{
	//		tong = tong + i * i;
	//	}
	//	cout << "tong la:" << tong << endl;
	//	int n;  ////TINH TONG S=1+1/2+1/3+....1/N
	//	do {
	//		cout << "nhap n:" << endl;
	//		cin >> n;
	//	} while (n <= 7);
	//	float tong = 0;
	//	for (int i = 1; i <= n; i++);
	//	{
	//		tong = tong + (float)1 / n;
	//	}
	//	cout << "tong là:" << tong << endl;
//}
	int main()
	{
		int n, i;
		cout << "nhap so nguyen n" << endl;
		cin >> n;
		i = sqrt(n);
		if (n == i * i)
			cout << "la so chinh phuong" << "\n";
		else
			cout << "khong phai so chinh phuong";
	}
	

 
