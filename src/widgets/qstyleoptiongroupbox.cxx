//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionGroupBox is pure virtual: false
// QStyleOptionGroupBox has virtual projected: false
//  header block end

//  main block begin

class MyQStyleOptionGroupBox : public QStyleOptionGroupBox {
public:
  virtual ~MyQStyleOptionGroupBox() {}
// void QStyleOptionGroupBox()
MyQStyleOptionGroupBox() : QStyleOptionGroupBox() {}
// void QStyleOptionGroupBox(int)
MyQStyleOptionGroupBox(int version) : QStyleOptionGroupBox(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:639
// [-2] void QStyleOptionGroupBox()
extern "C"
void* C_ZN20QStyleOptionGroupBoxC2Ev() {
  return  new QStyleOptionGroupBox();
}

extern "C"
void C_ZN20QStyleOptionGroupBoxD2Ev(void *this_) {
  delete (QStyleOptionGroupBox*)(this_);
}
//  main block end
