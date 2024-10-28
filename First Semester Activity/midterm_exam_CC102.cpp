#include <iostream>
using namespace std;

int main() {
	int sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int sugarCostPHP, riceCostPHP, sardinesCostPHP, coffeeCostPHP, milkCostPHP;
	int sugarQty, riceQty, sardineQty, coffeeQty, milkQty;
	float totalCostPHP;
	float usdToPhp, poundToPhp;
	
	cout << "========================================\n";
	cout << "Item Quantity\n";
	cout << "Sugar: ";
	cin >> sugarQty;
	cout << "Rice: ";
	cin >> riceQty;
	cout << "Sardine: ";
	cin >> sardineQty;
	cout << "Coffee: ";
	cin >> coffeeQty;
	cout << "Milk: ";
	cin >> milkQty;
	cout << "====================================\n";
	cout << "Item Price\n";
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
	cout << "==================================\n";
	cout << "Currency\n";
	cout << "USD to Php: ";
	cin >> usdToPhp;
	cout << "Pound to Php: ";
	cin >> poundToPhp;
	
	sugarCostPHP = (sugarQty * sugarPriceUSD) * usdToPhp;
	coffeeCostPHP = (coffeeQty * coffeePriceUSD) * usdToPhp;
	milkCostPHP = (milkQty * milkPriceUSD) * usdToPhp;
	riceCostPHP = (riceQty * ricePricePound) * poundToPhp;
	sardinesCostPHP = (sardineQty * sardinesPricePound) * poundToPhp;
	totalCostPHP = sugarCostPHP + riceCostPHP  + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	
	cout << "============= Item Name ===============\n";
	cout << "Sugar\n";
	cout << "Rice\n";
	cout << "Sardine\n";
	cout << "Coffee\n";
	cout << "Milk\n";
	cout << "============= Item Quantity ==============\n";
	cout << "Sugar = " << sugarQty << "\n";
	cout << "Rice  = " << riceQty << "\n";
	cout << "Sardine = " << sardineQty << "\n";
	cout << "Coffee = " << coffeeQty << "\n";
	cout  << "Milk = " << milkQty << "\n";
	cout << "============= Price per item in PHP ==============\n";
	cout << "Sugar = " << sugarPriceUSD * usdToPhp << "\n";
	cout << "Rice = " << ricePricePound * poundToPhp << "\n";
	cout << "Sardine = " << sardinesPricePound * poundToPhp << "\n";
	cout << "Coffee = " << coffeePriceUSD * usdToPhp << "\n";
	cout << "Milk = " << milkPriceUSD * usdToPhp << "\n";
	cout << "============= Total Cost in PHP ==================\n";
	cout << "Total = " << totalCostPHP ;
	return 0;
}