#include "Wing.h"
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/************************************************************************************************
	
	Constructor and Destructor

************************************************************************************************/
Wing::Wing()
{	 
}

Wing::~Wing()
{
}

/************************************************************************************************

	Setters and Getters

************************************************************************************************/
void Wing::setWingAlpha(float alpha) {
	wingAlpha = alpha;
}

void Wing::setWingLength(float length)
{
	wingLength = length;
}

void Wing::setNumOfNodes(int num)
{
	numOfNodes = num;
}

void Wing::setNodeLength(float dy)
{
	nodeLength = dy;
}

float Wing::getWingAlpha()
{
	return wingAlpha;
}

float Wing::getWingLength()
{
	wingLength = 0;
	for (auto i : wing)
		wingLength += (i.end - i.start);
	return wingLength;
}

float Wing::getNumOfNodes()
{
	return numOfNodes;
}

float Wing::getNodeLength()
{
	return nodeLength;
}

/************************************************************************************************

	

************************************************************************************************/


void Wing::discretize(int num){
	numOfNodes = num;
	nodeLength = getWingLength() / (numOfNodes-1);

	for (int i = 0; i < numOfNodes; i++) {
		Airfoil tempAirfoil = Airfoil(-wingLength / 2 + i*nodeLength);
		nodes.push_back(tempAirfoil);
		for (auto temp : wing) {
			if (isBetween(tempAirfoil.getLocation(), temp.start, temp.end)) {
				tempAirfoil.setProfile(temp.profile);
				tempAirfoil.setAlphaGeo(wingAlpha + temp.geoTwist);				
			}
		}
	}

}

void Wing::mirror()
{
	vector<wingSections> temp = sections;
	for (auto i : temp) {
		i.start = -i.start;
		i.end = -i.end;
	}
	reverse(temp.begin(), temp.end());
	
	wing.insert(begin(wing), begin(temp), end(temp));
	wing.insert(end(wing), begin(sections), end(sections));
}



