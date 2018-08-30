//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QMoveEvent is pure virtual: false
// QMoveEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMoveEvent_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMoveEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMoveEvent_t qt_meta_stringdata_MyQMoveEvent = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQMoveEvent"
  },
  "MyQMoveEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMoveEvent[] = {
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
class Q_DECL_EXPORT MyQMoveEvent : public QMoveEvent {
public:
  virtual ~MyQMoveEvent() {}
// void QMoveEvent(const QPoint &, const QPoint &)
MyQMoveEvent(const QPoint & pos, const QPoint & oldPos) : QMoveEvent(pos, oldPos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:421
// [-2] void QMoveEvent(const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QMoveEventC2ERK6QPointS2_(QPoint* pos, QPoint* oldPos) {
  return  new QMoveEvent(*pos, *oldPos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:422
// [-2] void ~QMoveEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QMoveEventD2Ev(void *this_) {
  delete (QMoveEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:424
// [8] const QPoint & pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QMoveEvent3posEv(void *this_) {
  auto& rv = ((QMoveEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:425
// [8] const QPoint & oldPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QMoveEvent6oldPosEv(void *this_) {
  auto& rv = ((QMoveEvent*)this_)->oldPos();
return new QPoint(rv);
}

//  main block end
