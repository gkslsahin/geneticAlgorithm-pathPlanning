#include <list>
#include<iostream>
#include<math.h>


#pragma once
using namespace std;
class myRobot
{
private:
	//Robotun o anki bulundu�u noktalar� belirtmek i�in:
	int coordinateX;
	int coordinateY;
public:
	myRobot();
	~myRobot();

	// X1, X2, X3, X4, X5, X6, X7, X8 robotun 1 ad�mda gidebilece�i 8 adet y�n� belirtir.
	void movX1();//kuzeydo�u
	void movX2();//kuzey
	void movX3();//do�u
	void movX4();//g�neydo�u
	void movX5();//g�ney
	void movX6();//g�neybat�
	void movX7();//bat�
	void movX8();//kuzeybat�

				 //Getters and Setters
	int getCoordinateX();
	void setCoordinateX(int _coordinateY);
	int getCoordinateY();
	void setCoordinateY(int _coordinateY);

	bool tryThePath(bool** myGrid,list<int> path);
	double calculateFitnessValueOfPath(bool** myGrid, list<int> path);

	void printMatrix2D(bool** myGrid);
    string calculateTruePath(bool** myGrid, list<int> path);

};
