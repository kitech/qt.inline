//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionButton is pure virtual: false
// QStyleOptionButton has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionButton : public QStyleOptionButton {
public:
  virtual ~MyQStyleOptionButton() {}
// void QStyleOptionButton()
MyQStyleOptionButton() : QStyleOptionButton() {}
// void QStyleOptionButton(int)
MyQStyleOptionButton(int version) : QStyleOptionButton(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:248
// [-2] void QStyleOptionButton()
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionButtonC2Ev() {
  return  new QStyleOptionButton();
}

extern "C" Q_DECL_EXPORT
void C_ZN18QStyleOptionButtonD2Ev(void *this_) {
  delete (QStyleOptionButton*)(this_);
}
//  main block end
