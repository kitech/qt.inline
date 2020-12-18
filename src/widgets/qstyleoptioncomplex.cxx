//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComplex is pure virtual: false false
// QStyleOptionComplex has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionComplex_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionComplex_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionComplex_t qt_meta_stringdata_MyQStyleOptionComplex = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQStyleOptionComplex"
  },
  "MyQStyleOptionComplex"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionComplex[] = {
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
class Q_DECL_EXPORT MyQStyleOptionComplex : public QStyleOptionComplex {
public:
  virtual ~MyQStyleOptionComplex() {}
// void QStyleOptionComplex(int, int)
MyQStyleOptionComplex(int version, int type_) : QStyleOptionComplex(version, type_) {}
// void QStyleOptionComplex(const QStyleOptionComplex &)
MyQStyleOptionComplex(const QStyleOptionComplex & other) : QStyleOptionComplex(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptioncomplex(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:532
// [-2] void QStyleOptionComplex(const QStyleOptionComplex &) 
// (12)qm1295319259 (31)_ZN19QStyleOptionComplexC2ERKS_
/*void* qm1295319259(const QStyleOptionComplex & other)*/{
  const QStyleOptionComplex & other = *(const QStyleOptionComplex *)this_;
  this_ =  new QStyleOptionComplex(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:533
// [72] QStyleOptionComplex & operator=(const QStyleOptionComplex &) 
// (12)qm3602904209 (31)_ZN19QStyleOptionComplexaSERKS_
//static
/*void qm3602904209(const QStyleOptionComplex & arg0)*/ {
  const QStyleOptionComplex & arg0 = *(const QStyleOptionComplex *)this_;
  (void) ((QStyleOptionComplex*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionComplex & (QStyleOptionComplex::*)(QStyleOptionComplex const&) ) &QStyleOptionComplex::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QStyleOptionComplexD2Ev(void *this_)*/ {
  delete (QStyleOptionComplex*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptioncomplex
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
