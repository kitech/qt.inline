//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QStatusTipEvent is pure virtual: false
// QStatusTipEvent has virtual projected: false
//  header block end

//  main block begin

class MyQStatusTipEvent : public QStatusTipEvent {
public:
  virtual ~MyQStatusTipEvent() {}
// void QStatusTipEvent(const class QString &)
MyQStatusTipEvent(const QString & tip) : QStatusTipEvent(tip) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:700
// [-2] void QStatusTipEvent(const class QString &)
extern "C"
void* C_ZN15QStatusTipEventC2ERK7QString(const QString & tip) {
  return  new QStatusTipEvent(tip);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:701
// [-2] void ~QStatusTipEvent()
extern "C"
void C_ZN15QStatusTipEventD2Ev(void *this_) {
  delete (QStatusTipEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:703
// [8] QString tip()
extern "C"
void* C_ZNK15QStatusTipEvent3tipEv(void *this_) {
  auto rv = ((QStatusTipEvent*)this_)->tip();
return new QString(rv);
}
//  main block end
