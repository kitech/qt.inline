//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextSelectionEvent is pure virtual: false
// QAccessibleTextSelectionEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAccessibleTextSelectionEvent_t {
  QByteArrayData data[1];
  char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTextSelectionEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTextSelectionEvent_t qt_meta_stringdata_MyQAccessibleTextSelectionEvent = {
   {
  QT_MOC_LITERAL(0, 0, 31), // "MyQAccessibleTextSelectionEvent"
  },
  "MyQAccessibleTextSelectionEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTextSelectionEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleTextSelectionEvent : public QAccessibleTextSelectionEvent {
public:
  virtual ~MyQAccessibleTextSelectionEvent() {}
// void QAccessibleTextSelectionEvent(QObject *, int, int)
MyQAccessibleTextSelectionEvent(QObject * obj, int start, int end_) : QAccessibleTextSelectionEvent(obj, start, end_) {}
// void QAccessibleTextSelectionEvent(QAccessibleInterface *, int, int)
MyQAccessibleTextSelectionEvent(QAccessibleInterface * iface, int start, int end_) : QAccessibleTextSelectionEvent(iface, start, end_) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:773
// [-2] void QAccessibleTextSelectionEvent(QObject *, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN29QAccessibleTextSelectionEventC2EP7QObjectii(QObject * obj, int start, int end_) {
  return  new QAccessibleTextSelectionEvent(obj, start, end_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:779
// [-2] void QAccessibleTextSelectionEvent(QAccessibleInterface *, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN29QAccessibleTextSelectionEventC2EP20QAccessibleInterfaceii(QAccessibleInterface * iface, int start, int end_) {
  return  new QAccessibleTextSelectionEvent(iface, start, end_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:786
// [-2] void ~QAccessibleTextSelectionEvent()
extern "C" Q_DECL_EXPORT
void C_ZN29QAccessibleTextSelectionEventD2Ev(void *this_) {
  delete (QAccessibleTextSelectionEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:788
// [-2] void setSelection(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN29QAccessibleTextSelectionEvent12setSelectionEii(void *this_, int start, int end_) {
  ((QAccessibleTextSelectionEvent*)this_)->setSelection(start, end_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:793
// [4] int selectionStart()
extern "C" Q_DECL_EXPORT
int C_ZNK29QAccessibleTextSelectionEvent14selectionStartEv(void *this_) {
  return (int)((QAccessibleTextSelectionEvent*)this_)->selectionStart();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:794
// [4] int selectionEnd()
extern "C" Q_DECL_EXPORT
int C_ZNK29QAccessibleTextSelectionEvent12selectionEndEv(void *this_) {
  return (int)((QAccessibleTextSelectionEvent*)this_)->selectionEnd();
}

//  main block end
