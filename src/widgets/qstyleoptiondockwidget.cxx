//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionDockWidget is pure virtual: false
// QStyleOptionDockWidget has virtual projected: false
//  header block end

//  main block begin

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
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionDockWidgetC2Ev() {
  return  new QStyleOptionDockWidget();
}

extern "C" Q_DECL_EXPORT
void C_ZN22QStyleOptionDockWidgetD2Ev(void *this_) {
  delete (QStyleOptionDockWidget*)(this_);
}
//  main block end
