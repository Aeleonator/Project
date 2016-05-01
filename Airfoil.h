#pragma once

//This class stores information about each node on the wing after the wing is discretized
class Airfoil
{
public:
	Airfoil(float loc);
	~Airfoil();

private:
	string profile; //name of the airfoil profile at this node. May be different if there is aerodynamic twist
	float location; //locatio of this node from the center of the winf
	float chord = 1; //chord length of this node. For now, this will always be 1
	float alphaGeo; //the geometric angle of attack of the node. May be different from the wing if there is geometric twist
	float alphaInduced; //the angle of attack induced at this node
	float alphaEff; //the effective angle of attack of this node
	float cl; //the lift coefficient at this node
	float gammaOld; //the value of circulation used in step 3 of the algorithm
	float gammaNew; //the circulation calculated in step 6 from lift coefficient
	float d = 0.05; //iteration daming coefficient used in step 7. Should remain constant in most cases

public:
	void setProfile(string name);
	void setLocation(float y);
	void setChord(float c);
	void setAlphaGeo(float alpha);
	void setAlphaInduced(float alpha);
	void setAlphaEff(float alpha);
	void setcl(float cl);
	void setGammaOld(float gamma);
	void setGammaNew(float gamma);
	void setGammaInput(float gamma);
	void setd(float d);

	string getProfile();
	float getLocation();
	float getChord();
	float getAlphaGeo();
	float getAlphaInduced();
	float getAlphaEff();
	float getcl();
	float getGammaOld();
	float getGammaNew();
	float getGammaInput();
	float getd();
};

