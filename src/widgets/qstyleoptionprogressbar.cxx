//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionProgressBar is pure virtual: false
// QStyleOptionProgressBar has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionProgressBar : public QStyleOptionProgressBar {
public:
  virtual ~MyQStyleOptionProgressBar() {}
// void QStyleOptionProgressBar()
MyQStyleOptionProgressBar() : QStyleOptionProgressBar() {}
// void QStyleOptionProgressBar(int)
MyQStyleOptionProgressBar(int version) : QStyleOptionProgressBar(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:342
// [-2] void QStyleOptionProgressBar()
extern "C" Q_DECL_EXPORT
void* C_ZN23QStyleOptionProgressBarC2Ev() {
  return  new QStyleOptionProgressBar();
}

extern "C" Q_DECL_EXPORT
void C_ZN23QStyleOptionProgressBarD2Ev(void *this_) {
  delete (QStyleOptionProgressBar*)(this_);
}
//  main block end
