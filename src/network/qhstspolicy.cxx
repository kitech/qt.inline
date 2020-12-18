//  header block begin

// /usr/include/qt/QtNetwork/qhstspolicy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhstspolicy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHstsPolicy is pure virtual: false false
// QHstsPolicy has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHstsPolicy_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHstsPolicy_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHstsPolicy_t qt_meta_stringdata_MyQHstsPolicy = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQHstsPolicy"
  },
  "MyQHstsPolicy"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHstsPolicy[] = {
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
class Q_DECL_EXPORT MyQHstsPolicy : public QHstsPolicy {
public:
  virtual ~MyQHstsPolicy() {}
// void QHstsPolicy()
MyQHstsPolicy() : QHstsPolicy() {}
// void QHstsPolicy(const QDateTime &, QHstsPolicy::PolicyFlags, const QString &, QUrl::ParsingMode)
MyQHstsPolicy(const QDateTime & expiry, QFlags<QHstsPolicy::PolicyFlag> flags, const QString & host, QUrl::ParsingMode mode) : QHstsPolicy(expiry, flags, host, mode) {}
// void QHstsPolicy(const QHstsPolicy &)
MyQHstsPolicy(const QHstsPolicy & rhs) : QHstsPolicy(rhs) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhstspolicy(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:68
// [8] QHstsPolicy & operator=(QHstsPolicy &&) 
// (12)qm2854728135 (22)_ZN11QHstsPolicyaSEOS_
//static
/*void qm2854728135(QHstsPolicy && other)*/ {
  QHstsPolicy && other =  static_cast<QHstsPolicy &&>(*(QHstsPolicy *)this_);
  (void) ((QHstsPolicy*)this_)->operator=(other);
  // auto xptr = (QHstsPolicy & (QHstsPolicy::*)(QHstsPolicy&&) ) &QHstsPolicy::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:71
// [-2] void swap(QHstsPolicy &) 
// (12)qm1277403070 (25)_ZN11QHstsPolicy4swapERS_
//static
/*void qm1277403070(QHstsPolicy & other)*/ {
  QHstsPolicy & other = *(QHstsPolicy *)this_;
  (void) ((QHstsPolicy*)this_)->swap(other);
   auto xptr = (void (QHstsPolicy::*)(QHstsPolicy&) ) &QHstsPolicy::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QHstsPolicyD2Ev(void *this_)*/ {
  delete (QHstsPolicy*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhstspolicy
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
