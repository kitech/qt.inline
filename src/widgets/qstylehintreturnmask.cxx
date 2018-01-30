//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleHintReturnMask is pure virtual: false
// QStyleHintReturnMask has virtual projected: false
//  header block end

//  main block begin

class MyQStyleHintReturnMask : public QStyleHintReturnMask {
public:
  virtual ~MyQStyleHintReturnMask() {}
// void QStyleHintReturnMask()
MyQStyleHintReturnMask() : QStyleHintReturnMask() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:722
// [-2] void QStyleHintReturnMask()
extern "C"
void* C_ZN20QStyleHintReturnMaskC2Ev() {
  return  new QStyleHintReturnMask();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:723
// [-2] void ~QStyleHintReturnMask()
extern "C"
void C_ZN20QStyleHintReturnMaskD2Ev(void *this_) {
  delete (QStyleHintReturnMask*)(this_);
}
//  main block end
