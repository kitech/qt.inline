//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

// QChildEvent is pure virtual: false
//  header block end

//  main block begin

class MyQChildEvent : public QChildEvent {
public:
MyQChildEvent(QEvent::Type type, QObject * child) : QChildEvent(type, child) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:352
// [-2] void QChildEvent(enum QEvent::Type, class QObject *)
extern "C"
void* C_ZN11QChildEventC1EN6QEvent4TypeEP7QObject(QEvent::Type type, QObject * child) {
  (MyQChildEvent*)(0);
  return  new MyQChildEvent(type, child);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:353
// [-2] void ~QChildEvent()
extern "C"
void C_ZN11QChildEventD1Ev(void *this_) {
  delete (QChildEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:354
// [8] QObject * child()
extern "C"
void* C_ZNK11QChildEvent5childEv(void *this_) {
  return (void*)((QChildEvent*)this_)->child();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:355
// [1] bool added()
extern "C"
bool C_ZNK11QChildEvent5addedEv(void *this_) {
  return (bool)((QChildEvent*)this_)->added();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:356
// [1] bool polished()
extern "C"
bool C_ZNK11QChildEvent8polishedEv(void *this_) {
  return (bool)((QChildEvent*)this_)->polished();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:357
// [1] bool removed()
extern "C"
bool C_ZNK11QChildEvent7removedEv(void *this_) {
  return (bool)((QChildEvent*)this_)->removed();
}
//  main block end
