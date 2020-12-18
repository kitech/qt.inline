//  header block begin

// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QConcatenable is pure virtual: false false
// QConcatenable has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQConcatenable_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQConcatenable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQConcatenable_t qt_meta_stringdata_MyQConcatenable = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQConcatenable"
  },
  "MyQConcatenable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQConcatenable[] = {
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
class Q_DECL_EXPORT MyQConcatenable : public QConcatenable<QByteArray> {
public:
  virtual ~MyQConcatenable() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qconcatenable(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:399
// [4] int size(const QByteArray &) 
// (12)qm2275045381 (43)_ZN13QConcatenableI10QByteArrayE4sizeERKS0_
//static
/*void qm2275045381(const QByteArray & ba)*/ {
  const QByteArray & ba = *(const QByteArray *)this_;
  (void) QConcatenable<QByteArray>::size(ba);
   auto xptr = (int (*)(QByteArray const&) ) &QConcatenable<QByteArray>::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:401
// [-2] void appendTo(const QByteArray &, QChar *&) 
// (11)qm326441698 (55)_ZN13QConcatenableI10QByteArrayE8appendToERKS0_RP5QChar
//static
/*void qm326441698(const QByteArray & ba, QChar *& out_)*/ {
  const QByteArray & ba = *(const QByteArray *)this_; QChar *& out_ = *(QChar **)this_;
  (void) QConcatenable<QByteArray>::appendTo(ba, out_);
   auto xptr = (void (*)(QByteArray const&, QChar*&) ) &QConcatenable<QByteArray>::appendTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:406
// [-2] void appendTo(const QByteArray &, char *&) 
// (12)qm2461776975 (50)_ZN13QConcatenableI10QByteArrayE8appendToERKS0_RPc
//static
/*void qm2461776975(const QByteArray & ba, char *& out_)*/ {
  const QByteArray & ba = *(const QByteArray *)this_; char *& out_ = *(char **)this_;
  (void) QConcatenable<QByteArray>::appendTo(ba, out_);
   auto xptr = (void (*)(QByteArray const&, char*&) ) &QConcatenable<QByteArray>::appendTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QConcatenableD2Ev(void *this_)*/ {
  delete (QConcatenable<QByteArray>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qconcatenable
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
