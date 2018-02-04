//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSizeGrip is pure virtual: false
// QStyleOptionSizeGrip has virtual projected: false
//  header block end

//  main block begin

class MyQStyleOptionSizeGrip : public QStyleOptionSizeGrip {
public:
  virtual ~MyQStyleOptionSizeGrip() {}
// void QStyleOptionSizeGrip()
MyQStyleOptionSizeGrip() : QStyleOptionSizeGrip() {}
// void QStyleOptionSizeGrip(int)
MyQStyleOptionSizeGrip(int version) : QStyleOptionSizeGrip(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:653
// [-2] void QStyleOptionSizeGrip()
extern "C"
void* C_ZN20QStyleOptionSizeGripC2Ev() {
  return  new QStyleOptionSizeGrip();
}

extern "C"
void C_ZN20QStyleOptionSizeGripD2Ev(void *this_) {
  delete (QStyleOptionSizeGrip*)(this_);
}
//  main block end
