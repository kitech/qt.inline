//  header block begin

// /usr/include/qt/QtQml/qqmlproperty.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlproperty.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlProperty is pure virtual: false false
// QQmlProperty has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlproperty(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:71
// [-2] void QQmlProperty() 
// (11)qm836759996 (21)_ZN12QQmlPropertyC2Ev
/*void* qm836759996()*/{
  ;
  this_ =  new QQmlProperty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:74
// [-2] void QQmlProperty(QObject *) 
// (12)qm3168362007 (29)_ZN12QQmlPropertyC2EP7QObject
/*void* qm3168362007(QObject * arg0)*/{
  QObject * arg0 = *(QObject **)this_;
  this_ =  new QQmlProperty(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:75
// [-2] void QQmlProperty(QObject *, QQmlContext *) 
// (12)qm2990992838 (43)_ZN12QQmlPropertyC2EP7QObjectP11QQmlContext
/*void* qm2990992838(QObject * arg0, QQmlContext * arg1)*/{
  QObject * arg0 = *(QObject **)this_; QQmlContext * arg1 = *(QQmlContext **)this_;
  this_ =  new QQmlProperty(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:76
// [-2] void QQmlProperty(QObject *, QQmlEngine *) 
// (11)qm926892349 (42)_ZN12QQmlPropertyC2EP7QObjectP10QQmlEngine
/*void* qm926892349(QObject * arg0, QQmlEngine * arg1)*/{
  QObject * arg0 = *(QObject **)this_; QQmlEngine * arg1 = *(QQmlEngine **)this_;
  this_ =  new QQmlProperty(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:78
// [-2] void QQmlProperty(QObject *, const QString &) 
// (12)qm2712880404 (39)_ZN12QQmlPropertyC2EP7QObjectRK7QString
/*void* qm2712880404(QObject * arg0, const QString & arg1)*/{
  QObject * arg0 = *(QObject **)this_; const QString & arg1 = *(const QString *)this_;
  this_ =  new QQmlProperty(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:79
// [-2] void QQmlProperty(QObject *, const QString &, QQmlContext *) 
// (11)qm988732609 (53)_ZN12QQmlPropertyC2EP7QObjectRK7QStringP11QQmlContext
/*void* qm988732609(QObject * arg0, const QString & arg1, QQmlContext * arg2)*/{
  QObject * arg0 = *(QObject **)this_; const QString & arg1 = *(const QString *)this_; QQmlContext * arg2 = *(QQmlContext **)this_;
  this_ =  new QQmlProperty(arg0, arg1, arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:80
// [-2] void QQmlProperty(QObject *, const QString &, QQmlEngine *) 
// (12)qm2538905829 (52)_ZN12QQmlPropertyC2EP7QObjectRK7QStringP10QQmlEngine
/*void* qm2538905829(QObject * arg0, const QString & arg1, QQmlEngine * arg2)*/{
  QObject * arg0 = *(QObject **)this_; const QString & arg1 = *(const QString *)this_; QQmlEngine * arg2 = *(QQmlEngine **)this_;
  this_ =  new QQmlProperty(arg0, arg1, arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:82
// [-2] void QQmlProperty(const QQmlProperty &) 
// (11)qm286513492 (24)_ZN12QQmlPropertyC2ERKS_
/*void* qm286513492(const QQmlProperty & arg0)*/{
  const QQmlProperty & arg0 = *(const QQmlProperty *)this_;
  this_ =  new QQmlProperty(arg0);
}


/*void C_ZN12QQmlPropertyD2Ev(void *this_)*/ {
  delete (QQmlProperty*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlproperty
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
