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
// void QStyleOptionProgressBar(const QStyleOptionProgressBar &)
MyQStyleOptionProgressBar(const QStyleOptionProgressBar & other) : QStyleOptionProgressBar(other) {}
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

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:343
// [-2] void QStyleOptionProgressBar(const QStyleOptionProgressBar &)
extern "C" Q_DECL_EXPORT
void* C_ZN23QStyleOptionProgressBarC2ERKS_(QStyleOptionProgressBar* other) {
  return  new QStyleOptionProgressBar(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN23QStyleOptionProgressBarD2Ev(void *this_) {
  delete (QStyleOptionProgressBar*)(this_);
}
//  main block end
