#pragma once
#include "Airfoil.h"
#include "HelperFunctions.h"

class Wing
{

private: 

	float wingAlpha;
	float wingLength;
	int numOfNodes;
	float nodeLength;

	struct wingSections {
		string profile;
		float geoTwist;
		float start;
		float end;
	};

	vector<wingSections> sections;
	vector<wingSections> wing;
	vector<Airfoil> nodes;
public:
	
	Wing(vector<wingSections> sections);	
	~Wing();


public: void setWingAlpha(float alpha);
public: void setWingLength(float length);
public: void setNumOfNodes(int num);
public: void setNodeLength(float dy);

public: float getWingAlpha();
public: float getWingLength();
public: float getNumOfNodes();
public: float getNodeLength();

public: void discretize(int numOfSections);
private: void mirror();


};

