//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QStatusTipEvent is pure virtual: false
// QStatusTipEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStatusTipEvent : public QStatusTipEvent {
public:
  virtual ~MyQStatusTipEvent() {}
// void QStatusTipEvent(const QString &)
MyQStatusTipEvent(const QString & tip) : QStatusTipEvent(tip) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:700
// [-2] void QStatusTipEvent(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QStatusTipEventC2ERK7QString(QString* tip) {
  return  new QStatusTipEvent(*tip);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:701
// [-2] void ~QStatusTipEvent()
extern "C" Q_DECL_EXPORT
void C_ZN15QStatusTipEventD2Ev(void *this_) {
  delete (QStatusTipEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:703
// [8] QString tip()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QStatusTipEvent3tipEv(void *this_) {
  auto rv = ((QStatusTipEvent*)this_)->tip();
return new QString(rv);
}

//  main block end
