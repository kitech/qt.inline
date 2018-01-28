//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleHintReturnVariant is pure virtual: false
//  header block end

//  main block begin

class MyQStyleHintReturnVariant : public QStyleHintReturnVariant {
public:
MyQStyleHintReturnVariant() : QStyleHintReturnVariant() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:733
// [-2] void QStyleHintReturnVariant()
extern "C"
void* C_ZN23QStyleHintReturnVariantC1Ev() {
  (MyQStyleHintReturnVariant*)(0);
  return  new MyQStyleHintReturnVariant();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:734
// [-2] void ~QStyleHintReturnVariant()
extern "C"
void C_ZN23QStyleHintReturnVariantD1Ev(void *this_) {
  delete (QStyleHintReturnVariant*)(this_);
}
//  main block end
