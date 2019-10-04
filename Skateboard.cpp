//
// Created by Samuel Roberti on 10/4/19
//

#include "Skateboard.h"
#include <random>
#include <cmath>

double Skateboard::generateRandomizedMileage()
{
  // Using example code from
  // http://www.cplusplus.com/reference/random/
  std::default_random_engine generator;
  std::uniform_real_distribution<double> dist(min_mileage, max_mileage);
  return dist(generator);
}

Skateboard::Skateboard(string brand, string model)
{
  mileage = generateRandomizedMileage();
  setBrand(brand);
  setModel(model);
}

double Skateboard::mileageEstimate(double time)
{
  std::default_random_engine generator;
  std::uniform_real_distribution<double> dist(1.0, time/3.0);
  if(time > 25 && time <250) return time * mileage + std::floor(dist(generator));
  else return time * mileage;
}

Skateboard::~Skateboard() = default;
