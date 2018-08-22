//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTab is pure virtual: false
// QStyleOptionTab has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionTab : public QStyleOptionTab {
public:
  virtual ~MyQStyleOptionTab() {}
// void QStyleOptionTab()
MyQStyleOptionTab() : QStyleOptionTab() {}
// void QStyleOptionTab(const QStyleOptionTab &)
MyQStyleOptionTab(const QStyleOptionTab & other) : QStyleOptionTab(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:285
// [-2] void QStyleOptionTab()
extern "C" Q_DECL_EXPORT
void* C_ZN15QStyleOptionTabC2Ev() {
  return  new QStyleOptionTab();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:286
// [-2] void QStyleOptionTab(const QStyleOptionTab &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QStyleOptionTabC2ERKS_(QStyleOptionTab* other) {
  return  new QStyleOptionTab(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN15QStyleOptionTabD2Ev(void *this_) {
  delete (QStyleOptionTab*)(this_);
}
//  main block end
