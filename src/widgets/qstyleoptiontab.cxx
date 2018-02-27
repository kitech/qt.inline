//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTab is pure virtual: false
// QStyleOptionTab has virtual projected: false
//  header block end

//  main block begin

class MyQStyleOptionTab : public QStyleOptionTab {
public:
  virtual ~MyQStyleOptionTab() {}
// void QStyleOptionTab()
MyQStyleOptionTab() : QStyleOptionTab() {}
// void QStyleOptionTab(int)
MyQStyleOptionTab(int version) : QStyleOptionTab(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:285
// [-2] void QStyleOptionTab()
extern "C"
void* C_ZN15QStyleOptionTabC2Ev() {
  return  new QStyleOptionTab();
}

extern "C"
void C_ZN15QStyleOptionTabD2Ev(void *this_) {
  delete (QStyleOptionTab*)(this_);
}
//  main block end
