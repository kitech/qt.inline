//  header block begin

// /usr/include/qt/QtCore/qstorageinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstorageinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QStorageInfo is pure virtual: false false
// QStorageInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStorageInfo_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStorageInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStorageInfo_t qt_meta_stringdata_MyQStorageInfo = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQStorageInfo"
  },
  "MyQStorageInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStorageInfo[] = {
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
class Q_DECL_EXPORT MyQStorageInfo : public QStorageInfo {
public:
  virtual ~MyQStorageInfo() {}
// void QStorageInfo()
MyQStorageInfo() : QStorageInfo() {}
// void QStorageInfo(const QString &)
MyQStorageInfo(const QString & path) : QStorageInfo(path) {}
// void QStorageInfo(const QDir &)
MyQStorageInfo(const QDir & dir) : QStorageInfo(dir) {}
// void QStorageInfo(const QStorageInfo &)
MyQStorageInfo(const QStorageInfo & other) : QStorageInfo(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstorageinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:58
// [-2] void QStorageInfo() 
// (12)qm1978666937 (21)_ZN12QStorageInfoC2Ev
/*void* qm1978666937()*/{
  ;
  this_ =  new QStorageInfo();
  this_ =  new MyQStorageInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:59
// [-2] void QStorageInfo(const QString &) 
// (12)qm3698607684 (30)_ZN12QStorageInfoC2ERK7QString
/*void* qm3698607684(const QString & path)*/{
  const QString & path = *(const QString *)this_;
  this_ =  new QStorageInfo(path);
  this_ =  new MyQStorageInfo(path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:60
// [-2] void QStorageInfo(const QDir &) 
// (12)qm3738287248 (27)_ZN12QStorageInfoC2ERK4QDir
/*void* qm3738287248(const QDir & dir)*/{
  const QDir & dir = *(const QDir *)this_;
  this_ =  new QStorageInfo(dir);
  this_ =  new MyQStorageInfo(dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:61
// [-2] void QStorageInfo(const QStorageInfo &) 
// (11)qm909568657 (24)_ZN12QStorageInfoC2ERKS_
/*void* qm909568657(const QStorageInfo & other)*/{
  const QStorageInfo & other = *(const QStorageInfo *)this_;
  this_ =  new QStorageInfo(other);
  this_ =  new MyQStorageInfo(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:65
// [8] QStorageInfo & operator=(QStorageInfo &&) 
// (12)qm1269762370 (23)_ZN12QStorageInfoaSEOS_
//static
/*void qm1269762370(QStorageInfo && other)*/ {
  QStorageInfo && other =  static_cast<QStorageInfo &&>(*(QStorageInfo *)this_);
  (void) ((QStorageInfo*)this_)->operator=(other);
  // auto xptr = (QStorageInfo & (QStorageInfo::*)(QStorageInfo&&) ) &QStorageInfo::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:67
// [-2] void swap(QStorageInfo &) 
// (12)qm1688365462 (26)_ZN12QStorageInfo4swapERS_
//static
/*void qm1688365462(QStorageInfo & other)*/ {
  QStorageInfo & other = *(QStorageInfo *)this_;
  (void) ((QStorageInfo*)this_)->swap(other);
   auto xptr = (void (QStorageInfo::*)(QStorageInfo&) ) &QStorageInfo::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:84
// [1] bool isRoot() const
// (12)qm1095614314 (27)_ZNK12QStorageInfo6isRootEv
//static
/*void qm1095614314()*/ {
  ;
  (void) ((QStorageInfo*)this_)->isRoot();
   auto xptr = (bool (QStorageInfo::*)() const ) &QStorageInfo::isRoot;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QStorageInfoD2Ev(void *this_)*/ {
  delete (QStorageInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstorageinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
