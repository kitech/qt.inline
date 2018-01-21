//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qcoreevent.h:350
// void QChildEvent(enum QEvent::Type, class QObject *)
extern "C"
void* C_ZN11QChildEventC1EN6QEvent4TypeEP7QObject(QEvent::Type type, QObject * child) {
  return new QChildEvent(type, child);
}
// virtual
// /usr/include/qt/QtCore/qcoreevent.h:351
// void ~QChildEvent()
extern "C"
void C_ZN11QChildEventD1Ev(void *this_) {
  delete (QChildEvent*)(this_);
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:352
// QObject * child()
extern "C"
void C_ZNK11QChildEvent5childEv(void *this_) {
  /*return*/ ((QChildEvent*)this_)->child();
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:353
// bool added()
extern "C"
void C_ZNK11QChildEvent5addedEv(void *this_) {
  /*return*/ ((QChildEvent*)this_)->added();
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:354
// bool polished()
extern "C"
void C_ZNK11QChildEvent8polishedEv(void *this_) {
  /*return*/ ((QChildEvent*)this_)->polished();
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:355
// bool removed()
extern "C"
void C_ZNK11QChildEvent7removedEv(void *this_) {
  /*return*/ ((QChildEvent*)this_)->removed();
}
//  main block end
