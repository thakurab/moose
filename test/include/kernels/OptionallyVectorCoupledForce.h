//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#pragma once

#include "Kernel.h"

// Forward Declaration
class OptionallyVectorCoupledForce;

template <>
InputParameters validParams<OptionallyVectorCoupledForce>();

/**
 * Simple class for testing multiple optionally coupled variable values
 */
class OptionallyVectorCoupledForce : public Kernel
{
public:
  OptionallyVectorCoupledForce(const InputParameters & parameters);

protected:
  virtual Real computeQpResidual();

  virtual Real computeQpJacobian();

private:
  std::vector<unsigned int> _v_var;
  std::vector<const VariableValue *> _v;
};

