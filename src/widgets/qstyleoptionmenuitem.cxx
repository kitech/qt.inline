//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionMenuItem is pure virtual: false
// QStyleOptionMenuItem has virtual projected: false
//  header block end

//  main block begin
// void* callback_ZN20QStyleOptionMenuItemC1Ei_fnptr = 0;
// extern "C" void set_callback_ZN20QStyleOptionMenuItemC1Ei(void*cbfn)
// { callback_ZN20QStyleOptionMenuItemC1Ei_fnptr = cbfn; }

class MyQStyleOptionMenuItem : public QStyleOptionMenuItem {
public:
  virtual ~MyQStyleOptionMenuItem() {}
// void QStyleOptionMenuItem()
MyQStyleOptionMenuItem() : QStyleOptionMenuItem() {}
// void QStyleOptionMenuItem(int)
MyQStyleOptionMenuItem(int version) : QStyleOptionMenuItem(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:372
// [-2] void QStyleOptionMenuItem()
extern "C"
void* C_ZN20QStyleOptionMenuItemC2Ev() {
  return  new QStyleOptionMenuItem();
}

extern "C"
void C_ZN20QStyleOptionMenuItemD2Ev(void *this_) {
  delete (QStyleOptionMenuItem*)(this_);
}
//  main block end
