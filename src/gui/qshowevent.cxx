//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QShowEvent is pure virtual: false
// QShowEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQShowEvent_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQShowEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQShowEvent_t qt_meta_stringdata_MyQShowEvent = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQShowEvent"
  },
  "MyQShowEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQShowEvent[] = {
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
class Q_DECL_EXPORT MyQShowEvent : public QShowEvent {
public:
  virtual ~MyQShowEvent() {}
// void QShowEvent()
MyQShowEvent() : QShowEvent() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:493
// [-2] void QShowEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN10QShowEventC2Ev() {
  return  new QShowEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:494
// [-2] void ~QShowEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QShowEventD2Ev(void *this_) {
  delete (QShowEvent*)(this_);
}
//  main block end
