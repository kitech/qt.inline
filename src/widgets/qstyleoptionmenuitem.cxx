//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionMenuItem is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:376
// [-2] void QStyleOptionMenuItem(int)
extern "C"
void* callback_ZN20QStyleOptionMenuItemC1Ei = 0;
extern "C" void set_callback_ZN20QStyleOptionMenuItemC1Ei(void*cbfn)
{ callback_ZN20QStyleOptionMenuItemC1Ei = cbfn; }

class MyQStyleOptionMenuItem : public QStyleOptionMenuItem {
public:
MyQStyleOptionMenuItem() : QStyleOptionMenuItem() {}
MyQStyleOptionMenuItem(int version) : QStyleOptionMenuItem(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:372
// [-2] void QStyleOptionMenuItem()
extern "C"
void* C_ZN20QStyleOptionMenuItemC1Ev() {
  (MyQStyleOptionMenuItem*)(0);
  return  new MyQStyleOptionMenuItem();
}
//  main block end
