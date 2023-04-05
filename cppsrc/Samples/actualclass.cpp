/*
NAPI-Node.JS Addon Example
Author: Chris Johnson (chrisjohn404)
July 2022
License: GPLv2
*/

#include "actualclass.h"

ActualClass::ActualClass(double value){
    this->value_ = value;
}

double ActualClass::getValue()
{
  return this->value_;
}

double ActualClass::add(double toAdd)
{
  this->value_ += toAdd;
  return this->value_;
}


/* Author(s): Chris Johnson (chrisjohn404) */