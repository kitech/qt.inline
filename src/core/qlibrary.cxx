//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(library)
// /usr/include/qt/QtCore/qlibrary.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlibrary.h>
#include <QtCore>
#include "callback_inherit.h"

// QLibrary is pure virtual: false false
// QLibrary has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlibrary(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm3059253608 (23)_ZN8QLibrary2trEPKcS1_i
//static
/*void qm3059253608(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QLibrary::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QLibrary::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:68
// [-2] void QLibrary(QObject *) 
// (11)qm292508989 (24)_ZN8QLibraryC2EP7QObject
/*void* qm292508989(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QLibrary(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:69
// [-2] void QLibrary(const QString &, QObject *) 
// (12)qm3743329586 (34)_ZN8QLibraryC2ERK7QStringP7QObject
/*void* qm3743329586(const QString & fileName, QObject * parent)*/{
  const QString & fileName = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QLibrary(fileName, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:70
// [-2] void QLibrary(const QString &, int, QObject *) 
// (11)qm315403246 (35)_ZN8QLibraryC2ERK7QStringiP7QObject
/*void* qm315403246(const QString & fileName, int verNum, QObject * parent)*/{
  const QString & fileName = *(const QString *)this_; int verNum = *(int*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QLibrary(fileName, verNum, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:71
// [-2] void QLibrary(const QString &, const QString &, QObject *) 
// (12)qm2582016921 (37)_ZN8QLibraryC2ERK7QStringS2_P7QObject
/*void* qm2582016921(const QString & fileName, const QString & version, QObject * parent)*/{
  const QString & fileName = *(const QString *)this_; const QString & version = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QLibrary(fileName, version, parent);
}


/*void C_ZN8QLibraryD2Ev(void *this_)*/ {
  delete (QLibrary*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlibrary
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(library)
#endif // #ifndef QT_MINIMAL
//  footer block end
