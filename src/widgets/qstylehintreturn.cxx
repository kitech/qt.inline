//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleHintReturn is pure virtual: false
//  header block end

//  main block begin

class MyQStyleHintReturn : public QStyleHintReturn {
public:
MyQStyleHintReturn(int version, int type) : QStyleHintReturn(version, type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:710
// [-2] void QStyleHintReturn(int, int)
extern "C"
void* C_ZN16QStyleHintReturnC1Eii(int version, int type) {
  (MyQStyleHintReturn*)(0);
  return  new MyQStyleHintReturn(version, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:711
// [-2] void ~QStyleHintReturn()
extern "C"
void C_ZN16QStyleHintReturnD1Ev(void *this_) {
  delete (QStyleHintReturn*)(this_);
}
//  main block end
