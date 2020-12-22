//  header block begin

// /usr/include/qt/QtNetwork/qsslconfiguration.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslconfiguration.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslConfiguration is pure virtual: false false
// QSslConfiguration has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslConfiguration_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslConfiguration_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslConfiguration_t qt_meta_stringdata_MyQSslConfiguration = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSslConfiguration"
  },
  "MyQSslConfiguration"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslConfiguration[] = {
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
class Q_DECL_EXPORT MyQSslConfiguration : public QSslConfiguration {
public:
  virtual ~MyQSslConfiguration() {}
// void QSslConfiguration()
MyQSslConfiguration() : QSslConfiguration() {}
// void QSslConfiguration(const QSslConfiguration &)
MyQSslConfiguration(const QSslConfiguration & other) : QSslConfiguration(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslconfiguration(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:85
// [-2] void QSslConfiguration() 
// (10)qm57191989 (26)_ZN17QSslConfigurationC2Ev
/*void* qm57191989()*/{
  ;
  this_ =  new QSslConfiguration();
  this_ =  new MyQSslConfiguration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:86
// [-2] void QSslConfiguration(const QSslConfiguration &) 
// (12)qm2547097309 (29)_ZN17QSslConfigurationC2ERKS_
/*void* qm2547097309(const QSslConfiguration & other)*/{
  const QSslConfiguration & other = *(const QSslConfiguration *)this_;
  this_ =  new QSslConfiguration(other);
  this_ =  new MyQSslConfiguration(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:88
// [8] QSslConfiguration & operator=(QSslConfiguration &&) 
// (12)qm2101885923 (28)_ZN17QSslConfigurationaSEOS_
//static
/*void qm2101885923(QSslConfiguration && other)*/ {
  QSslConfiguration && other =  static_cast<QSslConfiguration &&>(*(QSslConfiguration *)this_);
  (void) ((QSslConfiguration*)this_)->operator=(other);
  // auto xptr = (QSslConfiguration & (QSslConfiguration::*)(QSslConfiguration&&) ) &QSslConfiguration::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:91
// [-2] void swap(QSslConfiguration &) 
// (12)qm1862696285 (31)_ZN17QSslConfiguration4swapERS_
//static
/*void qm1862696285(QSslConfiguration & other)*/ {
  QSslConfiguration & other = *(QSslConfiguration *)this_;
  (void) ((QSslConfiguration*)this_)->swap(other);
   auto xptr = (void (QSslConfiguration::*)(QSslConfiguration&) ) &QSslConfiguration::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:95
// [1] bool operator!=(const QSslConfiguration &) const
// (12)qm3761608314 (30)_ZNK17QSslConfigurationneERKS_
//static
/*void qm3761608314(const QSslConfiguration & other)*/ {
  const QSslConfiguration & other = *(const QSslConfiguration *)this_;
  (void) ((QSslConfiguration*)this_)->operator!=(other);
  // auto xptr = (bool (QSslConfiguration::*)(QSslConfiguration const&) const ) &QSslConfiguration::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSslConfigurationD2Ev(void *this_)*/ {
  delete (QSslConfiguration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslconfiguration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
