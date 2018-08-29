//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWindowStateChangeEvent is pure virtual: false
// QWindowStateChangeEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWindowStateChangeEvent_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWindowStateChangeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWindowStateChangeEvent_t qt_meta_stringdata_MyQWindowStateChangeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQWindowStateChangeEvent"
  },
  "MyQWindowStateChangeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWindowStateChangeEvent[] = {
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
class Q_DECL_EXPORT MyQWindowStateChangeEvent : public QWindowStateChangeEvent {
public:
  virtual ~MyQWindowStateChangeEvent() {}
// void QWindowStateChangeEvent(Qt::WindowStates, bool)
MyQWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState, bool isOverride) : QWindowStateChangeEvent(aOldState, isOverride) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:783
// [-2] void QWindowStateChangeEvent(Qt::WindowStates, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN23QWindowStateChangeEventC2E6QFlagsIN2Qt11WindowStateEEb(QFlags<Qt::WindowState> aOldState, bool isOverride) {
  return  new QWindowStateChangeEvent(aOldState, isOverride);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:784
// [-2] void ~QWindowStateChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN23QWindowStateChangeEventD2Ev(void *this_) {
  delete (QWindowStateChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:786
// [4] Qt::WindowStates oldState()
extern "C" Q_DECL_EXPORT
Qt::WindowStates C_ZNK23QWindowStateChangeEvent8oldStateEv(void *this_) {
  return (Qt::WindowStates)((QWindowStateChangeEvent*)this_)->oldState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:787
// [1] bool isOverride()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QWindowStateChangeEvent10isOverrideEv(void *this_) {
  return (bool)((QWindowStateChangeEvent*)this_)->isOverride();
}

//  main block end
