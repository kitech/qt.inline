//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSpinBox is pure virtual: false
// QStyleOptionSpinBox has virtual projected: false
//  header block end

//  main block begin
// void* callback_ZN19QStyleOptionSpinBoxC1Ei_fnptr = 0;
// extern "C" void set_callback_ZN19QStyleOptionSpinBoxC1Ei(void*cbfn)
// { callback_ZN19QStyleOptionSpinBoxC1Ei_fnptr = cbfn; }

class MyQStyleOptionSpinBox : public QStyleOptionSpinBox {
public:
  virtual ~MyQStyleOptionSpinBox() {}
// void QStyleOptionSpinBox()
MyQStyleOptionSpinBox() : QStyleOptionSpinBox() {}
// void QStyleOptionSpinBox(int)
MyQStyleOptionSpinBox(int version) : QStyleOptionSpinBox(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:552
// [-2] void QStyleOptionSpinBox()
extern "C"
void* C_ZN19QStyleOptionSpinBoxC2Ev() {
  return  new QStyleOptionSpinBox();
}

extern "C"
void C_ZN19QStyleOptionSpinBoxD2Ev(void *this_) {
  delete (QStyleOptionSpinBox*)(this_);
}
//  main block end
