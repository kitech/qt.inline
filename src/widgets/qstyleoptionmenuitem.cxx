//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionMenuItem is pure virtual: false
// QStyleOptionMenuItem has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionMenuItem : public QStyleOptionMenuItem {
public:
  virtual ~MyQStyleOptionMenuItem() {}
// void QStyleOptionMenuItem()
MyQStyleOptionMenuItem() : QStyleOptionMenuItem() {}
// void QStyleOptionMenuItem(const QStyleOptionMenuItem &)
MyQStyleOptionMenuItem(const QStyleOptionMenuItem & other) : QStyleOptionMenuItem(other) {}
// void QStyleOptionMenuItem(int)
MyQStyleOptionMenuItem(int version) : QStyleOptionMenuItem(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:372
// [-2] void QStyleOptionMenuItem()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionMenuItemC2Ev() {
  return  new QStyleOptionMenuItem();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:373
// [-2] void QStyleOptionMenuItem(const QStyleOptionMenuItem &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionMenuItemC2ERKS_(QStyleOptionMenuItem* other) {
  return  new QStyleOptionMenuItem(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionMenuItemD2Ev(void *this_) {
  delete (QStyleOptionMenuItem*)(this_);
}
//  main block end
