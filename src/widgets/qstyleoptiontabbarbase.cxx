//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTabBarBase is pure virtual: false
// QStyleOptionTabBarBase has virtual projected: false
//  header block end

//  main block begin
// void* callback_ZN22QStyleOptionTabBarBaseC1Ei_fnptr = 0;
// extern "C" void set_callback_ZN22QStyleOptionTabBarBaseC1Ei(void*cbfn)
// { callback_ZN22QStyleOptionTabBarBaseC1Ei_fnptr = cbfn; }

class MyQStyleOptionTabBarBase : public QStyleOptionTabBarBase {
public:
  virtual ~MyQStyleOptionTabBarBase() {}
// void QStyleOptionTabBarBase()
MyQStyleOptionTabBarBase() : QStyleOptionTabBarBase() {}
// void QStyleOptionTabBarBase(int)
MyQStyleOptionTabBarBase(int version) : QStyleOptionTabBarBase(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:195
// [-2] void QStyleOptionTabBarBase()
extern "C"
void* C_ZN22QStyleOptionTabBarBaseC2Ev() {
  return  new QStyleOptionTabBarBase();
}

extern "C"
void C_ZN22QStyleOptionTabBarBaseD2Ev(void *this_) {
  delete (QStyleOptionTabBarBase*)(this_);
}
//  main block end
