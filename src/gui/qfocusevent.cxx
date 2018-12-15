//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QFocusEvent is pure virtual: false
// QFocusEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFocusEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFocusEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFocusEvent_t qt_meta_stringdata_MyQFocusEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQFocusEvent"
  },
  "MyQFocusEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFocusEvent[] = {
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
class Q_DECL_EXPORT MyQFocusEvent : public QFocusEvent {
public:
  virtual ~MyQFocusEvent() {}
// void QFocusEvent(QEvent::Type, Qt::FocusReason)
MyQFocusEvent(QEvent::Type type_, Qt::FocusReason reason) : QFocusEvent(type_, reason) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:382
// [-2] void QFocusEvent(QEvent::Type, Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusEventC2EN6QEvent4TypeEN2Qt11FocusReasonE(QEvent::Type type_, Qt::FocusReason reason) {
  return  new QFocusEvent(type_, reason);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:383
// [-2] void ~QFocusEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QFocusEventD2Ev(void *this_) {
  delete (QFocusEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:385
// [1] bool gotFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFocusEvent8gotFocusEv(void *this_) {
  return (bool)((QFocusEvent*)this_)->gotFocus();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:386
// [1] bool lostFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFocusEvent9lostFocusEv(void *this_) {
  return (bool)((QFocusEvent*)this_)->lostFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:388
// [4] Qt::FocusReason reason()
extern "C" Q_DECL_EXPORT
Qt::FocusReason C_ZNK11QFocusEvent6reasonEv(void *this_) {
  return (Qt::FocusReason)((QFocusEvent*)this_)->reason();
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
