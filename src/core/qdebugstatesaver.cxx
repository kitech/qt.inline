//  header block begin

// /usr/include/qt/QtCore/qdebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdebug.h>
#include <QtCore>
#include "callback_inherit.h"

// QDebugStateSaver is pure virtual: false false
// QDebugStateSaver has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDebugStateSaver_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDebugStateSaver_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDebugStateSaver_t qt_meta_stringdata_MyQDebugStateSaver = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQDebugStateSaver"
  },
  "MyQDebugStateSaver"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDebugStateSaver[] = {
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
class Q_DECL_EXPORT MyQDebugStateSaver : public QDebugStateSaver {
public:
  virtual ~MyQDebugStateSaver() {}
// void QDebugStateSaver(QDebug &)
MyQDebugStateSaver(QDebug & dbg) : QDebugStateSaver(dbg) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdebugstatesaver(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:184
// [-2] void QDebugStateSaver(QDebug &) 
// (11)qm700760093 (32)_ZN16QDebugStateSaverC2ER6QDebug
/*void* qm700760093(QDebug & dbg)*/{
  QDebug & dbg = *(QDebug *)this_;
  this_ =  new QDebugStateSaver(dbg);
  this_ =  new MyQDebugStateSaver(dbg);
}


/*void C_ZN16QDebugStateSaverD2Ev(void *this_)*/ {
  delete (QDebugStateSaver*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdebugstatesaver
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
