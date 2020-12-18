//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QToolBarChangeEvent is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtoolbarchangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:799
// [1] bool toggle() const
// (12)qm1879354079 (34)_ZNK19QToolBarChangeEvent6toggleEv
//static
/*void qm1879354079()*/ {
  ;
  (void) ((QToolBarChangeEvent*)this_)->toggle();
   auto xptr = (bool (QToolBarChangeEvent::*)() const ) &QToolBarChangeEvent::toggle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QToolBarChangeEventD2Ev(void *this_)*/ {
  delete (QToolBarChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtoolbarchangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
