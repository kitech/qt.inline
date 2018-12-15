//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QActionEvent is pure virtual: false
// QActionEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQActionEvent_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQActionEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQActionEvent_t qt_meta_stringdata_MyQActionEvent = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQActionEvent"
  },
  "MyQActionEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQActionEvent[] = {
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
class Q_DECL_EXPORT MyQActionEvent : public QActionEvent {
public:
  virtual ~MyQActionEvent() {}
// void QActionEvent(int, QAction *, QAction *)
MyQActionEvent(int type_, QAction * action, QAction * before) : QActionEvent(type_, action, before) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:732
// [-2] void QActionEvent(int, QAction *, QAction *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionEventC2EiP7QActionS1_(int type_, QAction * action, QAction * before) {
  return  new QActionEvent(type_, action, before);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:733
// [-2] void ~QActionEvent()
extern "C" Q_DECL_EXPORT
void C_ZN12QActionEventD2Ev(void *this_) {
  delete (QActionEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:735
// [8] QAction * action()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QActionEvent6actionEv(void *this_) {
  return (void*)((QActionEvent*)this_)->action();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:736
// [8] QAction * before()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QActionEvent6beforeEv(void *this_) {
  return (void*)((QActionEvent*)this_)->before();
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
