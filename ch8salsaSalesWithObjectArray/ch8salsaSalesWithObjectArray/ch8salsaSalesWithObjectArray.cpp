// ch8salsaSalesWithObjectArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// class definition
class Product
{
public:
	string salsaName;
	int salsaSales=0;

	// default constructor
	Product()
	{
		salsaName = " ";
		salsaSales = 0;
	}
	
	// constructor	
	Product(string name, int sales)
	{
		salsaName = name;
		salsaSales = sales;
	}
	
	// set salsa name	
	void setSalsaName(string name)
	{
		salsaName = name;
	}

	// set salsa sales
	void setSalsaSales(int sales)
	{
		salsaSales = sales;
	}
	
	// get salsa name
	string getSalsaName()
	{
		return salsaName;
	}
	
	// get salsa sales
	int getSalsaSales()
	{
		return salsaSales;
	}
}; // end class Product

//prototype
//totalSalsaSales function
int totalSalsaSales(Product salsa[], int size);
//highestSalsaSales function
int highestSalsaSales(Product salsa[], int size);
//lowestSalsaSales function
int lowestSalsaSales(Product salsa[], int size);
// displaySalsaSalesReport function
void displaySalsaSalesReport(Product salsa[], int size);

const int NUM_SALSAS = 5;
int main()
{
    std::cout << "Chapter 8 Salsa Sales with Object Array by Kevin Bell\n";
	// single array of class objects
	// array of Product objects
	//instantiate 5 salsa objects
	Product salsa[NUM_SALSAS];
	//initialize salsa objects
	salsa[0].salsaName = "mild";
	salsa[1].salsaName = "medium";
	salsa[2].salsaName = "sweet";
	salsa[3].salsaName = "hot";
	salsa[4].salsaName = "zesty";
	std::cout << "Enter the number of jars sold last month for each salsa type.\n";
	//initialize salsa sales
	salsa[0].salsaSales = 0;
	salsa[1].salsaSales = 0;
	salsa[2].salsaSales = 0;
	salsa[3].salsaSales = 0;
	salsa[4].salsaSales = 0;
	
	//get sales for each salsa
	for (int i = 0; i < NUM_SALSAS; i++)
	{
		std::cout << salsa[i].salsaName << ": ";
		std::cin >> salsa[i].salsaSales;
	} // end for loop
	cout << endl;
	// display salsa sales report
	displaySalsaSalesReport(salsa, NUM_SALSAS);
	cout << endl;
	// total salsa sales
	totalSalsaSales(salsa, NUM_SALSAS);
	// highest salsa sales
	highestSalsaSales(salsa, NUM_SALSAS);
	// lowest salsa sales
	lowestSalsaSales(salsa, NUM_SALSAS);
	system("pause");
	return 0;
} // end main

// functions

//totalSalsaSales function
int totalSalsaSales(Product salsa[], int size)
{
	int totalSales = 0;
	for (int i = 0; i < size; i++)
	{
		totalSales += salsa[i].salsaSales;
	} // end for loop
	std::cout << "Total jars sold: " << totalSales << endl;
	return totalSales;
} // end totalSalsaSales

//highestSalsaSales function
int highestSalsaSales(Product salsa[], int size)
{
	int highestSales = 0;
	string highestSalsa = " ";
	for (int i = 0; i < size; i++)
	{
		if (salsa[i].salsaSales > highestSales)
		{
			highestSales = salsa[i].salsaSales;
			highestSalsa = salsa[i].salsaName;
		} // end if
	} // end for loop
	std::cout << "High seller: " << highestSalsa << " with " << highestSales << " jars sold.\n";
	return highestSales;
} // end highestSalsaSales

//lowestSalsaSales function
int lowestSalsaSales(Product salsa[], int size)
{
	int lowestSales = 100000;
	string lowestSalsa = " ";
	for (int i = 0; i < size; i++)
	{
		if (salsa[i].salsaSales < lowestSales)
		{
			lowestSales = salsa[i].salsaSales;
			lowestSalsa = salsa[i].salsaName;
		} // end if
	} // end for loop
	std::cout << "Low seller: " << lowestSalsa << " with " << lowestSales << " jars sold.\n";
	return lowestSales;
} // end lowestSalsaSales

// displaySalsaSalesReport function
void displaySalsaSalesReport(Product salsa[], int size)
{
	std::cout << "Salsa Sales Report\n\n";
	std::cout << "Name\t\tJars Sold\n\n";
	std::cout << "--------------------------\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << salsa[i].salsaName << "\t\t" << salsa[i].salsaSales << endl;
	} // end for loop
} // end displaySalsaSalesReport
