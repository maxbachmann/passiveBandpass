#include "LowPass.hpp"

#ifndef LRLOWPASS_HPP
#define LRLOWPASS_HPP

class LRLowPass: public LowPass {
public:
  double Frequency() const override {
      return m_secondComponent->returnValue() / ( 2 * PI * m_firstComponent->returnValue() );
  }

  LRLowPass(double firstComponent, double secondComponent) {
      m_firstComponent = std::make_unique<Inductor>(firstComponent);
      m_secondComponent = std::make_unique<Resistor>(secondComponent);
  }
};
#endif //LRLOWPASS_HPP