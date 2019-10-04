//
// Created by Samuel Roberti on 10/4/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
  const double min_mileage = 40;
  const double max_mileage = 100;

  const int numberOfEngines;
  double mileage;

  int generateRandomizedMileage();

public:

  Jet() = delete;
  explicit Jet(string manufacturer, string model,
               string fuelType, int engineCount=1);
  virtual ~Jet();
  virtual double mileageEstimate(double time);

};


#endif 
