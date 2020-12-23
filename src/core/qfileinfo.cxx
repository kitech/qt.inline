//  header block begin

// /usr/include/qt/QtCore/qfileinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfileinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileInfo is pure virtual: false false
// QFileInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfileinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:60
// [-2] void QFileInfo(QFileInfoPrivate *) 
// (12)qm3841383659 (35)_ZN9QFileInfoC2EP16QFileInfoPrivate
/*void* qm3841383659(QFileInfoPrivate * d)*/{
  QFileInfoPrivate * d = *(QFileInfoPrivate **)this_;
  this_ =  new QFileInfo(d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:62
// [-2] void QFileInfo() 
// (11)qm350137304 (17)_ZN9QFileInfoC2Ev
/*void* qm350137304()*/{
  ;
  this_ =  new QFileInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:63
// [-2] void QFileInfo(const QString &) 
// (12)qm3846284523 (26)_ZN9QFileInfoC2ERK7QString
/*void* qm3846284523(const QString & file)*/{
  const QString & file = *(const QString *)this_;
  this_ =  new QFileInfo(file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:64
// [-2] void QFileInfo(const QFile &) 
// (12)qm4164422137 (24)_ZN9QFileInfoC2ERK5QFile
/*void* qm4164422137(const QFile & file)*/{
  const QFile & file = *(const QFile *)this_;
  this_ =  new QFileInfo(file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:65
// [-2] void QFileInfo(const QDir &, const QString &) 
// (12)qm1894457771 (33)_ZN9QFileInfoC2ERK4QDirRK7QString
/*void* qm1894457771(const QDir & dir, const QString & file)*/{
  const QDir & dir = *(const QDir *)this_; const QString & file = *(const QString *)this_;
  this_ =  new QFileInfo(dir, file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:66
// [-2] void QFileInfo(const QFileInfo &) 
// (12)qm1771978693 (20)_ZN9QFileInfoC2ERKS_
/*void* qm1771978693(const QFileInfo & fileinfo)*/{
  const QFileInfo & fileinfo = *(const QFileInfo *)this_;
  this_ =  new QFileInfo(fileinfo);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:70
// [8] QFileInfo & operator=(QFileInfo &&) 
// (12)qm3874641275 (19)_ZN9QFileInfoaSEOS_
//static
/*void qm3874641275(QFileInfo && other)*/ {
  QFileInfo && other =  static_cast<QFileInfo &&>(*(QFileInfo *)this_);
  (void) ((QFileInfo*)this_)->operator=(other);
  // auto xptr = (QFileInfo & (QFileInfo::*)(QFileInfo&&) ) &QFileInfo::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:72
// [-2] void swap(QFileInfo &) 
// (12)qm1288472629 (22)_ZN9QFileInfo4swapERS_
//static
/*void qm1288472629(QFileInfo & other)*/ {
  QFileInfo & other = *(QFileInfo *)this_;
  (void) ((QFileInfo*)this_)->swap(other);
   auto xptr = (void (QFileInfo::*)(QFileInfo&) ) &QFileInfo::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:76
// [1] bool operator!=(const QFileInfo &) const
// (12)qm1592022771 (21)_ZNK9QFileInfoneERKS_
//static
/*void qm1592022771(const QFileInfo & fileinfo)*/ {
  const QFileInfo & fileinfo = *(const QFileInfo *)this_;
  (void) ((QFileInfo*)this_)->operator!=(fileinfo);
  // auto xptr = (bool (QFileInfo::*)(QFileInfo const&) const ) &QFileInfo::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:108
// [1] bool isAbsolute() const
// (12)qm4141534883 (28)_ZNK9QFileInfo10isAbsoluteEv
//static
/*void qm4141534883()*/ {
  ;
  (void) ((QFileInfo*)this_)->isAbsolute();
   auto xptr = (bool (QFileInfo::*)() const ) &QFileInfo::isAbsolute;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QFileInfoD2Ev(void *this_)*/ {
  delete (QFileInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfileinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
