//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleHintReturnMask is pure virtual: false
//  header block end

//  main block begin

class MyQStyleHintReturnMask : public QStyleHintReturnMask {
public:
MyQStyleHintReturnMask() : QStyleHintReturnMask() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:722
// [-2] void QStyleHintReturnMask()
extern "C"
void* C_ZN20QStyleHintReturnMaskC1Ev() {
  (MyQStyleHintReturnMask*)(0);
  return  new MyQStyleHintReturnMask();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:723
// [-2] void ~QStyleHintReturnMask()
extern "C"
void C_ZN20QStyleHintReturnMaskD1Ev(void *this_) {
  delete (QStyleHintReturnMask*)(this_);
}
//  main block end
