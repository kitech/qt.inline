//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionTabBarBase is pure virtual: false
// QStyleOptionTabBarBase has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:199
// [-2] void QStyleOptionTabBarBase(int)
extern "C"
void* callback_ZN22QStyleOptionTabBarBaseC1Ei = 0;
extern "C" void set_callback_ZN22QStyleOptionTabBarBaseC1Ei(void*cbfn)
{ callback_ZN22QStyleOptionTabBarBaseC1Ei = cbfn; }

class MyQStyleOptionTabBarBase : public QStyleOptionTabBarBase {
public:
  virtual ~MyQStyleOptionTabBarBase() {}
// void QStyleOptionTabBarBase()
MyQStyleOptionTabBarBase() : QStyleOptionTabBarBase() {}
// void QStyleOptionTabBarBase(int)
MyQStyleOptionTabBarBase(int version) : QStyleOptionTabBarBase(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:195
// [-2] void QStyleOptionTabBarBase()
extern "C"
void* C_ZN22QStyleOptionTabBarBaseC2Ev() {
  return  new QStyleOptionTabBarBase();
}
//  main block end
