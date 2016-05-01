#include "Airfoil.h"
#include <string>
#include <iostream>

using namespace std;

Airfoil::Airfoil(float loc): location(loc)
{
}


Airfoil::~Airfoil()
{
}

void Airfoil::setProfile(string name)
{
	profile = name;
}

void Airfoil::setLocation(float y)
{
	location = y;
}

void Airfoil::setChord(float c)
{
	chord = c;
}

void Airfoil::setAlphaGeo(float alpha)
{
	alphaGeo = alpha;
}

void Airfoil::setAlphaInduced(float alpha)
{
	alphaInduced = alpha;
}

void Airfoil::setAlphaEff(float alpha)
{
	alphaEff = alpha;
}

void Airfoil::setcl(float cl)
{
	Airfoil::cl = cl;
}

void Airfoil::setGammaOld(float gamma)
{
	gammaOld = gamma;
}

void Airfoil::setGammaNew(float gamma)
{
	gammaNew = gamma;
}

void Airfoil::setGammaInput(float gamma)
{
	gammaInput = gamma;
}

void Airfoil::setd(float d)
{
	Airfoil::d = d;
}

string Airfoil::getProfile()
{
	return profile;
}

float Airfoil::getLocation()
{
	return location;
}

float Airfoil::getChord()
{
	return chord;
}

float Airfoil::getAlphaGeo()
{
	return alphaGeo;
}

float Airfoil::getAlphaInduced()
{
	return alphaInduced;
}

float Airfoil::getAlphaEff()
{
	return  alphaEff;
}

float Airfoil::getcl()
{
	return cl;
}

float Airfoil::getGammaOld()
{
	return gammaOld;
}

float Airfoil::getGammaNew()
{
	return gammaNew;
}

float Airfoil::getGammaInput()
{
	return gammaInput;
}

float Airfoil::getd()
{
	return d;
}

