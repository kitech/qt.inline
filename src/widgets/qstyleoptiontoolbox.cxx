//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolBox is pure virtual: false
// QStyleOptionToolBox has virtual projected: false
//  header block end

//  main block begin

class MyQStyleOptionToolBox : public QStyleOptionToolBox {
public:
  virtual ~MyQStyleOptionToolBox() {}
// void QStyleOptionToolBox()
MyQStyleOptionToolBox() : QStyleOptionToolBox() {}
// void QStyleOptionToolBox(int)
MyQStyleOptionToolBox(int version) : QStyleOptionToolBox(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:472
// [-2] void QStyleOptionToolBox()
extern "C"
void* C_ZN19QStyleOptionToolBoxC2Ev() {
  return  new QStyleOptionToolBox();
}

extern "C"
void C_ZN19QStyleOptionToolBoxD2Ev(void *this_) {
  delete (QStyleOptionToolBox*)(this_);
}
//  main block end
