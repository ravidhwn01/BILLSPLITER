#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	// int t;
	// cin>>t;
	// while (t--)
	// {
	float ravi, vikash, yash;
	cout << "MONEY GIVEN BY RAVI : " << endl;
	cin >> ravi;
	cout << "MONEY GIVEN BY VIKASH : " << endl;
	cin >> vikash;
	cout << "MONEY GIVEN BY YASH : " << endl;
	cin >> yash;

	float maximum_payment = max(ravi, max(vikash, yash));
	float perhead = (ravi + vikash + yash) / 3;
	cout << "Ravi  paid : " << ravi << endl;
	cout << "Vikash  paid : " << vikash << endl;
	cout << "Yash  paid : " << yash << endl;
	cout << "Total Cost : " << ravi + vikash + yash << endl;
	cout << "Money Perhead : " << perhead << endl;

	cout << "maximum paymenyt : " << maximum_payment << endl;

	int Ravi = ravi - perhead;
	int Vikash = vikash - perhead;
	int Yash = yash - perhead;

	// cout<<"Ravi  : "<<Ravi<<endl;
	// cout<<"Vikash  : "<<Vikash<<endl;
	// cout<<"Yash   : "<<Yash<<endl;
	// }
	if (maximum_payment == ravi)
	{
		if (vikash >= perhead && vikash > yash)
		{
			cout << "\t\tYash will pay to ravi :" << abs(Vikash + Yash) << endl;
			cout << "\t\tYash will pay to vikash :" << abs(Vikash) << endl;
		}
		else if (yash >= perhead && yash > vikash)
		{
			cout << "\t\tvikash will pay to ravi :" << abs(Vikash + Yash) << endl;
			cout << "\t\tvikash will pay to yash :" << abs(Yash) << endl;
		}

		else
		{
			cout << "\t\tVikash will pay to ravi  : " << abs(Vikash) << endl;
			cout << "\t\tYash will pay to ravi   : " << abs(Yash) << endl;
		}
	}

	if (maximum_payment == vikash)
	{
		if (yash >= perhead && yash > ravi)
		{
			cout << "\t\tRavi will pay to vikash :" << abs(Ravi + Yash) << endl;
			cout << "\t\travi will pay to Yash :" << abs(Yash) << endl;
		}
		else if (ravi >= perhead && ravi > yash)
		{
			cout << "\t\tyash will pay to vikash :" << abs(Ravi + Yash) << endl;
			cout << "\t\tyash will pay to ravi :" << abs(Ravi) << endl;
		}

		else
		{
			cout << "\t\travi will pay to  vikash : " << abs(Ravi) << endl;
			cout << "\t\tYash will pay to vikash   : " << abs(Yash) << endl;
		}
	}

	if (maximum_payment == yash)
	{
		if (ravi >= perhead && ravi > vikash)
		{
			cout << "\t\tvikash will pay to yash :" << abs(Vikash + Ravi) << endl;
			cout << "\t\tvikash will pay to ravi :" << abs(Ravi) << endl;
		}
		else if (vikash >= perhead && vikash > ravi)
		{
			cout << "\t\travi will pay to yash :" << abs(Vikash + Ravi) << endl;
			cout << "\t\travi will pay to vikash :" << abs(Vikash) << endl;
		}
		else
		{

			cout << "\t\travi will pay to  yash : " << abs(Ravi) << endl;
			cout << "\t\tvikash will pay to yash : " << abs(Vikash) << endl;
		}
	}

	return 0;
}
