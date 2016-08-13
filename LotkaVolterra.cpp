#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

const double a = 1.5;
const double b = 1.0;
const double c = 3.0;
const double d = 1.0;

const double step = 0.01;
const double max_time = 30;

const int n_iterations = max_time/step;

double dxdt(double x, double y){
	return x*(a - b*y);
}

double dydt(double x, double y){
	return -y*(c - d*x);
}

int main(void){
	
	// x -> predators
	// y -> preys
	
	double x0 = 10;
	double y0 = 5;
	
	double x = x0;
	double y = y0;
	
	ofstream  predators_file;	
	ofstream  preys_file;		
	ofstream relationship;    	
	
	string  predators_fileName = "predators.txt";
	string  preys_fileName     = "preys.txt";
	string  relationshipName   = "relationship.txt";
	
	predators_file.open( predators_fileName );
	preys_file.open( preys_fileName );
	relationship.open(relationshipName);
	
	for(double i1 = 0; i1 < n_iterations * step ; i1 += step){
		
		predators_file << i1 << " " << x << endl;
		preys_file     << i1 << " " << y << endl;
		relationship   << x  << " " << y  << endl;
		
		x0 = x;
		y0 = y;
		
		x += step * dxdt(x0,y0);
		y += step * dydt(x0,y0);
	}

	predators_file.close();
	preys_file.close();
	relationship.close();
	
	return 0;
}
