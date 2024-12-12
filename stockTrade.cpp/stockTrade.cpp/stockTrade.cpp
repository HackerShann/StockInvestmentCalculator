#include <iostream>
using namespace std;

int main()
{
	string company, symbol;
	double numOfShare, costPerShare, pricePerShare;
	const double commissionTrade = 0.02;

	cout << "Stock Investment Performance Calculator..." << endl;
	cout << endl;

	cout << "Company Name (No Spaces) & Symbol: \t \t";
	cin >> company >> symbol;

	cout << "Number of Shares Transacted:       \t \t";
	cin >> numOfShare;

	cout << "Cost per Share (@ buying):         \t \t";
	cin >> costPerShare;

	cout << "Price per Share (@ selling):       \t \t";
	cin >> pricePerShare;
	cout << endl;

	cout << "Realized Gains/Losses Report..." << endl;
	cout << "---------------------------------" << endl;

	cout << "Stock:           \t \t" << company << " (" << symbol << ")" << endl;
	cout << "Quantity:        \t \t" << numOfShare << " shares." << endl;
	cout << endl;

	double boughtShareTotal = numOfShare * costPerShare;
	double amountBought = boughtShareTotal * commissionTrade;
	double totalCost = boughtShareTotal + amountBought;

	cout << "Total Cost:     \t \t" << "$" << totalCost << endl;

	double soldShareTotal = numOfShare * pricePerShare;
	double amountSold = soldShareTotal * commissionTrade;
	double totalProceeds = soldShareTotal - amountSold;

	cout << "Total Proceeds: \t \t" << "$" << totalProceeds << endl;

	double totalComSum = boughtShareTotal + soldShareTotal;
	double commissions = totalComSum * commissionTrade;

	cout << "Commissions:    \t \t" << "$" << commissions << endl;

	double gainsLosses = totalProceeds - totalCost;
	double gainsLossChange = ((totalProceeds - totalCost) / totalCost) * 100;


	cout << "Gains/Losses:   \t \t" << "$" << gainsLosses << " (" << gainsLossChange << "%)" << endl;


	return 0;
}