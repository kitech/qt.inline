//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionComboBox is pure virtual: false
// QStyleOptionComboBox has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:605
// [-2] void QStyleOptionComboBox(int)
extern "C"
void* callback_ZN20QStyleOptionComboBoxC1Ei = 0;
extern "C" void set_callback_ZN20QStyleOptionComboBoxC1Ei(void*cbfn)
{ callback_ZN20QStyleOptionComboBoxC1Ei = cbfn; }

class MyQStyleOptionComboBox : public QStyleOptionComboBox {
public:
  virtual ~MyQStyleOptionComboBox() {}
// void QStyleOptionComboBox()
MyQStyleOptionComboBox() : QStyleOptionComboBox() {}
// void QStyleOptionComboBox(int)
MyQStyleOptionComboBox(int version) : QStyleOptionComboBox(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:601
// [-2] void QStyleOptionComboBox()
extern "C"
void* C_ZN20QStyleOptionComboBoxC2Ev() {
  return  new QStyleOptionComboBox();
}
//  main block end
