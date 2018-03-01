//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTabBarBase is pure virtual: false
// QStyleOptionTabBarBase has virtual projected: false
//  header block end

//  main block begin

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
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionTabBarBaseC2Ev() {
  return  new QStyleOptionTabBarBase();
}

extern "C" Q_DECL_EXPORT
void C_ZN22QStyleOptionTabBarBaseD2Ev(void *this_) {
  delete (QStyleOptionTabBarBase*)(this_);
}
//  main block end
