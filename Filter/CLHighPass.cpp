/** @file */
#include "CLHighPass.hpp"

/**
 * Constructor for CLHighPass with a start values.
 * <p>
 * Creates a Highpass with a specific values.
 * </p>
 *
 * @param   firstComponent      Value for Capacitor.
 * @param   secondComponent     Value for Inductor.
 */
CLHighPass::CLHighPass(
    double firstComponent,
    double secondComponent)
    : PassFilter(FilterType::HighPass) 
{
    m_firstComponent = std::make_unique<Capacitor>(firstComponent);
    m_secondComponent = std::make_unique<Inductor>(secondComponent);
}

/**
 * Returns the Frequenz of the item.
 * <p>
 * Calculates and returns the Frequenz of the item.
 * </p>
 *
 * @return   Frequenz.
 */
double CLHighPass::Frequency() const 
{
    return 1 / ( 2 * PI * sqrt(m_firstComponent->getValue()
      * m_secondComponent->getValue()));
}

