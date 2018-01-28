//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QWhatsThisClickedEvent is pure virtual: false
//  header block end

//  main block begin

class MyQWhatsThisClickedEvent : public QWhatsThisClickedEvent {
public:
MyQWhatsThisClickedEvent(const QString & href) : QWhatsThisClickedEvent(href) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:713
// [-2] void QWhatsThisClickedEvent(const class QString &)
extern "C"
void* C_ZN22QWhatsThisClickedEventC1ERK7QString(const QString & href) {
  (MyQWhatsThisClickedEvent*)(0);
  return  new MyQWhatsThisClickedEvent(href);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:714
// [-2] void ~QWhatsThisClickedEvent()
extern "C"
void C_ZN22QWhatsThisClickedEventD1Ev(void *this_) {
  delete (QWhatsThisClickedEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:716
// [8] QString href()
extern "C"
void* C_ZNK22QWhatsThisClickedEvent4hrefEv(void *this_) {
  auto rv = ((QWhatsThisClickedEvent*)this_)->href();
return new QString(rv);
}
//  main block end
