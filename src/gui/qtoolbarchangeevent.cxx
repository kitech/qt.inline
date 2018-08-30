//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QToolBarChangeEvent is pure virtual: false
// QToolBarChangeEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQToolBarChangeEvent_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQToolBarChangeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQToolBarChangeEvent_t qt_meta_stringdata_MyQToolBarChangeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQToolBarChangeEvent"
  },
  "MyQToolBarChangeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQToolBarChangeEvent[] = {
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
class Q_DECL_EXPORT MyQToolBarChangeEvent : public QToolBarChangeEvent {
public:
  virtual ~MyQToolBarChangeEvent() {}
// void QToolBarChangeEvent(bool)
MyQToolBarChangeEvent(bool t) : QToolBarChangeEvent(t) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:754
// [-2] void QToolBarChangeEvent(bool)
extern "C" Q_DECL_EXPORT
void* C_ZN19QToolBarChangeEventC2Eb(bool t) {
  return  new QToolBarChangeEvent(t);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:755
// [-2] void ~QToolBarChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN19QToolBarChangeEventD2Ev(void *this_) {
  delete (QToolBarChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:757
// [1] bool toggle()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QToolBarChangeEvent6toggleEv(void *this_) {
  return (bool)((QToolBarChangeEvent*)this_)->toggle();
}

//  main block end
