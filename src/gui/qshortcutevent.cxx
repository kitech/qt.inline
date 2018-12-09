//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QShortcutEvent is pure virtual: false
// QShortcutEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQShortcutEvent_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQShortcutEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQShortcutEvent_t qt_meta_stringdata_MyQShortcutEvent = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQShortcutEvent"
  },
  "MyQShortcutEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQShortcutEvent[] = {
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
class Q_DECL_EXPORT MyQShortcutEvent : public QShortcutEvent {
public:
  virtual ~MyQShortcutEvent() {}
// void QShortcutEvent(const QKeySequence &, int, bool)
MyQShortcutEvent(const QKeySequence & key, int id, bool ambiguous) : QShortcutEvent(key, id, ambiguous) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:767
// [-2] void QShortcutEvent(const QKeySequence &, int, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN14QShortcutEventC2ERK12QKeySequenceib(QKeySequence* key, int id, bool ambiguous) {
  return  new QShortcutEvent(*key, id, ambiguous);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:768
// [-2] void ~QShortcutEvent()
extern "C" Q_DECL_EXPORT
void C_ZN14QShortcutEventD2Ev(void *this_) {
  delete (QShortcutEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:770
// [8] const QKeySequence & key()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QShortcutEvent3keyEv(void *this_) {
  auto& rv = ((QShortcutEvent*)this_)->key();
return new QKeySequence(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:771
// [4] int shortcutId()
extern "C" Q_DECL_EXPORT
int C_ZNK14QShortcutEvent10shortcutIdEv(void *this_) {
  return (int)((QShortcutEvent*)this_)->shortcutId();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:772
// [1] bool isAmbiguous()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QShortcutEvent11isAmbiguousEv(void *this_) {
  return (bool)((QShortcutEvent*)this_)->isAmbiguous();
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
