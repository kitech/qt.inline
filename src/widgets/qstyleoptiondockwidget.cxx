//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionDockWidget is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:395
// [-2] void QStyleOptionDockWidget(int)
extern "C"
void* callback_ZN22QStyleOptionDockWidgetC1Ei = 0;
extern "C" void set_callback_ZN22QStyleOptionDockWidgetC1Ei(void*cbfn)
{ callback_ZN22QStyleOptionDockWidgetC1Ei = cbfn; }

class MyQStyleOptionDockWidget : public QStyleOptionDockWidget {
public:
MyQStyleOptionDockWidget() : QStyleOptionDockWidget() {}
MyQStyleOptionDockWidget(int version) : QStyleOptionDockWidget(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:391
// [-2] void QStyleOptionDockWidget()
extern "C"
void* C_ZN22QStyleOptionDockWidgetC1Ev() {
  (MyQStyleOptionDockWidget*)(0);
  return  new MyQStyleOptionDockWidget();
}
//  main block end
