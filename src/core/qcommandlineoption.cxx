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


struct qt_meta_stringdata_MyQCommandLineOption_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCommandLineOption_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCommandLineOption_t qt_meta_stringdata_MyQCommandLineOption = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQCommandLineOption"
  },
  "MyQCommandLineOption"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCommandLineOption[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQCommandLineOption : public QCommandLineOption {
public:
  virtual ~MyQCommandLineOption() {}
// void QCommandLineOption(const QString &)
MyQCommandLineOption(const QString & name) : QCommandLineOption(name) {}
// void QCommandLineOption(const QStringList &)
MyQCommandLineOption(const QStringList & names) : QCommandLineOption(names) {}
// void QCommandLineOption(const QString &, const QString &, const QString &, const QString &)
MyQCommandLineOption(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue) : QCommandLineOption(name, description, valueName, defaultValue) {}
// void QCommandLineOption(const QStringList &, const QString &, const QString &, const QString &)
MyQCommandLineOption(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue) : QCommandLineOption(names, description, valueName, defaultValue) {}
// void QCommandLineOption(const QCommandLineOption &)
MyQCommandLineOption(const QCommandLineOption & other) : QCommandLineOption(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcommandlineoption(void* this_) {
  uint64_t fnptrsumval = 0;

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
