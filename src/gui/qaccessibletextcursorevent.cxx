//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextCursorEvent is pure virtual: false
// QAccessibleTextCursorEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleTextCursorEvent_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTextCursorEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTextCursorEvent_t qt_meta_stringdata_MyQAccessibleTextCursorEvent = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAccessibleTextCursorEvent"
  },
  "MyQAccessibleTextCursorEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTextCursorEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleTextCursorEvent : public QAccessibleTextCursorEvent {
public:
  virtual ~MyQAccessibleTextCursorEvent() {}
// void QAccessibleTextCursorEvent(QObject *, int)
MyQAccessibleTextCursorEvent(QObject * obj, int cursorPos) : QAccessibleTextCursorEvent(obj, cursorPos) {}
// void QAccessibleTextCursorEvent(QAccessibleInterface *, int)
MyQAccessibleTextCursorEvent(QAccessibleInterface * iface, int cursorPos) : QAccessibleTextCursorEvent(iface, cursorPos) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:747
// [-2] void QAccessibleTextCursorEvent(QObject *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextCursorEventC2EP7QObjecti(QObject * obj, int cursorPos) {
  return  new QAccessibleTextCursorEvent(obj, cursorPos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:753
// [-2] void QAccessibleTextCursorEvent(QAccessibleInterface *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextCursorEventC2EP20QAccessibleInterfacei(QAccessibleInterface * iface, int cursorPos) {
  return  new QAccessibleTextCursorEvent(iface, cursorPos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:760
// [-2] void ~QAccessibleTextCursorEvent()
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleTextCursorEventD2Ev(void *this_) {
  delete (QAccessibleTextCursorEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:762
// [-2] void setCursorPosition(int)
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleTextCursorEvent17setCursorPositionEi(void *this_, int position) {
  ((QAccessibleTextCursorEvent*)this_)->setCursorPosition(position);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:763
// [4] int cursorPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK26QAccessibleTextCursorEvent14cursorPositionEv(void *this_) {
  return (int)((QAccessibleTextCursorEvent*)this_)->cursorPosition();
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
