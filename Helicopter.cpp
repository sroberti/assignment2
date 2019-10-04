//
// Created by Samuel Roberti on 10/4/19.
//
#include "Helicopter.h"
#include <random>
#include <cmath>


int Helicopter::generateRandomizedMileage()
{
  // Using example code from
  // http://www.cplusplus.com/reference/random/
  std::default_random_engine generator;
  std::uniform_int_distribution<int> dist(min_mileage, max_mileage);
  return dist(generator);
}

Helicopter::Helicopter(string manufacturer, string model,
         string fuelType, int bladeCount)
  : numberOfBlades{bladeCount}
{
  setBrand(manufacturer);
  setModel(model);
  setFuelType(fuelType);
}

Helicopter::~Helicopter() = default;

double Helicopter::mileageEstimate(double time)
{
  if(numberOfBlades > 2)
    return std::floor((1 + (numberOfBlades * 0.03)) * mileage * time);
  else return mileage * time;
}



