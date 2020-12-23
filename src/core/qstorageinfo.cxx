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
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:59
// [-2] void QStorageInfo(const QString &) 
// (12)qm3698607684 (30)_ZN12QStorageInfoC2ERK7QString
/*void* qm3698607684(const QString & path)*/{
  const QString & path = *(const QString *)this_;
  this_ =  new QStorageInfo(path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:60
// [-2] void QStorageInfo(const QDir &) 
// (12)qm3738287248 (27)_ZN12QStorageInfoC2ERK4QDir
/*void* qm3738287248(const QDir & dir)*/{
  const QDir & dir = *(const QDir *)this_;
  this_ =  new QStorageInfo(dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:61
// [-2] void QStorageInfo(const QStorageInfo &) 
// (11)qm909568657 (24)_ZN12QStorageInfoC2ERKS_
/*void* qm909568657(const QStorageInfo & other)*/{
  const QStorageInfo & other = *(const QStorageInfo *)this_;
  this_ =  new QStorageInfo(other);
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
