//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QCloseEvent is pure virtual: false
// QCloseEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCloseEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCloseEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCloseEvent_t qt_meta_stringdata_MyQCloseEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQCloseEvent"
  },
  "MyQCloseEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCloseEvent[] = {
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
class Q_DECL_EXPORT MyQCloseEvent : public QCloseEvent {
public:
  virtual ~MyQCloseEvent() {}
// void QCloseEvent()
MyQCloseEvent() : QCloseEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:470
// [-2] void QCloseEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN11QCloseEventC2Ev() {
  return  new QCloseEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:471
// [-2] void ~QCloseEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QCloseEventD2Ev(void *this_) {
  delete (QCloseEvent*)(this_);
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
