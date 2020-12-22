//  header block begin

// /usr/include/qt/QtCore/qcollator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcollator.h>
#include <QtCore>
#include "callback_inherit.h"

// QCollator is pure virtual: false false
// QCollator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCollator_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCollator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCollator_t qt_meta_stringdata_MyQCollator = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQCollator"
  },
  "MyQCollator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCollator[] = {
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
class Q_DECL_EXPORT MyQCollator : public QCollator {
public:
  virtual ~MyQCollator() {}
// void QCollator()
MyQCollator() : QCollator() {}
// void QCollator(const QLocale &)
MyQCollator(const QLocale & locale) : QCollator(locale) {}
// void QCollator(const QCollator &)
MyQCollator(const QCollator & arg0) : QCollator(arg0) {}
// void QCollator(QCollator &&)
MyQCollator(QCollator && other) : QCollator(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcollator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:84
// [-2] void QCollator() 
// (12)qm2653493320 (17)_ZN9QCollatorC2Ev
/*void* qm2653493320()*/{
  ;
  this_ =  new QCollator();
  this_ =  new MyQCollator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:85
// [-2] void QCollator(const QLocale &) 
// (12)qm3059839049 (26)_ZN9QCollatorC2ERK7QLocale
/*void* qm3059839049(const QLocale & locale)*/{
  const QLocale & locale = *(const QLocale *)this_;
  this_ =  new QCollator(locale);
  this_ =  new MyQCollator(locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:86
// [-2] void QCollator(const QCollator &) 
// (12)qm2025594235 (20)_ZN9QCollatorC2ERKS_
/*void* qm2025594235(const QCollator & arg0)*/{
  const QCollator & arg0 = *(const QCollator *)this_;
  this_ =  new QCollator(arg0);
  this_ =  new MyQCollator(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:89
// [-2] void QCollator(QCollator &&) 
// (11)qm736972128 (19)_ZN9QCollatorC2EOS_
/*void* qm736972128(QCollator && other)*/{
  QCollator && other =  static_cast<QCollator &&>(*(QCollator *)this_);
  this_ =  new QCollator(other);
  this_ =  new MyQCollator(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:91
// [8] QCollator & operator=(QCollator &&) 
// (12)qm3319510944 (19)_ZN9QCollatoraSEOS_
//static
/*void qm3319510944(QCollator && other)*/ {
  QCollator && other =  static_cast<QCollator &&>(*(QCollator *)this_);
  (void) ((QCollator*)this_)->operator=(other);
  // auto xptr = (QCollator & (QCollator::*)(QCollator&&) ) &QCollator::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:94
// [-2] void swap(QCollator &) 
// (12)qm3823786949 (22)_ZN9QCollator4swapERS_
//static
/*void qm3823786949(QCollator & other)*/ {
  QCollator & other = *(QCollator *)this_;
  (void) ((QCollator*)this_)->swap(other);
   auto xptr = (void (QCollator::*)(QCollator&) ) &QCollator::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:114
// [1] bool operator()(const QString &, const QString &) const
// (12)qm4271181441 (30)_ZNK9QCollatorclERK7QStringS2_
//static
/*void qm4271181441(const QString & s1, const QString & s2)*/ {
  const QString & s1 = *(const QString *)this_; const QString & s2 = *(const QString *)this_;
  (void) ((QCollator*)this_)->operator()(s1, s2);
  // auto xptr = (bool (QCollator::*)()(QString const&, QString const&) const ) &QCollator::operator;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QCollatorD2Ev(void *this_)*/ {
  delete (QCollator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcollator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
