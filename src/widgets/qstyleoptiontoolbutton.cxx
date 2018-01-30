//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionToolButton is pure virtual: false
// QStyleOptionToolButton has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:583
// [-2] void QStyleOptionToolButton(int)
extern "C"
void* callback_ZN22QStyleOptionToolButtonC1Ei = 0;
extern "C" void set_callback_ZN22QStyleOptionToolButtonC1Ei(void*cbfn)
{ callback_ZN22QStyleOptionToolButtonC1Ei = cbfn; }

class MyQStyleOptionToolButton : public QStyleOptionToolButton {
public:
  virtual ~MyQStyleOptionToolButton() {}
// void QStyleOptionToolButton()
MyQStyleOptionToolButton() : QStyleOptionToolButton() {}
// void QStyleOptionToolButton(int)
MyQStyleOptionToolButton(int version) : QStyleOptionToolButton(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:579
// [-2] void QStyleOptionToolButton()
extern "C"
void* C_ZN22QStyleOptionToolButtonC2Ev() {
  return  new QStyleOptionToolButton();
}
//  main block end
