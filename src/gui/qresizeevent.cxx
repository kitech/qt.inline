//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QResizeEvent is pure virtual: false false
// QResizeEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQResizeEvent_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQResizeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQResizeEvent_t qt_meta_stringdata_MyQResizeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQResizeEvent"
  },
  "MyQResizeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQResizeEvent[] = {
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
class Q_DECL_EXPORT MyQResizeEvent : public QResizeEvent {
public:
  virtual ~MyQResizeEvent() {}
// void QResizeEvent(const QSize &, const QSize &)
MyQResizeEvent(const QSize & size, const QSize & oldSize) : QResizeEvent(size, oldSize) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qresizeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:508
// [8] const QSize & size() const
// (11)qm334655610 (25)_ZNK12QResizeEvent4sizeEv
//static
/*void qm334655610()*/ {
  ;
  (void) ((QResizeEvent*)this_)->size();
   auto xptr = (const QSize & (QResizeEvent::*)() const ) &QResizeEvent::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:509
// [8] const QSize & oldSize() const
// (12)qm3805921887 (28)_ZNK12QResizeEvent7oldSizeEv
//static
/*void qm3805921887()*/ {
  ;
  (void) ((QResizeEvent*)this_)->oldSize();
   auto xptr = (const QSize & (QResizeEvent::*)() const ) &QResizeEvent::oldSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QResizeEventD2Ev(void *this_)*/ {
  delete (QResizeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qresizeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
