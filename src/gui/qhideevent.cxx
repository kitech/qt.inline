//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHideEvent is pure virtual: false
// QHideEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQHideEvent_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHideEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHideEvent_t qt_meta_stringdata_MyQHideEvent = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQHideEvent"
  },
  "MyQHideEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHideEvent[] = {
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
class Q_DECL_EXPORT MyQHideEvent : public QHideEvent {
public:
  virtual ~MyQHideEvent() {}
// void QHideEvent()
MyQHideEvent() : QHideEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:501
// [-2] void QHideEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN10QHideEventC2Ev() {
  return  new QHideEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:502
// [-2] void ~QHideEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QHideEventD2Ev(void *this_) {
  delete (QHideEvent*)(this_);
}
//  main block end
