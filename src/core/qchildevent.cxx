//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QChildEvent is pure virtual: false
// QChildEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQChildEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQChildEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQChildEvent_t qt_meta_stringdata_MyQChildEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQChildEvent"
  },
  "MyQChildEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQChildEvent[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQChildEvent : public QChildEvent {
public:
  virtual ~MyQChildEvent() {}
// void QChildEvent(QEvent::Type, QObject *)
MyQChildEvent(QEvent::Type type_, QObject * child) : QChildEvent(type_, child) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:352
// [-2] void QChildEvent(QEvent::Type, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QChildEventC2EN6QEvent4TypeEP7QObject(QEvent::Type type_, QObject * child) {
  return  new QChildEvent(type_, child);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:353
// [-2] void ~QChildEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QChildEventD2Ev(void *this_) {
  delete (QChildEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:354
// [8] QObject * child()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QChildEvent5childEv(void *this_) {
  return (void*)((QChildEvent*)this_)->child();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:355
// [1] bool added()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QChildEvent5addedEv(void *this_) {
  return (bool)((QChildEvent*)this_)->added();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:356
// [1] bool polished()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QChildEvent8polishedEv(void *this_) {
  return (bool)((QChildEvent*)this_)->polished();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:357
// [1] bool removed()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QChildEvent7removedEv(void *this_) {
  return (bool)((QChildEvent*)this_)->removed();
}

//  main block end
