//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconDragEvent is pure virtual: false false
// QIconDragEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQIconDragEvent_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIconDragEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIconDragEvent_t qt_meta_stringdata_MyQIconDragEvent = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQIconDragEvent"
  },
  "MyQIconDragEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIconDragEvent[] = {
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
class Q_DECL_EXPORT MyQIconDragEvent : public QIconDragEvent {
public:
  virtual ~MyQIconDragEvent() {}
// void QIconDragEvent()
MyQIconDragEvent() : QIconDragEvent() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qicondragevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:527
// [-2] void QIconDragEvent() 
// (10)qm41990026 (23)_ZN14QIconDragEventC2Ev
/*void* qm41990026()*/{
  ;
  this_ =  new QIconDragEvent();
  this_ =  new MyQIconDragEvent();
}


/*void C_ZN14QIconDragEventD2Ev(void *this_)*/ {
  delete (QIconDragEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qicondragevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
