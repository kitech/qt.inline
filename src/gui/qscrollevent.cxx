//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QScrollEvent is pure virtual: false false
// QScrollEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQScrollEvent_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScrollEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScrollEvent_t qt_meta_stringdata_MyQScrollEvent = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQScrollEvent"
  },
  "MyQScrollEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScrollEvent[] = {
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
class Q_DECL_EXPORT MyQScrollEvent : public QScrollEvent {
public:
  virtual ~MyQScrollEvent() {}
// void QScrollEvent(const QPointF &, const QPointF &, QScrollEvent::ScrollState)
MyQScrollEvent(const QPointF & contentPos, const QPointF & overshoot, QScrollEvent::ScrollState scrollState) : QScrollEvent(contentPos, overshoot, scrollState) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qscrollevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1081
// [-2] void QScrollEvent(const QPointF &, const QPointF &, QScrollEvent::ScrollState) 
// (12)qm3236102957 (50)_ZN12QScrollEventC2ERK7QPointFS2_NS_11ScrollStateE
/*void* qm3236102957(const QPointF & contentPos, const QPointF & overshoot, QScrollEvent::ScrollState scrollState)*/{
  const QPointF & contentPos = *(const QPointF *)this_; const QPointF & overshoot = *(const QPointF *)this_; QScrollEvent::ScrollState scrollState = *(QScrollEvent::ScrollState*)this_;
  this_ =  new QScrollEvent(contentPos, overshoot, scrollState);
  this_ =  new MyQScrollEvent(contentPos, overshoot, scrollState);
}


/*void C_ZN12QScrollEventD2Ev(void *this_)*/ {
  delete (QScrollEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qscrollevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
