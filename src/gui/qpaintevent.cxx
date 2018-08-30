//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintEvent is pure virtual: false
// QPaintEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPaintEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPaintEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPaintEvent_t qt_meta_stringdata_MyQPaintEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQPaintEvent"
  },
  "MyQPaintEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPaintEvent[] = {
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
class Q_DECL_EXPORT MyQPaintEvent : public QPaintEvent {
public:
  virtual ~MyQPaintEvent() {}
// void QPaintEvent(const QRegion &)
MyQPaintEvent(const QRegion & paintRegion) : QPaintEvent(paintRegion) {}
// void QPaintEvent(const QRect &)
MyQPaintEvent(const QRect & paintRect) : QPaintEvent(paintRect) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:405
// [-2] void QPaintEvent(const QRegion &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPaintEventC2ERK7QRegion(QRegion* paintRegion) {
  return  new QPaintEvent(*paintRegion);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:406
// [-2] void QPaintEvent(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPaintEventC2ERK5QRect(QRect* paintRect) {
  return  new QPaintEvent(*paintRect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:407
// [-2] void ~QPaintEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QPaintEventD2Ev(void *this_) {
  delete (QPaintEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:409
// [16] const QRect & rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPaintEvent4rectEv(void *this_) {
  auto& rv = ((QPaintEvent*)this_)->rect();
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:410
// [8] const QRegion & region()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPaintEvent6regionEv(void *this_) {
  auto& rv = ((QPaintEvent*)this_)->region();
return new QRegion(rv);
}

//  main block end
