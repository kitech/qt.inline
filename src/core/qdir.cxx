//  header block begin

// /usr/include/qt/QtCore/qdir.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdir.h>
#include <QtCore>
#include "callback_inherit.h"

// QDir is pure virtual: false false
// QDir has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdir(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:101
// [-2] void QDir(const QDir &) 
// (12)qm1134909571 (15)_ZN4QDirC2ERKS_
/*void* qm1134909571(const QDir & arg0)*/{
  const QDir & arg0 = *(const QDir *)this_;
  this_ =  new QDir(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:102
// [-2] void QDir(const QString &) 
// (10)qm94526033 (21)_ZN4QDirC2ERK7QString
/*void* qm94526033(const QString & path)*/{
  const QString & path = *(const QString *)this_;
  this_ =  new QDir(path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:103
// [-2] void QDir(const QString &, const QString &, QDir::SortFlags, QDir::Filters) 
// (12)qm3822012793 (62)_ZN4QDirC2ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE
/*void* qm3822012793(const QString & path, const QString & nameFilter, QFlags<QDir::SortFlag> sort, QFlags<QDir::Filter> filter)*/{
  const QString & path = *(const QString *)this_; const QString & nameFilter = *(const QString *)this_; QFlags<QDir::SortFlag> sort = *(QFlags<QDir::SortFlag>*)this_; QFlags<QDir::Filter> filter = *(QFlags<QDir::Filter>*)this_;
  this_ =  new QDir(path, nameFilter, sort, filter);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:112
// [8] QDir & operator=(QDir &&) 
// (12)qm2998830976 (14)_ZN4QDiraSEOS_
//static
/*void qm2998830976(QDir && other)*/ {
  QDir && other =  static_cast<QDir &&>(*(QDir *)this_);
  (void) ((QDir*)this_)->operator=(other);
  // auto xptr = (QDir & (QDir::*)(QDir&&) ) &QDir::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:114
// [-2] void swap(QDir &) 
// (11)qm960085622 (17)_ZN4QDir4swapERS_
//static
/*void qm960085622(QDir & other)*/ {
  QDir & other = *(QDir *)this_;
  (void) ((QDir*)this_)->swap(other);
   auto xptr = (void (QDir::*)(QDir&) ) &QDir::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:177
// [1] bool isAbsolutePath(const QString &) 
// (12)qm1252128851 (35)_ZN4QDir14isAbsolutePathERK7QString
//static
/*void qm1252128851(const QString & path)*/ {
  const QString & path = *(const QString *)this_;
  (void) QDir::isAbsolutePath(path);
   auto xptr = (bool (*)(QString const&) ) &QDir::isAbsolutePath;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:179
// [1] bool isAbsolute() const
// (12)qm2014337073 (23)_ZNK4QDir10isAbsoluteEv
//static
/*void qm2014337073()*/ {
  ;
  (void) ((QDir*)this_)->isAbsolute();
   auto xptr = (bool (QDir::*)() const ) &QDir::isAbsolute;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:183
// [1] bool operator!=(const QDir &) const
// (12)qm3492372883 (16)_ZNK4QDirneERKS_
//static
/*void qm3492372883(const QDir & dir)*/ {
  const QDir & dir = *(const QDir *)this_;
  (void) ((QDir*)this_)->operator!=(dir);
  // auto xptr = (bool (QDir::*)(QDir const&) const ) &QDir::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:191
// [2] QChar listSeparator() 
// (12)qm3765795709 (25)_ZN4QDir13listSeparatorEv
//static
/*void qm3765795709()*/ {
  ;
  (void) QDir::listSeparator();
   auto xptr = (QChar (*)() ) &QDir::listSeparator;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:203
// [8] QDir current() 
// (11)qm973393351 (18)_ZN4QDir7currentEv
//static
/*void qm973393351()*/ {
  ;
  (void) QDir::current();
   auto xptr = (QDir (*)() ) &QDir::current;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:206
// [8] QDir home() 
// (12)qm2294219956 (15)_ZN4QDir4homeEv
//static
/*void qm2294219956()*/ {
  ;
  (void) QDir::home();
   auto xptr = (QDir (*)() ) &QDir::home;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:208
// [8] QDir root() 
// (12)qm2636063877 (15)_ZN4QDir4rootEv
//static
/*void qm2636063877()*/ {
  ;
  (void) QDir::root();
   auto xptr = (QDir (*)() ) &QDir::root;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:210
// [8] QDir temp() 
// (12)qm2901852014 (15)_ZN4QDir4tempEv
//static
/*void qm2901852014()*/ {
  ;
  (void) QDir::temp();
   auto xptr = (QDir (*)() ) &QDir::temp;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN4QDirD2Ev(void *this_)*/ {
  delete (QDir*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdir
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
