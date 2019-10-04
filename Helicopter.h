//
// Created by Samuel Roberti on 10/4/19
//

#ifndef DRIVINGSIMULATOR_HELICOPTER_H
#define DRIVINGSIMULATOR_HELICOPTER_H

#include "PoweredVehicle.h"

class Helicopter : public PoweredVehicle {

private:
  const double min_mileage = 10;
  const double max_mileage = 40;

  const int numberOfBlades;
  double mileage;

  int generateRandomizedMileage();

public:

  Helicopter() = delete;
  explicit Helicopter(string manufacturer, string model,
               string fuelType, int bladeCount=2);
  virtual ~Helicopter();
  virtual string toString();
  virtual double mileageEstimate(double time);

};


#endif 
