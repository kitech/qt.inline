//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionSizeGrip is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:656
// [-2] void QStyleOptionSizeGrip(int)
extern "C"
void* callback_ZN20QStyleOptionSizeGripC1Ei = 0;
extern "C" void set_callback_ZN20QStyleOptionSizeGripC1Ei(void*cbfn)
{ callback_ZN20QStyleOptionSizeGripC1Ei = cbfn; }

class MyQStyleOptionSizeGrip : public QStyleOptionSizeGrip {
public:
MyQStyleOptionSizeGrip() : QStyleOptionSizeGrip() {}
MyQStyleOptionSizeGrip(int version) : QStyleOptionSizeGrip(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:653
// [-2] void QStyleOptionSizeGrip()
extern "C"
void* C_ZN20QStyleOptionSizeGripC1Ev() {
  (MyQStyleOptionSizeGrip*)(0);
  return  new MyQStyleOptionSizeGrip();
}
//  main block end
