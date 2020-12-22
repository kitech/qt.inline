//  header block begin

// /usr/include/qt/QtGui/qpainterpath.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpainterpath.h>
#include <QtGui>
#include "callback_inherit.h"

// QPainterPathStroker is pure virtual: false false
// QPainterPathStroker has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPainterPathStroker_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPainterPathStroker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPainterPathStroker_t qt_meta_stringdata_MyQPainterPathStroker = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQPainterPathStroker"
  },
  "MyQPainterPathStroker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPainterPathStroker[] = {
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
class Q_DECL_EXPORT MyQPainterPathStroker : public QPainterPathStroker {
public:
  virtual ~MyQPainterPathStroker() {}
// void QPainterPathStroker()
MyQPainterPathStroker() : QPainterPathStroker() {}
// void QPainterPathStroker(const QPen &)
MyQPainterPathStroker(const QPen & pen) : QPainterPathStroker(pen) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpainterpathstroker(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:265
// [-2] void QPainterPathStroker() 
// (12)qm3534780829 (28)_ZN19QPainterPathStrokerC2Ev
/*void* qm3534780829()*/{
  ;
  this_ =  new QPainterPathStroker();
  this_ =  new MyQPainterPathStroker();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:266
// [-2] void QPainterPathStroker(const QPen &) 
// (12)qm3502695912 (34)_ZN19QPainterPathStrokerC2ERK4QPen
/*void* qm3502695912(const QPen & pen)*/{
  const QPen & pen = *(const QPen *)this_;
  this_ =  new QPainterPathStroker(pen);
  this_ =  new MyQPainterPathStroker(pen);
}


/*void C_ZN19QPainterPathStrokerD2Ev(void *this_)*/ {
  delete (QPainterPathStroker*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpainterpathstroker
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
