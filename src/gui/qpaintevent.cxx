//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintEvent is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpaintevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:451
// [16] const QRect & rect() const
// (12)qm3108784968 (24)_ZNK11QPaintEvent4rectEv
//static
/*void qm3108784968()*/ {
  ;
  (void) ((QPaintEvent*)this_)->rect();
   auto xptr = (const QRect & (QPaintEvent::*)() const ) &QPaintEvent::rect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:452
// [8] const QRegion & region() const
// (12)qm1555176926 (26)_ZNK11QPaintEvent6regionEv
//static
/*void qm1555176926()*/ {
  ;
  (void) ((QPaintEvent*)this_)->region();
   auto xptr = (const QRegion & (QPaintEvent::*)() const ) &QPaintEvent::region;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QPaintEventD2Ev(void *this_)*/ {
  delete (QPaintEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpaintevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
