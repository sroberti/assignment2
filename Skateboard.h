//
// Created by Samuel Roberti on 10/4/19
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H
#include "Vehicle.h"

class Skateboard : public Vehicle {
private:
  const double mileage;

public:
  explicit Skateboard(string brand, string model);

  virtual ~Skateboard();
  virtual double mileageEstimate(double time);
  virtual string toString();
};

#endif
