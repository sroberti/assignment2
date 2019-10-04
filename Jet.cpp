//
// Created by Samuel Roberti on 10/4/19.
//
#include "Jet.h"
#include <random>
#include <cmath>

// Define constants
#define MILEAGE_MIN 40
#define MILEAGE_MAX 100

int Jet::generateRandomizedMileage()
{
  // Using example code from
  // http://www.cplusplus.com/reference/random/
  std::default_random_engine generator;
  std::uniform_int_distribution<int> dist(MILEAGE_MIN, MILEAGE_MAX);
  return dist(generator);
}

Jet::Jet(string manufacturer, string model,
         string fuelType, int engineCount)
  : numberOfEngines{engineCount}
{
  setBrand(manufacturer);
  setModel(model);
  setFuelType(fuelType);
}

Jet::~Jet() = default;

double Jet::mileageEstimate(double time)
{
  if(fuelType=="Rocket" && numberOfEngines > 2)
    return std::floor((1 + (numberOfEngines * 0.055)) * mileage * time);
  else return mileage * time;
}



