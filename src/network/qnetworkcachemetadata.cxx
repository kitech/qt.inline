//  header block begin

// /usr/include/qt/QtNetwork/qabstractnetworkcache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractnetworkcache.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCacheMetaData is pure virtual: false false
// QNetworkCacheMetaData has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkCacheMetaData_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkCacheMetaData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkCacheMetaData_t qt_meta_stringdata_MyQNetworkCacheMetaData = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQNetworkCacheMetaData"
  },
  "MyQNetworkCacheMetaData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkCacheMetaData[] = {
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
class Q_DECL_EXPORT MyQNetworkCacheMetaData : public QNetworkCacheMetaData {
public:
  virtual ~MyQNetworkCacheMetaData() {}
// void QNetworkCacheMetaData()
MyQNetworkCacheMetaData() : QNetworkCacheMetaData() {}
// void QNetworkCacheMetaData(const QNetworkCacheMetaData &)
MyQNetworkCacheMetaData(const QNetworkCacheMetaData & other) : QNetworkCacheMetaData(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkcachemetadata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:70
// [8] QNetworkCacheMetaData & operator=(QNetworkCacheMetaData &&) 
// (12)qm1548685607 (32)_ZN21QNetworkCacheMetaDataaSEOS_
//static
/*void qm1548685607(QNetworkCacheMetaData && other)*/ {
  QNetworkCacheMetaData && other =  static_cast<QNetworkCacheMetaData &&>(*(QNetworkCacheMetaData *)this_);
  (void) ((QNetworkCacheMetaData*)this_)->operator=(other);
  // auto xptr = (QNetworkCacheMetaData & (QNetworkCacheMetaData::*)(QNetworkCacheMetaData&&) ) &QNetworkCacheMetaData::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:73
// [-2] void swap(QNetworkCacheMetaData &) 
// (11)qm145693291 (35)_ZN21QNetworkCacheMetaData4swapERS_
//static
/*void qm145693291(QNetworkCacheMetaData & other)*/ {
  QNetworkCacheMetaData & other = *(QNetworkCacheMetaData *)this_;
  (void) ((QNetworkCacheMetaData*)this_)->swap(other);
   auto xptr = (void (QNetworkCacheMetaData::*)(QNetworkCacheMetaData&) ) &QNetworkCacheMetaData::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:77
// [1] bool operator!=(const QNetworkCacheMetaData &) const
// (12)qm2281964255 (34)_ZNK21QNetworkCacheMetaDataneERKS_
//static
/*void qm2281964255(const QNetworkCacheMetaData & other)*/ {
  const QNetworkCacheMetaData & other = *(const QNetworkCacheMetaData *)this_;
  (void) ((QNetworkCacheMetaData*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkCacheMetaData::*)(QNetworkCacheMetaData const&) const ) &QNetworkCacheMetaData::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QNetworkCacheMetaDataD2Ev(void *this_)*/ {
  delete (QNetworkCacheMetaData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkcachemetadata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
