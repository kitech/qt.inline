//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionSpinBox is pure virtual: false
// QStyleOptionSpinBox has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:556
// [-2] void QStyleOptionSpinBox(int)
extern "C"
void* callback_ZN19QStyleOptionSpinBoxC1Ei = 0;
extern "C" void set_callback_ZN19QStyleOptionSpinBoxC1Ei(void*cbfn)
{ callback_ZN19QStyleOptionSpinBoxC1Ei = cbfn; }

class MyQStyleOptionSpinBox : public QStyleOptionSpinBox {
public:
  virtual ~MyQStyleOptionSpinBox() {}
// void QStyleOptionSpinBox()
MyQStyleOptionSpinBox() : QStyleOptionSpinBox() {}
// void QStyleOptionSpinBox(int)
MyQStyleOptionSpinBox(int version) : QStyleOptionSpinBox(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:552
// [-2] void QStyleOptionSpinBox()
extern "C"
void* C_ZN19QStyleOptionSpinBoxC2Ev() {
  return  new QStyleOptionSpinBox();
}
//  main block end
