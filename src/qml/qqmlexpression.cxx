//  header block begin

// /usr/include/qt/QtQml/qqmlexpression.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlexpression.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlExpression is pure virtual: false false
// QQmlExpression has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlexpression(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm1344201900 (30)_ZN14QQmlExpression2trEPKcS1_i
//static
/*void qm1344201900(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlExpression::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlExpression::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:62
// [-2] void QQmlExpression() 
// (11)qm823953404 (23)_ZN14QQmlExpressionC2Ev
/*void* qm823953404()*/{
  ;
  this_ =  new QQmlExpression();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:63
// [-2] void QQmlExpression(QQmlContext *, QObject *, const QString &, QObject *) 
// (11)qm155982464 (58)_ZN14QQmlExpressionC2EP11QQmlContextP7QObjectRK7QStringS3_
/*void* qm155982464(QQmlContext * arg0, QObject * arg1, const QString & arg2, QObject * arg3)*/{
  QQmlContext * arg0 = *(QQmlContext **)this_; QObject * arg1 = *(QObject **)this_; const QString & arg2 = *(const QString *)this_; QObject * arg3 = *(QObject **)this_;
  this_ =  new QQmlExpression(arg0, arg1, arg2, arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:64
// [-2] void QQmlExpression(const QQmlScriptString &, QQmlContext *, QObject *, QObject *) 
// (12)qm2884495650 (68)_ZN14QQmlExpressionC2ERK16QQmlScriptStringP11QQmlContextP7QObjectS6_
/*void* qm2884495650(const QQmlScriptString & arg0, QQmlContext * arg1, QObject * arg2, QObject * arg3)*/{
  const QQmlScriptString & arg0 = *(const QQmlScriptString *)this_; QQmlContext * arg1 = *(QQmlContext **)this_; QObject * arg2 = *(QObject **)this_; QObject * arg3 = *(QObject **)this_;
  this_ =  new QQmlExpression(arg0, arg1, arg2, arg3);
}


/*void C_ZN14QQmlExpressionD2Ev(void *this_)*/ {
  delete (QQmlExpression*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlexpression
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
