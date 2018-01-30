//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionGroupBox is pure virtual: false
// QStyleOptionGroupBox has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:642
// [-2] void QStyleOptionGroupBox(int)
extern "C"
void* callback_ZN20QStyleOptionGroupBoxC1Ei = 0;
extern "C" void set_callback_ZN20QStyleOptionGroupBoxC1Ei(void*cbfn)
{ callback_ZN20QStyleOptionGroupBoxC1Ei = cbfn; }

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
//  main block end
