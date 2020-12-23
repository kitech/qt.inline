//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(commandlineparser)
// /usr/include/qt/QtCore/qcommandlineoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcommandlineoption.h>
#include <QtCore>
#include "callback_inherit.h"

// QCommandLineOption is pure virtual: false false
// QCommandLineOption has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcommandlineoption(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:61
// [-2] void QCommandLineOption(const QString &) 
// (12)qm2018568397 (36)_ZN18QCommandLineOptionC2ERK7QString
/*void* qm2018568397(const QString & name)*/{
  const QString & name = *(const QString *)this_;
  this_ =  new QCommandLineOption(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:62
// [-2] void QCommandLineOption(const QStringList &) 
// (12)qm1822647685 (41)_ZN18QCommandLineOptionC2ERK11QStringList
/*void* qm1822647685(const QStringList & names)*/{
  const QStringList & names = *(const QStringList *)this_;
  this_ =  new QCommandLineOption(names);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:63
// [-2] void QCommandLineOption(const QString &, const QString &, const QString &, const QString &) 
// (12)qm3631291941 (45)_ZN18QCommandLineOptionC2ERK7QStringS2_S2_S2_
/*void* qm3631291941(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue)*/{
  const QString & name = *(const QString *)this_; const QString & description = *(const QString *)this_; const QString & valueName = *(const QString *)this_; const QString & defaultValue = *(const QString *)this_;
  this_ =  new QCommandLineOption(name, description, valueName, defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:66
// [-2] void QCommandLineOption(const QStringList &, const QString &, const QString &, const QString &) 
// (12)qm2547001035 (57)_ZN18QCommandLineOptionC2ERK11QStringListRK7QStringS5_S5_
/*void* qm2547001035(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue)*/{
  const QStringList & names = *(const QStringList *)this_; const QString & description = *(const QString *)this_; const QString & valueName = *(const QString *)this_; const QString & defaultValue = *(const QString *)this_;
  this_ =  new QCommandLineOption(names, description, valueName, defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:69
// [-2] void QCommandLineOption(const QCommandLineOption &) 
// (12)qm1154716957 (30)_ZN18QCommandLineOptionC2ERKS_
/*void* qm1154716957(const QCommandLineOption & other)*/{
  const QCommandLineOption & other = *(const QCommandLineOption *)this_;
  this_ =  new QCommandLineOption(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:74
// [8] QCommandLineOption & operator=(QCommandLineOption &&) 
// (12)qm2847342724 (29)_ZN18QCommandLineOptionaSEOS_
//static
/*void qm2847342724(QCommandLineOption && other)*/ {
  QCommandLineOption && other =  static_cast<QCommandLineOption &&>(*(QCommandLineOption *)this_);
  (void) ((QCommandLineOption*)this_)->operator=(other);
  // auto xptr = (QCommandLineOption & (QCommandLineOption::*)(QCommandLineOption&&) ) &QCommandLineOption::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:76
// [-2] void swap(QCommandLineOption &) 
// (11)qm858693785 (32)_ZN18QCommandLineOption4swapERS_
//static
/*void qm858693785(QCommandLineOption & other)*/ {
  QCommandLineOption & other = *(QCommandLineOption *)this_;
  (void) ((QCommandLineOption*)this_)->swap(other);
   auto xptr = (void (QCommandLineOption::*)(QCommandLineOption&) ) &QCommandLineOption::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QCommandLineOptionD2Ev(void *this_)*/ {
  delete (QCommandLineOption*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcommandlineoption
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(commandlineparser)
#endif // #ifndef QT_MINIMAL
//  footer block end
