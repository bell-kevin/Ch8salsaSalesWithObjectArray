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
void displaySales(Product salsa[], int size);

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
	//display sales report function
	displaySales(salsa, NUM_SALSAS);
} // end main

// function definitions
void displaySalesReport(Product salsa[])
{
	//display sales report
	std::cout << "Sales Report \n";
	std::cout << "Name\t\tSales\n";
	std::cout << "--------------------------\n";
	for (int i = 0; i < NUM_SALSAS; i++)
	{
		std::cout << salsa[i].salsaName << "\t\t" << salsa[i].salsaSales << "\n";
	} // end for loop
} // end displaySalesReport


