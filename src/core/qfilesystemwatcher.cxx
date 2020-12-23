//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(filesystemwatcher)
// /usr/include/qt/QtCore/qfilesystemwatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfilesystemwatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileSystemWatcher is pure virtual: false false
// QFileSystemWatcher has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfilesystemwatcher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm2397733177 (34)_ZN18QFileSystemWatcher2trEPKcS1_i
//static
/*void qm2397733177(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QFileSystemWatcher::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QFileSystemWatcher::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:58
// [-2] void QFileSystemWatcher(QObject *) 
// (11)qm222004831 (35)_ZN18QFileSystemWatcherC2EP7QObject
/*void* qm222004831(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QFileSystemWatcher(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:59
// [-2] void QFileSystemWatcher(const QStringList &, QObject *) 
// (12)qm1149889208 (50)_ZN18QFileSystemWatcherC2ERK11QStringListP7QObject
/*void* qm1149889208(const QStringList & paths, QObject * parent)*/{
  const QStringList & paths = *(const QStringList *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QFileSystemWatcher(paths, parent);
}


/*void C_ZN18QFileSystemWatcherD2Ev(void *this_)*/ {
  delete (QFileSystemWatcher*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfilesystemwatcher
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(filesystemwatcher)
#endif // #ifndef QT_MINIMAL
//  footer block end
