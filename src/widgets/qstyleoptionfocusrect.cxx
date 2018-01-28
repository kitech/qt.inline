//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionFocusRect is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:123
// [-2] void QStyleOptionFocusRect(int)
extern "C"
void* callback_ZN21QStyleOptionFocusRectC1Ei = 0;
extern "C" void set_callback_ZN21QStyleOptionFocusRectC1Ei(void*cbfn)
{ callback_ZN21QStyleOptionFocusRectC1Ei = cbfn; }

class MyQStyleOptionFocusRect : public QStyleOptionFocusRect {
public:
MyQStyleOptionFocusRect() : QStyleOptionFocusRect() {}
MyQStyleOptionFocusRect(int version) : QStyleOptionFocusRect(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:119
// [-2] void QStyleOptionFocusRect()
extern "C"
void* C_ZN21QStyleOptionFocusRectC1Ev() {
  (MyQStyleOptionFocusRect*)(0);
  return  new MyQStyleOptionFocusRect();
}
//  main block end
