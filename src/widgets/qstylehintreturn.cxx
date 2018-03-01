//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleHintReturn is pure virtual: false
// QStyleHintReturn has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleHintReturn : public QStyleHintReturn {
public:
  virtual ~MyQStyleHintReturn() {}
// void QStyleHintReturn(int, int)
MyQStyleHintReturn(int version, int type_) : QStyleHintReturn(version, type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:710
// [-2] void QStyleHintReturn(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStyleHintReturnC2Eii(int version, int type_) {
  return  new QStyleHintReturn(version, type_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:711
// [-2] void ~QStyleHintReturn()
extern "C" Q_DECL_EXPORT
void C_ZN16QStyleHintReturnD2Ev(void *this_) {
  delete (QStyleHintReturn*)(this_);
}
//  main block end
