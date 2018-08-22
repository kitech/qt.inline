//  header block begin
// since 0x040100
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolBar is pure virtual: false
// QStyleOptionToolBar has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionToolBar : public QStyleOptionToolBar {
public:
  virtual ~MyQStyleOptionToolBar() {}
// void QStyleOptionToolBar()
MyQStyleOptionToolBar() : QStyleOptionToolBar() {}
// void QStyleOptionToolBar(const QStyleOptionToolBar &)
MyQStyleOptionToolBar(const QStyleOptionToolBar & other) : QStyleOptionToolBar(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:315
// [-2] void QStyleOptionToolBar()
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionToolBarC2Ev() {
  return  new QStyleOptionToolBar();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:316
// [-2] void QStyleOptionToolBar(const QStyleOptionToolBar &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionToolBarC2ERKS_(QStyleOptionToolBar* other) {
  return  new QStyleOptionToolBar(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN19QStyleOptionToolBarD2Ev(void *this_) {
  delete (QStyleOptionToolBar*)(this_);
}
//  main block end
