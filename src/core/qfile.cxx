//  header block begin

// /usr/include/qt/QtCore/qfile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfile.h>
#include <QtCore>
#include "callback_inherit.h"

// QFile is pure virtual: false false
// QFile has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfile(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm1054649961 (20)_ZN5QFile2trEPKcS1_i
//static
/*void qm1054649961(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QFile::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QFile::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:65
// [-2] void QFile() 
// (12)qm3708904495 (13)_ZN5QFileC2Ev
/*void* qm3708904495()*/{
  ;
  this_ =  new QFile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:66
// [-2] void QFile(const QString &) 
// (12)qm3101884221 (22)_ZN5QFileC2ERK7QString
/*void* qm3101884221(const QString & name)*/{
  const QString & name = *(const QString *)this_;
  this_ =  new QFile(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:68
// [-2] void QFile(QObject *) 
// (12)qm1726013828 (21)_ZN5QFileC2EP7QObject
/*void* qm1726013828(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QFile(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:69
// [-2] void QFile(const QString &, QObject *) 
// (11)qm463594883 (31)_ZN5QFileC2ERK7QStringP7QObject
/*void* qm463594883(const QString & name, QObject * parent)*/{
  const QString & name = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QFile(name, parent);
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:92
// [8] QByteArray encodeName(const QString &) 
// (12)qm1082916381 (32)_ZN5QFile10encodeNameERK7QString
//static
/*void qm1082916381(const QString & fileName)*/ {
  const QString & fileName = *(const QString *)this_;
  (void) QFile::encodeName(fileName);
   auto xptr = (QByteArray (*)(QString const&) ) &QFile::encodeName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:96
// [8] QString decodeName(const QByteArray &) 
// (11)qm649986585 (36)_ZN5QFile10decodeNameERK10QByteArray
//static
/*void qm649986585(const QByteArray & localFileName)*/ {
  const QByteArray & localFileName = *(const QByteArray *)this_;
  (void) QFile::decodeName(localFileName);
   auto xptr = (QString (*)(QByteArray const&) ) &QFile::decodeName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:100
// [8] QString decodeName(const char *) 
// (12)qm3565793526 (25)_ZN5QFile10decodeNameEPKc
//static
/*void qm3565793526(const char * localFileName)*/ {
  const char * localFileName = *(const char **)this_;
  (void) QFile::decodeName(localFileName);
   auto xptr = (QString (*)(char const*) ) &QFile::decodeName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QFileD2Ev(void *this_)*/ {
  delete (QFile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
