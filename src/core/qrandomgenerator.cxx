//  header block begin

// /usr/include/qt/QtCore/qrandom.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrandom.h>
#include <QtCore>
#include "callback_inherit.h"

// QRandomGenerator is pure virtual: false false
// QRandomGenerator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRandomGenerator_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRandomGenerator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRandomGenerator_t qt_meta_stringdata_MyQRandomGenerator = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQRandomGenerator"
  },
  "MyQRandomGenerator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRandomGenerator[] = {
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
class Q_DECL_EXPORT MyQRandomGenerator : public QRandomGenerator {
public:
  virtual ~MyQRandomGenerator() {}
// void QRandomGenerator(quint32)
MyQRandomGenerator(quint32 seedValue) : QRandomGenerator(seedValue) {}
// void QRandomGenerator(const quint32 *, qsizetype)
MyQRandomGenerator(const quint32 * seedBuffer, qsizetype len_) : QRandomGenerator(seedBuffer, len_) {}
// void QRandomGenerator(std::seed_seq &)
MyQRandomGenerator(std::seed_seq & sseq) : QRandomGenerator(sseq) {}
// void QRandomGenerator(const quint32 *, const quint32 *)
MyQRandomGenerator(const quint32 * begin_, const quint32 * end_) : QRandomGenerator(begin_, end_) {}
// void QRandomGenerator(const QRandomGenerator &)
MyQRandomGenerator(const QRandomGenerator & other) : QRandomGenerator(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrandomgenerator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:62
// [-2] void QRandomGenerator(quint32) 
// (12)qm1159609541 (25)_ZN16QRandomGeneratorC2Ej
/*void* qm1159609541(unsigned int seedValue)*/{
  unsigned int seedValue = *(unsigned int*)this_;
  this_ =  new QRandomGenerator(seedValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:68
// [-2] void QRandomGenerator(const quint32 *, qsizetype) 
// (12)qm3276589479 (28)_ZN16QRandomGeneratorC2EPKjx
/*void* qm3276589479(const unsigned int * seedBuffer, long long len_)*/{
  const unsigned int * seedBuffer = *(const unsigned int **)this_; long long len_ = *(long long*)this_;
  this_ =  new QRandomGenerator(seedBuffer, len_);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:84
// [4] quint32 generate() 
// (11)qm577895862 (32)_ZN16QRandomGenerator8generateEv
//static
/*void qm577895862()*/ {
  ;
  (void) ((QRandomGenerator*)this_)->generate();
   auto xptr = (unsigned int (QRandomGenerator::*)() ) &QRandomGenerator::generate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:91
// [8] quint64 generate64() 
// (12)qm3757148054 (35)_ZN16QRandomGenerator10generate64Ev
//static
/*void qm3757148054()*/ {
  ;
  (void) ((QRandomGenerator*)this_)->generate64();
   auto xptr = (unsigned long long (QRandomGenerator::*)() ) &QRandomGenerator::generate64;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:98
// [8] double generateDouble() 
// (12)qm1626302305 (39)_ZN16QRandomGenerator14generateDoubleEv
//static
/*void qm1626302305()*/ {
  ;
  (void) ((QRandomGenerator*)this_)->generateDouble();
   auto xptr = (double (QRandomGenerator::*)() ) &QRandomGenerator::generateDouble;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:112
// [8] double bounded(double) 
// (12)qm4241106914 (31)_ZN16QRandomGenerator7boundedEd
//static
/*void qm4241106914(double highest)*/ {
  double highest = *(double*)this_;
  (void) ((QRandomGenerator*)this_)->bounded(highest);
   auto xptr = (double (QRandomGenerator::*)(double) ) &QRandomGenerator::bounded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:117
// [4] quint32 bounded(quint32) 
// (11)qm460458725 (31)_ZN16QRandomGenerator7boundedEj
//static
/*void qm460458725(unsigned int highest)*/ {
  unsigned int highest = *(unsigned int*)this_;
  (void) ((QRandomGenerator*)this_)->bounded(highest);
   auto xptr = (unsigned int (QRandomGenerator::*)(unsigned int) ) &QRandomGenerator::bounded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:125
// [4] quint32 bounded(quint32, quint32) 
// (12)qm2937979702 (32)_ZN16QRandomGenerator7boundedEjj
//static
/*void qm2937979702(unsigned int lowest, unsigned int highest)*/ {
  unsigned int lowest = *(unsigned int*)this_; unsigned int highest = *(unsigned int*)this_;
  (void) ((QRandomGenerator*)this_)->bounded(lowest, highest);
   auto xptr = (unsigned int (QRandomGenerator::*)(unsigned int, unsigned int) ) &QRandomGenerator::bounded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:131
// [4] int bounded(int) 
// (12)qm2189122399 (31)_ZN16QRandomGenerator7boundedEi
//static
/*void qm2189122399(int highest)*/ {
  int highest = *(int*)this_;
  (void) ((QRandomGenerator*)this_)->bounded(highest);
   auto xptr = (int (QRandomGenerator::*)(int) ) &QRandomGenerator::bounded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:137
// [4] int bounded(int, int) 
// (11)qm490340687 (32)_ZN16QRandomGenerator7boundedEii
//static
/*void qm490340687(int lowest, int highest)*/ {
  int lowest = *(int*)this_; int highest = *(int*)this_;
  (void) ((QRandomGenerator*)this_)->bounded(lowest, highest);
   auto xptr = (int (QRandomGenerator::*)(int, int) ) &QRandomGenerator::bounded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:161
// [-2] void generate(quint32 *, quint32 *) 
// (11)qm393674806 (36)_ZN16QRandomGenerator8generateEPjS0_
//static
/*void qm393674806(unsigned int * begin_, unsigned int * end_)*/ {
  unsigned int * begin_ = *(unsigned int **)this_; unsigned int * end_ = *(unsigned int **)this_;
  (void) ((QRandomGenerator*)this_)->generate(begin_, end_);
   auto xptr = (void (QRandomGenerator::*)(unsigned int*, unsigned int*) ) &QRandomGenerator::generate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:168
// [4] QRandomGenerator::result_type operator()() 
// (12)qm2534394894 (25)_ZN16QRandomGeneratorclEv
//static
/*void qm2534394894()*/ {
  ;
  (void) ((QRandomGenerator*)this_)->operator()();
  // auto xptr = (unsigned int (QRandomGenerator::*)()() ) &QRandomGenerator::operator;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:169
// [-2] void seed(quint32) 
// (12)qm4194800036 (28)_ZN16QRandomGenerator4seedEj
//static
/*void qm4194800036(unsigned int s)*/ {
  unsigned int s = *(unsigned int*)this_;
  (void) ((QRandomGenerator*)this_)->seed(s);
   auto xptr = (void (QRandomGenerator::*)(unsigned int) ) &QRandomGenerator::seed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:170
// [-2] void seed(std::seed_seq &) 
// (12)qm2721705901 (39)_ZN16QRandomGenerator4seedERSt8seed_seq
//static
/*void qm2721705901(std::seed_seq & sseq)*/ {
  std::seed_seq & sseq = *(std::seed_seq *)this_;
  (void) ((QRandomGenerator*)this_)->seed(sseq);
   auto xptr = (void (QRandomGenerator::*)(std::seed_seq&) ) &QRandomGenerator::seed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:172
// [4] QRandomGenerator::result_type min() 
// (12)qm2967440037 (27)_ZN16QRandomGenerator3minEv
//static
/*void qm2967440037()*/ {
  ;
  (void) QRandomGenerator::min();
   auto xptr = (unsigned int (*)() ) &QRandomGenerator::min;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:173
// [4] QRandomGenerator::result_type max() 
// (12)qm1841331592 (27)_ZN16QRandomGenerator3maxEv
//static
/*void qm1841331592()*/ {
  ;
  (void) QRandomGenerator::max();
   auto xptr = (unsigned int (*)() ) &QRandomGenerator::max;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:175
// [8] QRandomGenerator * system() 
// (12)qm2789755917 (30)_ZN16QRandomGenerator6systemEv
//static
/*void qm2789755917()*/ {
  ;
  (void) QRandomGenerator::system();
   auto xptr = (QRandomGenerator * (*)() ) &QRandomGenerator::system;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:176
// [8] QRandomGenerator * global() 
// (12)qm2118884631 (30)_ZN16QRandomGenerator6globalEv
//static
/*void qm2118884631()*/ {
  ;
  (void) QRandomGenerator::global();
   auto xptr = (QRandomGenerator * (*)() ) &QRandomGenerator::global;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:177
// [2512] QRandomGenerator securelySeeded() 
// (12)qm3171055096 (39)_ZN16QRandomGenerator14securelySeededEv
//static
/*void qm3171055096()*/ {
  ;
  (void) QRandomGenerator::securelySeeded();
   auto xptr = (QRandomGenerator (*)() ) &QRandomGenerator::securelySeeded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QRandomGeneratorD2Ev(void *this_)*/ {
  delete (QRandomGenerator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrandomgenerator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
