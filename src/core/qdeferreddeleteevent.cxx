//  header block begin

// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QDeferredDeleteEvent is pure virtual: false
// QDeferredDeleteEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDeferredDeleteEvent_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDeferredDeleteEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDeferredDeleteEvent_t qt_meta_stringdata_MyQDeferredDeleteEvent = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQDeferredDeleteEvent"
  },
  "MyQDeferredDeleteEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDeferredDeleteEvent[] = {
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
class Q_DECL_EXPORT MyQDeferredDeleteEvent : public QDeferredDeleteEvent {
public:
  virtual ~MyQDeferredDeleteEvent() {}
// void QDeferredDeleteEvent()
MyQDeferredDeleteEvent() : QDeferredDeleteEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:377
// [-2] void QDeferredDeleteEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN20QDeferredDeleteEventC2Ev() {
  return  new QDeferredDeleteEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:378
// [-2] void ~QDeferredDeleteEvent()
extern "C" Q_DECL_EXPORT
void C_ZN20QDeferredDeleteEventD2Ev(void *this_) {
  delete (QDeferredDeleteEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:379
// [4] int loopLevel()
extern "C" Q_DECL_EXPORT
int C_ZNK20QDeferredDeleteEvent9loopLevelEv(void *this_) {
  return (int)((QDeferredDeleteEvent*)this_)->loopLevel();
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
