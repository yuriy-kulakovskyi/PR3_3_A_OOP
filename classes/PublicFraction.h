#pragma once
#include "BaseFraction.h"

class PublicFraction : public BaseFraction {
public:
  PublicFraction() : BaseFraction() {}
  PublicFraction(long wholePart, unsigned short fractionalPart) : BaseFraction(wholePart, fractionalPart) {}
  PublicFraction(const PublicFraction& other) : BaseFraction(other) {}

  PublicFraction& operator=(const PublicFraction& other);

  PublicFraction& operator++();
  PublicFraction operator++(int);
  PublicFraction& operator--();
  PublicFraction operator--(int);

  friend PublicFraction operator+(const PublicFraction& f1, const PublicFraction& f2);
  friend PublicFraction operator*(const PublicFraction& f1, const PublicFraction& f2);

  static PublicFraction toFraction(double x);
};

PublicFraction makePublicFraction(long wholePart, unsigned short fractionalPart);
