//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDragLeaveEvent is pure virtual: false false
// QDragLeaveEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDragLeaveEvent_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDragLeaveEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDragLeaveEvent_t qt_meta_stringdata_MyQDragLeaveEvent = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQDragLeaveEvent"
  },
  "MyQDragLeaveEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDragLeaveEvent[] = {
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
class Q_DECL_EXPORT MyQDragLeaveEvent : public QDragLeaveEvent {
public:
  virtual ~MyQDragLeaveEvent() {}
// void QDragLeaveEvent()
MyQDragLeaveEvent() : QDragLeaveEvent() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdragleaveevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:713
// [-2] void QDragLeaveEvent() 
// (12)qm3428661095 (24)_ZN15QDragLeaveEventC2Ev
/*void* qm3428661095()*/{
  ;
  this_ =  new QDragLeaveEvent();
  this_ =  new MyQDragLeaveEvent();
}


/*void C_ZN15QDragLeaveEventD2Ev(void *this_)*/ {
  delete (QDragLeaveEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdragleaveevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
