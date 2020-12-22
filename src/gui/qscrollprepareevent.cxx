//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QScrollPrepareEvent is pure virtual: false false
// QScrollPrepareEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQScrollPrepareEvent_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScrollPrepareEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScrollPrepareEvent_t qt_meta_stringdata_MyQScrollPrepareEvent = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQScrollPrepareEvent"
  },
  "MyQScrollPrepareEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScrollPrepareEvent[] = {
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
class Q_DECL_EXPORT MyQScrollPrepareEvent : public QScrollPrepareEvent {
public:
  virtual ~MyQScrollPrepareEvent() {}
// void QScrollPrepareEvent(const QPointF &)
MyQScrollPrepareEvent(const QPointF & startPos) : QScrollPrepareEvent(startPos) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qscrollprepareevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1049
// [-2] void QScrollPrepareEvent(const QPointF &) 
// (12)qm3080891566 (37)_ZN19QScrollPrepareEventC2ERK7QPointF
/*void* qm3080891566(const QPointF & startPos)*/{
  const QPointF & startPos = *(const QPointF *)this_;
  this_ =  new QScrollPrepareEvent(startPos);
  this_ =  new MyQScrollPrepareEvent(startPos);
}


/*void C_ZN19QScrollPrepareEventD2Ev(void *this_)*/ {
  delete (QScrollPrepareEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qscrollprepareevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
