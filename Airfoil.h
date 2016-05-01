#pragma once
class Airfoil
{
public:
	Airfoil(float loc);
	~Airfoil();

private:
	string profile;
	float location;
	float chord;
	float alphaGeo;
	float alphaInduced;
	float alphaEff;
	float cl;
	float gammaOld;
	float gammaNew;
	float gammaInput;
	float d = 0.05;

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

