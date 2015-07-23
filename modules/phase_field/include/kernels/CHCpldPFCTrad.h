#ifndef CHCPLDPFCTRAD_H
#define CHCPLDPFCTRAD_H

#include "CHSplitVar.h"

//Forward Declarations
class CHCpldPFCTrad;

template<>
InputParameters validParams<CHCpldPFCTrad>();

class CHCpldPFCTrad : public CHSplitVar
{
public:
  CHCpldPFCTrad(const InputParameters & parameters);
  CHCpldPFCTrad(const std::string & deprecated_name, InputParameters parameters); // DEPRECATED CONSTRUCTOR

protected:
  virtual RealGradient precomputeQpResidual();
  virtual Real computeQpOffDiagJacobian(unsigned int jvar);

private:
  const MaterialProperty<Real> & _coeff;
};

#endif //CHCPLDPFCTRAD_H
