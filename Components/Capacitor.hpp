/** @file */
#ifndef CAPACITOR_HPP
#define CAPACITOR_HPP

#include "Component.hpp"

/**
 * @brief       Class for a Capacitor.
 * @details     This class contains a value and operators for counting them.
 * @author      Maximilian Bachmann <bachmann.maxim-tfe17@it.dhbw-ravensburg.de>
 * @author      Felix Bandle <bandle.felix-tfe17@it.dhbw-ravensburg.de>
 * @author      Florian Vetter <vetter.florian-tfe17@it.dhbw-ravensburg.de>
 */
class Capacitor : public Component 
{
public:
  explicit Capacitor(double value);    //!< Value of the Capacitor.

    friend std::unique_ptr<Capacitor> operator&& (
    std::shared_ptr<Capacitor> const Component1,
    std::shared_ptr<Capacitor> const Component2);

  friend std::unique_ptr<Capacitor> operator|| (
    std::shared_ptr<Capacitor> const Component1,
    std::shared_ptr<Capacitor> const Component2);

  friend bool operator== (
    std::shared_ptr<Capacitor> const Component1,
    std::shared_ptr<Capacitor> const Component2);

  friend bool operator!= (
    std::shared_ptr<Capacitor> const Component1,
    std::shared_ptr<Capacitor> const Component2);

  friend Capacitor operator&& (
    Capacitor const Component1,
    Capacitor const Component2);

  friend Capacitor operator|| (
    Capacitor const Component1,
    Capacitor const Component2);

  friend bool operator== (
    Capacitor const Component1,
    Capacitor const Component2);

  friend bool operator!= (
    Capacitor const Component1,
    Capacitor const Component2);

  friend double operator/ (
    std::shared_ptr<Capacitor> const Component1,
    std::shared_ptr<Capacitor> const Component2);

  friend double operator/ (
    Capacitor const Component1,
    Capacitor const Component2);
};
#endif //CAPACITOR_HPP

