//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QExposeEvent is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qexposeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:479
// [8] const QRegion & region() const
// (12)qm3350744969 (27)_ZNK12QExposeEvent6regionEv
//static
/*void qm3350744969()*/ {
  ;
  (void) ((QExposeEvent*)this_)->region();
   auto xptr = (const QRegion & (QExposeEvent::*)() const ) &QExposeEvent::region;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QExposeEventD2Ev(void *this_)*/ {
  delete (QExposeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qexposeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
