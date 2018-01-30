//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionDockWidget is pure virtual: false
// QStyleOptionDockWidget has virtual projected: false
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
  virtual ~MyQStyleOptionDockWidget() {}
// void QStyleOptionDockWidget()
MyQStyleOptionDockWidget() : QStyleOptionDockWidget() {}
// void QStyleOptionDockWidget(int)
MyQStyleOptionDockWidget(int version) : QStyleOptionDockWidget(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:391
// [-2] void QStyleOptionDockWidget()
extern "C"
void* C_ZN22QStyleOptionDockWidgetC2Ev() {
  return  new QStyleOptionDockWidget();
}
//  main block end
