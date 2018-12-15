//  header block begin

// since 0x040800
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QScrollEvent is pure virtual: false
// QScrollEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQScrollEvent_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScrollEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScrollEvent_t qt_meta_stringdata_MyQScrollEvent = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQScrollEvent"
  },
  "MyQScrollEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScrollEvent[] = {
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
class Q_DECL_EXPORT MyQScrollEvent : public QScrollEvent {
public:
  virtual ~MyQScrollEvent() {}
// void QScrollEvent(const QPointF &, const QPointF &, QScrollEvent::ScrollState)
MyQScrollEvent(const QPointF & contentPos, const QPointF & overshoot, QScrollEvent::ScrollState scrollState) : QScrollEvent(contentPos, overshoot, scrollState) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1015
// [-2] void QScrollEvent(const QPointF &, const QPointF &, QScrollEvent::ScrollState)
extern "C" Q_DECL_EXPORT
void* C_ZN12QScrollEventC2ERK7QPointFS2_NS_11ScrollStateE(QPointF* contentPos, QPointF* overshoot, QScrollEvent::ScrollState scrollState) {
  return  new QScrollEvent(*contentPos, *overshoot, scrollState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1016
// [-2] void ~QScrollEvent()
extern "C" Q_DECL_EXPORT
void C_ZN12QScrollEventD2Ev(void *this_) {
  delete (QScrollEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1018
// [16] QPointF contentPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QScrollEvent10contentPosEv(void *this_) {
  auto rv = ((QScrollEvent*)this_)->contentPos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1019
// [16] QPointF overshootDistance()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QScrollEvent17overshootDistanceEv(void *this_) {
  auto rv = ((QScrollEvent*)this_)->overshootDistance();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1020
// [4] QScrollEvent::ScrollState scrollState()
extern "C" Q_DECL_EXPORT
QScrollEvent::ScrollState C_ZNK12QScrollEvent11scrollStateEv(void *this_) {
  return (QScrollEvent::ScrollState)((QScrollEvent*)this_)->scrollState();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
