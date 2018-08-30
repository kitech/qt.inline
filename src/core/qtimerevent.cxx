//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimerEvent is pure virtual: false
// QTimerEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTimerEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTimerEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTimerEvent_t qt_meta_stringdata_MyQTimerEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTimerEvent"
  },
  "MyQTimerEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTimerEvent[] = {
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
class Q_DECL_EXPORT MyQTimerEvent : public QTimerEvent {
public:
  virtual ~MyQTimerEvent() {}
// void QTimerEvent(int)
MyQTimerEvent(int timerId) : QTimerEvent(timerId) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:340
// [-2] void QTimerEvent(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTimerEventC2Ei(int timerId) {
  return  new QTimerEvent(timerId);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:341
// [-2] void ~QTimerEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QTimerEventD2Ev(void *this_) {
  delete (QTimerEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:342
// [4] int timerId()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTimerEvent7timerIdEv(void *this_) {
  return (int)((QTimerEvent*)this_)->timerId();
}

//  main block end
