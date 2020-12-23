//  header block begin

// /usr/include/qt/QtQml/qqmlapplicationengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlapplicationengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlApplicationEngine is pure virtual: false false
// QQmlApplicationEngine has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlapplicationengine(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:54
// [8] QString tr(const char *, const char *, int) 
// (11)qm409627374 (37)_ZN21QQmlApplicationEngine2trEPKcS1_i
//static
/*void qm409627374(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlApplicationEngine::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlApplicationEngine::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:56
// [-2] void QQmlApplicationEngine(QObject *) 
// (11)qm354042307 (38)_ZN21QQmlApplicationEngineC2EP7QObject
/*void* qm354042307(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QQmlApplicationEngine(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:57
// [-2] void QQmlApplicationEngine(const QUrl &, QObject *) 
// (12)qm3368203142 (45)_ZN21QQmlApplicationEngineC2ERK4QUrlP7QObject
/*void* qm3368203142(const QUrl & url, QObject * parent)*/{
  const QUrl & url = *(const QUrl *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlApplicationEngine(url, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:58
// [-2] void QQmlApplicationEngine(const QString &, QObject *) 
// (11)qm810072450 (48)_ZN21QQmlApplicationEngineC2ERK7QStringP7QObject
/*void* qm810072450(const QString & filePath, QObject * parent)*/{
  const QString & filePath = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlApplicationEngine(filePath, parent);
}


/*void C_ZN21QQmlApplicationEngineD2Ev(void *this_)*/ {
  delete (QQmlApplicationEngine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlapplicationengine
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
