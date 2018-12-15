//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QExposeEvent is pure virtual: false
// QExposeEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQExposeEvent_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQExposeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQExposeEvent_t qt_meta_stringdata_MyQExposeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQExposeEvent"
  },
  "MyQExposeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQExposeEvent[] = {
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
class Q_DECL_EXPORT MyQExposeEvent : public QExposeEvent {
public:
  virtual ~MyQExposeEvent() {}
// void QExposeEvent(const QRegion &)
MyQExposeEvent(const QRegion & rgn) : QExposeEvent(rgn) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:427
// [-2] void QExposeEvent(const QRegion &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QExposeEventC2ERK7QRegion(QRegion* rgn) {
  return  new QExposeEvent(*rgn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:428
// [-2] void ~QExposeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN12QExposeEventD2Ev(void *this_) {
  delete (QExposeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:430
// [8] const QRegion & region()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QExposeEvent6regionEv(void *this_) {
  auto& rv = ((QExposeEvent*)this_)->region();
return new QRegion(rv);
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
