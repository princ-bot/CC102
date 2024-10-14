#include <iostream>
using namespace std;

int main() {
	int sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int sugarCostPHP, riceCostPHP, sardinesCostPHP, coffeeCostPHP, milkCostPHP;
	int sugarQty, riceQty, sardineQty, coffeeQty, milkQtyt;
	int totalCostPHP;
	float usdToPhp, poundToPhp;
	
	cout << "Item name\n";
	cout << "Sugar\n";
	cout << "Rice\n";
	cout << "Sardine\n";
	cout << "Coffee\n";
	cout << "Milk\n";
	
	cout << "Quantity\n";
	cout << "Sugar: ";
	cin >> sugarQty;
	cout << "Rice: ";
	cin >> riceQty;
	cout << "Sardine: ";
	cin >> sardineQty;
	cout << "Coffee: ";
	cin >> coffeeQty;
	cout << "Milk: ";
	cin >> milkQtyt;
	
	cout << "Price per Item in PHP\n";
	cout << "Sugar: ";
	cin >> sugarPriceUSD;
	cout << "Rice: ";
	cin >> ricePricePound;
	cout << "Sardine: ";
	cin >> sardinesPricePound;
	cout << "Coffee: ";
	cin >> coffeePriceUSD;
	cout << "Milk: ";
	cin >> milkPriceUSD;
	
	cout << "Conversion\n";
	cout << "USD to Php: ";
	cin >> usdToPhp;
	cout << "Pound to Php: ";
	cin >> poundToPhp;
	sugarCostPHP = (sugarQty * sugarPriceUSD) * usdToPhp;
	coffeeCostPHP = (coffeeQty * coffeePriceUSD) * usdToPhp;
	milkCostPHP = (milkQtyt * milkPriceUSD) * usdToPhp;
	riceCostPHP = (riceQty * ricePricePound) * poundToPhp;
	sardinesCostPHP = (sardineQty * sardinesPricePound) * poundToPhp;
	cout << "Total Cost per item in PHP\n";
	cout << "Sugar: " << sugarCostPHP << "\n";
	cout << "Rice: " << riceCostPHP << "\n";
	cout << "Sardine: " << sardinesCostPHP << "\n";
	cout << "Coffee: " << coffeeCostPHP << "\n";
	cout << "Milk: " <<  milkCostPHP << "\n";
	totalCostPHP = sugarCostPHP + riceCostPHP  + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	cout << "Total Cost in Php: " << totalCostPHP;
	return 0;
}