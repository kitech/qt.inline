//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

// QEvent is pure virtual: false
//  header block end

//  main block begin

class MyQEvent : public QEvent {
public:
MyQEvent(QEvent::Type type) : QEvent(type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:297
// [-2] void QEvent(enum QEvent::Type)
extern "C"
void* C_ZN6QEventC1ENS_4TypeE(QEvent::Type type) {
  (MyQEvent*)(0);
  return  new MyQEvent(type);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:299
// [-2] void ~QEvent()
extern "C"
void C_ZN6QEventD1Ev(void *this_) {
  delete (QEvent*)(this_);
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
