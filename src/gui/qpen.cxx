//  header block begin

// /usr/include/qt/QtGui/qpen.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpen.h>
#include <QtGui>
#include "callback_inherit.h"

// QPen is pure virtual: false false
// QPen has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPen_t {
  QByteArrayData data[1];
  char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPen_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPen_t qt_meta_stringdata_MyQPen = {
   {
  QT_MOC_LITERAL(0, 0, 6), // "MyQPen"
  },
  "MyQPen"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPen[] = {
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
class Q_DECL_EXPORT MyQPen : public QPen {
public:
  virtual ~MyQPen() {}
// void QPen()
MyQPen() : QPen() {}
// void QPen(Qt::PenStyle)
MyQPen(Qt::PenStyle arg0) : QPen(arg0) {}
// void QPen(const QColor &)
MyQPen(const QColor & color) : QPen(color) {}
// void QPen(const QBrush &, qreal, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle)
MyQPen(const QBrush & brush, qreal width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j) : QPen(brush, width, s, c, j) {}
// void QPen(const QPen &)
MyQPen(const QPen & pen) : QPen(pen) {}
// void QPen(QPen &&)
MyQPen(QPen && other) : QPen(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpen(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:73
// [-2] void QPen(QPen &&) 
// (12)qm1517653448 (14)_ZN4QPenC2EOS_
/*void* qm1517653448(QPen && other)*/{
  QPen && other =  static_cast<QPen &&>(*(QPen *)this_);
  this_ =  new QPen(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:75
// [8] QPen & operator=(QPen &&) 
// (12)qm3024320264 (14)_ZN4QPenaSEOS_
//static
/*void qm3024320264(QPen && other)*/ {
  QPen && other =  static_cast<QPen &&>(*(QPen *)this_);
  (void) ((QPen*)this_)->operator=(other);
  // auto xptr = (QPen & (QPen::*)(QPen&&) ) &QPen::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:77
// [-2] void swap(QPen &) 
// (10)qm28285780 (17)_ZN4QPen4swapERS_
//static
/*void qm28285780(QPen & other)*/ {
  QPen & other = *(QPen *)this_;
  (void) ((QPen*)this_)->swap(other);
   auto xptr = (void (QPen::*)(QPen&) ) &QPen::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:115
// [1] bool operator!=(const QPen &) const
// (11)qm860657521 (16)_ZNK4QPenneERKS_
//static
/*void qm860657521(const QPen & p)*/ {
  const QPen & p = *(const QPen *)this_;
  (void) ((QPen*)this_)->operator!=(p);
  // auto xptr = (bool (QPen::*)(QPen const&) const ) &QPen::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:128
// [8] QPen::DataPtr & data_ptr() 
// (12)qm1036462768 (19)_ZN4QPen8data_ptrEv
//static
/*void qm1036462768()*/ {
  ;
  (void) ((QPen*)this_)->data_ptr();
   auto xptr = (QPenPrivate *& (QPen::*)() ) &QPen::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN4QPenD2Ev(void *this_)*/ {
  delete (QPen*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpen
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
