//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComplex is pure virtual: false
// QStyleOptionComplex has virtual projected: false
//  header block end

//  main block begin

class MyQStyleOptionComplex : public QStyleOptionComplex {
public:
  virtual ~MyQStyleOptionComplex() {}
// void QStyleOptionComplex(int, int)
MyQStyleOptionComplex(int version, int type_) : QStyleOptionComplex(version, type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:509
// [-2] void QStyleOptionComplex(int, int)
extern "C"
void* C_ZN19QStyleOptionComplexC2Eii(int version, int type_) {
  return  new QStyleOptionComplex(version, type_);
}

extern "C"
void C_ZN19QStyleOptionComplexD2Ev(void *this_) {
  delete (QStyleOptionComplex*)(this_);
}
//  main block end
