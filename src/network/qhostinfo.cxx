//  header block begin

// /usr/include/qt/QtNetwork/qhostinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhostinfo.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHostInfo is pure virtual: false false
// QHostInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHostInfo_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHostInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHostInfo_t qt_meta_stringdata_MyQHostInfo = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQHostInfo"
  },
  "MyQHostInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHostInfo[] = {
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
class Q_DECL_EXPORT MyQHostInfo : public QHostInfo {
public:
  virtual ~MyQHostInfo() {}
// void QHostInfo(int)
MyQHostInfo(int lookupId) : QHostInfo(lookupId) {}
// void QHostInfo(const QHostInfo &)
MyQHostInfo(const QHostInfo & d) : QHostInfo(d) {}
// void QHostInfo(QHostInfo &&)
MyQHostInfo(QHostInfo && other) : QHostInfo(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhostinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:65
// [-2] void QHostInfo(QHostInfo &&) 
// (12)qm1917733984 (19)_ZN9QHostInfoC2EOS_
/*void* qm1917733984(QHostInfo && other)*/{
  QHostInfo && other =  static_cast<QHostInfo &&>(*(QHostInfo *)this_);
  this_ =  new QHostInfo(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:67
// [8] QHostInfo & operator=(QHostInfo &&) 
// (12)qm2625156768 (19)_ZN9QHostInfoaSEOS_
//static
/*void qm2625156768(QHostInfo && other)*/ {
  QHostInfo && other =  static_cast<QHostInfo &&>(*(QHostInfo *)this_);
  (void) ((QHostInfo*)this_)->operator=(other);
  // auto xptr = (QHostInfo & (QHostInfo::*)(QHostInfo&&) ) &QHostInfo::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:70
// [-2] void swap(QHostInfo &) 
// (12)qm3039729807 (22)_ZN9QHostInfo4swapERS_
//static
/*void qm3039729807(QHostInfo & other)*/ {
  QHostInfo & other = *(QHostInfo *)this_;
  (void) ((QHostInfo*)this_)->swap(other);
   auto xptr = (void (QHostInfo::*)(QHostInfo&) ) &QHostInfo::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QHostInfoD2Ev(void *this_)*/ {
  delete (QHostInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhostinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
