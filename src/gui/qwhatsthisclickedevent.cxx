//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWhatsThisClickedEvent is pure virtual: false
// QWhatsThisClickedEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWhatsThisClickedEvent : public QWhatsThisClickedEvent {
public:
  virtual ~MyQWhatsThisClickedEvent() {}
// void QWhatsThisClickedEvent(const QString &)
MyQWhatsThisClickedEvent(const QString & href) : QWhatsThisClickedEvent(href) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:713
// [-2] void QWhatsThisClickedEvent(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN22QWhatsThisClickedEventC2ERK7QString(QString* href) {
  return  new QWhatsThisClickedEvent(*href);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:714
// [-2] void ~QWhatsThisClickedEvent()
extern "C" Q_DECL_EXPORT
void C_ZN22QWhatsThisClickedEventD2Ev(void *this_) {
  delete (QWhatsThisClickedEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:716
// [8] QString href()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QWhatsThisClickedEvent4hrefEv(void *this_) {
  auto rv = ((QWhatsThisClickedEvent*)this_)->href();
return new QString(rv);
}

//  main block end
