//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleHintReturnVariant is pure virtual: false
// QStyleHintReturnVariant has virtual projected: false
//  header block end

//  main block begin

class MyQStyleHintReturnVariant : public QStyleHintReturnVariant {
public:
  virtual ~MyQStyleHintReturnVariant() {}
// void QStyleHintReturnVariant()
MyQStyleHintReturnVariant() : QStyleHintReturnVariant() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:733
// [-2] void QStyleHintReturnVariant()
extern "C" Q_DECL_EXPORT
void* C_ZN23QStyleHintReturnVariantC2Ev() {
  return  new QStyleHintReturnVariant();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:734
// [-2] void ~QStyleHintReturnVariant()
extern "C" Q_DECL_EXPORT
void C_ZN23QStyleHintReturnVariantD2Ev(void *this_) {
  delete (QStyleHintReturnVariant*)(this_);
}
//  main block end
