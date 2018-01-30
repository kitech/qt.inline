//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionTab is pure virtual: false
// QStyleOptionTab has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:289
// [-2] void QStyleOptionTab(int)
extern "C"
void* callback_ZN15QStyleOptionTabC1Ei = 0;
extern "C" void set_callback_ZN15QStyleOptionTabC1Ei(void*cbfn)
{ callback_ZN15QStyleOptionTabC1Ei = cbfn; }

class MyQStyleOptionTab : public QStyleOptionTab {
public:
  virtual ~MyQStyleOptionTab() {}
// void QStyleOptionTab()
MyQStyleOptionTab() : QStyleOptionTab() {}
// void QStyleOptionTab(int)
MyQStyleOptionTab(int version) : QStyleOptionTab(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:285
// [-2] void QStyleOptionTab()
extern "C"
void* C_ZN15QStyleOptionTabC2Ev() {
  return  new QStyleOptionTab();
}
//  main block end
