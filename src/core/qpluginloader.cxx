//  header block begin

// /usr/include/qt/QtCore/qpluginloader.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpluginloader.h>
#include <QtCore>
#include "callback_inherit.h"

// QPluginLoader is pure virtual: false false
// QPluginLoader has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpluginloader(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm3493844772 (29)_ZN13QPluginLoader2trEPKcS1_i
//static
/*void qm3493844772(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QPluginLoader::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QPluginLoader::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:62
// [-2] void QPluginLoader(QObject *) 
// (12)qm1851998160 (30)_ZN13QPluginLoaderC2EP7QObject
/*void* qm1851998160(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QPluginLoader(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:63
// [-2] void QPluginLoader(const QString &, QObject *) 
// (12)qm2579535172 (40)_ZN13QPluginLoaderC2ERK7QStringP7QObject
/*void* qm2579535172(const QString & fileName, QObject * parent)*/{
  const QString & fileName = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QPluginLoader(fileName, parent);
}


/*void C_ZN13QPluginLoaderD2Ev(void *this_)*/ {
  delete (QPluginLoader*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpluginloader
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
