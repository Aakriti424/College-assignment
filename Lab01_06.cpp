/*? Write a C++ program that inputs three product names, their prices, and quantities, then
displays them in a tabular format using setw. Display the total price with two decimal
places using setprecision. Use endl for line breaks.*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	string product[3];
	float price[3];
	int quantity[3];
	float total;
	
	for(int i=0;i<3;i++){
		cout<<"Enter the name of the product, its price and quantity\n";
		cin>>product[i]>>price[i]>>quantity[i];
		total+=price[i]*quantity[i];
	}
	cout<<left<<setw(15)<<"Product"<<right<<setw(10)<<"Price"<<setw(12)<<"Qunatity"<<setw(10)<<endl;
	for(int i=0; i<3;i++)
	{
		cout<<left<<setw(15)<<product[i]<<right<<setw(12)<<price[i]<<setw(10)<<quantity[i]<<endl;
	}
	cout<<"\nTotal price:\t"<<fixed<<setprecision(2)<<total<<endl;
	cout<<"\n--------------------------------\n";
	cout<<"Lab No.:Unit 1 (6)\tName:Aakriti Bhandari\tRoll No.:27";
}


