#pragma once
#include "Airfoil.h"
#include "HelperFunctions.h"

class Wing
{

private: 

	float wingAlpha; //angle of attack as given by the user
	float wingLength; //the span of the wing, from one wing tip to the other. This is calculated internally, not obtained from user
	int numOfNodes; //The number of nodes the wing is distretized to
	float nodeLength;//the length between two adjacent nodes. It will be assumed constant for this program

	//The sections the wing is comprised of. This is used to construct wings with aero and geo twists. 
	//These sections are not the discretized form of the wing. They are used to store the wing design from the user
	struct wingSections {
		string profile; //airfoil profile
		float geoTwist; //geo twist angle. 0 is no twist, positive means the angle is higher than the rest of the wing.
						//Negative means it's lower
		float start; //The location of the start of this section from the center of the wing
		float end; //The location of the end of this section from the center of the wing
	};

	vector<wingSections> sections; //Vector which stores the various sections that make up the wing on one side, design by the user
	vector<wingSections> wing; //The complete wing, from one wing tip to the other. The mirror() method fills this vector
							   //after the user is done designing the wing
	vector<Airfoil> nodes;	//Vector of all the nodes created after the wing is discretized
public:
	
	Wing();	
	~Wing();


public: void setWingAlpha(float alpha);
public: void setWingLength(float length);
public: void setNumOfNodes(int num);
public: void setNodeLength(float dy);

public: float getWingAlpha();
public: float getWingLength();
public: float getNumOfNodes();
public: float getNodeLength();

//Discretizes the wing into nodes. 
//numOfSections is the number of nodes to create, specified by the user
public: void discretize(int numOfSections);

//The user designs only one side of the wing: from root to tip. This method mirrors that design so
//the wing is created from tip to tip.
private: void mirror();


};

