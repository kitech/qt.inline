//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolButton is pure virtual: false
// QStyleOptionToolButton has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionToolButton : public QStyleOptionToolButton {
public:
  virtual ~MyQStyleOptionToolButton() {}
// void QStyleOptionToolButton()
MyQStyleOptionToolButton() : QStyleOptionToolButton() {}
// void QStyleOptionToolButton(int)
MyQStyleOptionToolButton(int version) : QStyleOptionToolButton(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:579
// [-2] void QStyleOptionToolButton()
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionToolButtonC2Ev() {
  return  new QStyleOptionToolButton();
}

extern "C" Q_DECL_EXPORT
void C_ZN22QStyleOptionToolButtonD2Ev(void *this_) {
  delete (QStyleOptionToolButton*)(this_);
}
//  main block end
