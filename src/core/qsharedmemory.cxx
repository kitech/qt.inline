//  header block begin

// /usr/include/qt/QtCore/qsharedmemory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsharedmemory.h>
#include <QtCore>
#include "callback_inherit.h"

// QSharedMemory is pure virtual: false false
// QSharedMemory has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsharedmemory(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:64
// [8] QString tr(const char *, const char *, int) 
// (12)qm1532502646 (29)_ZN13QSharedMemory2trEPKcS1_i
//static
/*void qm1532502646(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSharedMemory::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSharedMemory::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:89
// [-2] void QSharedMemory(QObject *) 
// (12)qm3951913213 (30)_ZN13QSharedMemoryC2EP7QObject
/*void* qm3951913213(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QSharedMemory(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:90
// [-2] void QSharedMemory(const QString &, QObject *) 
// (12)qm2032452509 (40)_ZN13QSharedMemoryC2ERK7QStringP7QObject
/*void* qm2032452509(const QString & key, QObject * parent)*/{
  const QString & key = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSharedMemory(key, parent);
}


/*void C_ZN13QSharedMemoryD2Ev(void *this_)*/ {
  delete (QSharedMemory*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsharedmemory
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
