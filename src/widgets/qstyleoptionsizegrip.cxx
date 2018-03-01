//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSizeGrip is pure virtual: false
// QStyleOptionSizeGrip has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionSizeGrip : public QStyleOptionSizeGrip {
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
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionSizeGripC2Ev() {
  return  new QStyleOptionSizeGrip();
}

extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionSizeGripD2Ev(void *this_) {
  delete (QStyleOptionSizeGrip*)(this_);
}
//  main block end
