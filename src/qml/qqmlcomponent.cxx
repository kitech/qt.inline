//  header block begin

// /usr/include/qt/QtQml/qqmlcomponent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlcomponent.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlComponent is pure virtual: false false
// QQmlComponent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlcomponent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:67
// [8] QString tr(const char *, const char *, int) 
// (12)qm3816445801 (29)_ZN13QQmlComponent2trEPKcS1_i
//static
/*void qm3816445801(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlComponent::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlComponent::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:81
// [-2] void QQmlComponent(QObject *) 
// (12)qm1715292029 (30)_ZN13QQmlComponentC2EP7QObject
/*void* qm1715292029(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:82
// [-2] void QQmlComponent(QQmlEngine *, QObject *) 
// (12)qm1563286675 (43)_ZN13QQmlComponentC2EP10QQmlEngineP7QObject
/*void* qm1563286675(QQmlEngine * arg0, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:83
// [-2] void QQmlComponent(QQmlEngine *, const QString &, QObject *) 
// (12)qm1248525273 (53)_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringP7QObject
/*void* qm1248525273(QQmlEngine * arg0, const QString & fileName, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QString & fileName = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, fileName, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:84
// [-2] void QQmlComponent(QQmlEngine *, const QString &, QQmlComponent::CompilationMode, QObject *) 
// (12)qm4056792889 (74)_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringNS_15CompilationModeEP7QObject
/*void* qm4056792889(QQmlEngine * arg0, const QString & fileName, QQmlComponent::CompilationMode mode, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QString & fileName = *(const QString *)this_; QQmlComponent::CompilationMode mode = *(QQmlComponent::CompilationMode*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, fileName, mode, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:85
// [-2] void QQmlComponent(QQmlEngine *, const QUrl &, QObject *) 
// (11)qm122571752 (50)_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlP7QObject
/*void* qm122571752(QQmlEngine * arg0, const QUrl & url, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QUrl & url = *(const QUrl *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, url, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:86
// [-2] void QQmlComponent(QQmlEngine *, const QUrl &, QQmlComponent::CompilationMode, QObject *) 
// (12)qm2772071660 (71)_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlNS_15CompilationModeEP7QObject
/*void* qm2772071660(QQmlEngine * arg0, const QUrl & url, QQmlComponent::CompilationMode mode, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QUrl & url = *(const QUrl *)this_; QQmlComponent::CompilationMode mode = *(QQmlComponent::CompilationMode*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, url, mode, parent);
}


/*void C_ZN13QQmlComponentD2Ev(void *this_)*/ {
  delete (QQmlComponent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlcomponent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
