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


struct qt_meta_stringdata_MyQDir_t {
  QByteArrayData data[1];
  char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDir_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDir_t qt_meta_stringdata_MyQDir = {
   {
  QT_MOC_LITERAL(0, 0, 6), // "MyQDir"
  },
  "MyQDir"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDir[] = {
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
class Q_DECL_EXPORT MyQDir : public QDir {
public:
  virtual ~MyQDir() {}
// void QDir(const QDir &)
MyQDir(const QDir & arg0) : QDir(arg0) {}
// void QDir(const QString &)
MyQDir(const QString & path) : QDir(path) {}
// void QDir(const QString &, const QString &, QDir::SortFlags, QDir::Filters)
MyQDir(const QString & path, const QString & nameFilter, QFlags<QDir::SortFlag> sort, QFlags<QDir::Filter> filter) : QDir(path, nameFilter, sort, filter) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdir(void* this_) {
  uint64_t fnptrsumval = 0;

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
