//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionButton is pure virtual: false
// QStyleOptionButton has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:252
// [-2] void QStyleOptionButton(int)
extern "C"
void* callback_ZN18QStyleOptionButtonC1Ei = 0;
extern "C" void set_callback_ZN18QStyleOptionButtonC1Ei(void*cbfn)
{ callback_ZN18QStyleOptionButtonC1Ei = cbfn; }

class MyQStyleOptionButton : public QStyleOptionButton {
public:
  virtual ~MyQStyleOptionButton() {}
// void QStyleOptionButton()
MyQStyleOptionButton() : QStyleOptionButton() {}
// void QStyleOptionButton(int)
MyQStyleOptionButton(int version) : QStyleOptionButton(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:248
// [-2] void QStyleOptionButton()
extern "C"
void* C_ZN18QStyleOptionButtonC2Ev() {
  return  new QStyleOptionButton();
}
//  main block end
