//  header block begin

// /usr/include/qt/QtCore/qrandom.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrandom.h>
#include <QtCore>
#include "callback_inherit.h"

// QRandomGenerator64 is pure virtual: false false
// QRandomGenerator64 has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRandomGenerator64_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRandomGenerator64_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRandomGenerator64_t qt_meta_stringdata_MyQRandomGenerator64 = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQRandomGenerator64"
  },
  "MyQRandomGenerator64"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRandomGenerator64[] = {
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
class Q_DECL_EXPORT MyQRandomGenerator64 : public QRandomGenerator64 {
public:
  virtual ~MyQRandomGenerator64() {}
// void QRandomGenerator64(quint32)
MyQRandomGenerator64(quint32 seedValue) : QRandomGenerator64(seedValue) {}
// void QRandomGenerator64(const quint32 *, qsizetype)
MyQRandomGenerator64(const quint32 * seedBuffer, qsizetype len_) : QRandomGenerator64(seedBuffer, len_) {}
// void QRandomGenerator64(std::seed_seq &)
MyQRandomGenerator64(std::seed_seq & sseq) : QRandomGenerator64(sseq) {}
// void QRandomGenerator64(const quint32 *, const quint32 *)
MyQRandomGenerator64(const quint32 * begin_, const quint32 * end_) : QRandomGenerator64(begin_, end_) {}
// void QRandomGenerator64(const QRandomGenerator &)
MyQRandomGenerator64(const QRandomGenerator & other) : QRandomGenerator64(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrandomgenerator64(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:218
// [8] quint64 generate() 
// (12)qm3781129355 (34)_ZN18QRandomGenerator648generateEv
//static
/*void qm3781129355()*/ {
  ;
  (void) ((QRandomGenerator64*)this_)->generate();
   auto xptr = (unsigned long long (QRandomGenerator64::*)() ) &QRandomGenerator64::generate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:221
// [8] QRandomGenerator64::result_type operator()() 
// (12)qm1415295994 (27)_ZN18QRandomGenerator64clEv
//static
/*void qm1415295994()*/ {
  ;
  (void) ((QRandomGenerator64*)this_)->operator()();
  // auto xptr = (unsigned long long (QRandomGenerator64::*)()() ) &QRandomGenerator64::operator;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:224
// [-2] void QRandomGenerator64(quint32) 
// (12)qm2253013809 (27)_ZN18QRandomGenerator64C2Ej
/*void* qm2253013809(unsigned int seedValue)*/{
  unsigned int seedValue = *(unsigned int*)this_;
  this_ =  new QRandomGenerator64(seedValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:230
// [-2] void QRandomGenerator64(const quint32 *, qsizetype) 
// (12)qm3038831292 (30)_ZN18QRandomGenerator64C2EPKjx
/*void* qm3038831292(const unsigned int * seedBuffer, long long len_)*/{
  const unsigned int * seedBuffer = *(const unsigned int **)this_; long long len_ = *(long long*)this_;
  this_ =  new QRandomGenerator64(seedBuffer, len_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:233
// [-2] void QRandomGenerator64(std::seed_seq &) 
// (12)qm2243923264 (38)_ZN18QRandomGenerator64C2ERSt8seed_seq
/*void* qm2243923264(std::seed_seq & sseq)*/{
  std::seed_seq & sseq = *(std::seed_seq *)this_;
  this_ =  new QRandomGenerator64(sseq);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:236
// [-2] void QRandomGenerator64(const quint32 *, const quint32 *) 
// (12)qm1312565225 (32)_ZN18QRandomGenerator64C2EPKjS1_
/*void* qm1312565225(const unsigned int * begin_, const unsigned int * end_)*/{
  const unsigned int * begin_ = *(const unsigned int **)this_; const unsigned int * end_ = *(const unsigned int **)this_;
  this_ =  new QRandomGenerator64(begin_, end_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:239
// [-2] void QRandomGenerator64(const QRandomGenerator &) 
// (12)qm1301307547 (46)_ZN18QRandomGenerator64C2ERK16QRandomGenerator
/*void* qm1301307547(const QRandomGenerator & other)*/{
  const QRandomGenerator & other = *(const QRandomGenerator *)this_;
  this_ =  new QRandomGenerator64(other);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:241
// [-2] void discard(unsigned long long) 
// (12)qm3537789305 (33)_ZN18QRandomGenerator647discardEy
//static
/*void qm3537789305(unsigned long long z)*/ {
  unsigned long long z = *(unsigned long long*)this_;
  (void) ((QRandomGenerator64*)this_)->discard(z);
   auto xptr = (void (QRandomGenerator64::*)(unsigned long long) ) &QRandomGenerator64::discard;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:248
// [8] QRandomGenerator64::result_type min() 
// (10)qm11862501 (29)_ZN18QRandomGenerator643minEv
//static
/*void qm11862501()*/ {
  ;
  (void) QRandomGenerator64::min();
   auto xptr = (unsigned long long (*)() ) &QRandomGenerator64::min;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:249
// [8] QRandomGenerator64::result_type max() 
// (12)qm3718969032 (29)_ZN18QRandomGenerator643maxEv
//static
/*void qm3718969032()*/ {
  ;
  (void) QRandomGenerator64::max();
   auto xptr = (unsigned long long (*)() ) &QRandomGenerator64::max;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QRandomGenerator64D2Ev(void *this_)*/ {
  delete (QRandomGenerator64*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrandomgenerator64
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
