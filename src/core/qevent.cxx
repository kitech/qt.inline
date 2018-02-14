//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QEvent is pure virtual: false
// QEvent has virtual projected: false
//  header block end

//  main block begin

class MyQEvent : public QEvent {
public:
  virtual ~MyQEvent() {}
// void QEvent(enum QEvent::Type)
MyQEvent(QEvent::Type type_) : QEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:297
// [-2] void QEvent(enum QEvent::Type)
extern "C"
void* C_ZN6QEventC2ENS_4TypeE(QEvent::Type type_) {
  return  new QEvent(type_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:299
// [-2] void ~QEvent()
extern "C"
void C_ZN6QEventD2Ev(void *this_) {
  delete (QEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:300
// [24] QEvent & operator=(const class QEvent &)
extern "C"
void* C_ZN6QEventaSERKS_(void *this_, QEvent* other) {
  auto& rv = ((QEvent*)this_)->operator=(*other);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:301
// [4] QEvent::Type type()
extern "C"
QEvent::Type C_ZNK6QEvent4typeEv(void *this_) {
  return (QEvent::Type)((QEvent*)this_)->type();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:302
// [1] bool spontaneous()
extern "C"
bool C_ZNK6QEvent11spontaneousEv(void *this_) {
  return (bool)((QEvent*)this_)->spontaneous();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:304
// [-2] void setAccepted(_Bool)
extern "C"
void C_ZN6QEvent11setAcceptedEb(void *this_, bool accepted) {
  ((QEvent*)this_)->setAccepted(accepted);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:305
// [1] bool isAccepted()
extern "C"
bool C_ZNK6QEvent10isAcceptedEv(void *this_) {
  return (bool)((QEvent*)this_)->isAccepted();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:307
// [-2] void accept()
extern "C"
void C_ZN6QEvent6acceptEv(void *this_) {
  ((QEvent*)this_)->accept();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:308
// [-2] void ignore()
extern "C"
void C_ZN6QEvent6ignoreEv(void *this_) {
  ((QEvent*)this_)->ignore();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:310
// [4] int registerEventType(int)
extern "C"
int C_ZN6QEvent17registerEventTypeEi(int hint) {
  return (int)QEvent::registerEventType(hint);
}
//  main block end
