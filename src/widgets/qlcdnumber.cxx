// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qlcdnumber.h
// dst-file: /src/widgets/qlcdnumber.cxx
//

// header block begin =>
#include <qlcdnumber.h>

extern "C" {

// ~QLCDNumber()
void dedtor_ZN10QLCDNumberD0Ev(QLCDNumber* that)
{
  QLCDNumber* rthis = (QLCDNumber*)that;
  delete rthis;
}

// QLCDNumber(uint, class QWidget *)
QLCDNumber* dector_ZN10QLCDNumberC1EjP7QWidget(unsigned int numDigits, QWidget * parent)
{
  // static_assert(sizeof(QLCDNumber) == 32, "tyszerr");
  QLCDNumber* rthis = new QLCDNumber(numDigits, parent);
  return rthis;
}

// QLCDNumber(class QWidget *)
QLCDNumber* dector_ZN10QLCDNumberC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QLCDNumber) == 32, "tyszerr");
  QLCDNumber* rthis = new QLCDNumber(parent);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

