//  header block begin

// since 0x050000
// /usr/include/qt/QtCore/qlogging.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlogging.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageLogger is pure virtual: false
// QMessageLogger has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMessageLogger_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMessageLogger_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMessageLogger_t qt_meta_stringdata_MyQMessageLogger = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQMessageLogger"
  },
  "MyQMessageLogger"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMessageLogger[] = {
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
class Q_DECL_EXPORT MyQMessageLogger : public QMessageLogger {
public:
  virtual ~MyQMessageLogger() {}
// void QMessageLogger()
MyQMessageLogger() : QMessageLogger() {}
// void QMessageLogger(const char *, int, const char *)
MyQMessageLogger(const char * file, int line, const char * function) : QMessageLogger(file, line, function) {}
// void QMessageLogger(const char *, int, const char *, const char *)
MyQMessageLogger(const char * file, int line, const char * function, const char * category) : QMessageLogger(file, line, function, category) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:90
// [-2] void QMessageLogger()
extern "C" Q_DECL_EXPORT
void* C_ZN14QMessageLoggerC2Ev() {
  return  new QMessageLogger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:91
// [-2] void QMessageLogger(const char *, int, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMessageLoggerC2EPKciS1_(const char * file, int line, const char * function) {
  return  new QMessageLogger(file, line, function);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:93
// [-2] void QMessageLogger(const char *, int, const char *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMessageLoggerC2EPKciS1_S1_(const char * file, int line, const char * function, const char * category) {
  return  new QMessageLogger(file, line, function, category);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:96
// [-2] void debug(const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger5debugEPKcz(void *this_, const char * msg) {
  ((QMessageLogger*)this_)->debug(msg);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:97
// [-2] void noDebug(const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger7noDebugEPKcz(void *this_, const char * arg0) {
  ((QMessageLogger*)this_)->noDebug(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:99
// [-2] void info(const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger4infoEPKcz(void *this_, const char * msg) {
  ((QMessageLogger*)this_)->info(msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:101
// [-2] void warning(const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger7warningEPKcz(void *this_, const char * msg) {
  ((QMessageLogger*)this_)->warning(msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:103
// [-2] void critical(const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger8criticalEPKcz(void *this_, const char * msg) {
  ((QMessageLogger*)this_)->critical(msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:107
// [-2] void debug(const QLoggingCategory &, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger5debugERK16QLoggingCategoryPKcz(void *this_, QLoggingCategory* cat, const char * msg) {
  ((QMessageLogger*)this_)->debug(*cat, msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:108
// [-2] void debug(QMessageLogger::CategoryFunction, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger5debugEPFRK16QLoggingCategoryvEPKcz(void *this_, QMessageLogger::CategoryFunction catFunc, const char * msg) {
  ((QMessageLogger*)this_)->debug(catFunc, msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:109
// [-2] void info(const QLoggingCategory &, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger4infoERK16QLoggingCategoryPKcz(void *this_, QLoggingCategory* cat, const char * msg) {
  ((QMessageLogger*)this_)->info(*cat, msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:110
// [-2] void info(QMessageLogger::CategoryFunction, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger4infoEPFRK16QLoggingCategoryvEPKcz(void *this_, QMessageLogger::CategoryFunction catFunc, const char * msg) {
  ((QMessageLogger*)this_)->info(catFunc, msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:112
// [-2] void warning(const QLoggingCategory &, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger7warningERK16QLoggingCategoryPKcz(void *this_, QLoggingCategory* cat, const char * msg) {
  ((QMessageLogger*)this_)->warning(*cat, msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:114
// [-2] void warning(QMessageLogger::CategoryFunction, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger7warningEPFRK16QLoggingCategoryvEPKcz(void *this_, QMessageLogger::CategoryFunction catFunc, const char * msg) {
  ((QMessageLogger*)this_)->warning(catFunc, msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:116
// [-2] void critical(const QLoggingCategory &, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger8criticalERK16QLoggingCategoryPKcz(void *this_, QLoggingCategory* cat, const char * msg) {
  ((QMessageLogger*)this_)->critical(*cat, msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:118
// [-2] void critical(QMessageLogger::CategoryFunction, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger8criticalEPFRK16QLoggingCategoryvEPKcz(void *this_, QMessageLogger::CategoryFunction catFunc, const char * msg) {
  ((QMessageLogger*)this_)->critical(catFunc, msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:124
// [-2] void fatal(const char *, ...)
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger5fatalEPKcz(void *this_, const char * msg) {
  ((QMessageLogger*)this_)->fatal(msg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:127
// [8] QDebug debug()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger5debugEv(void *this_) {
  auto rv = ((QMessageLogger*)this_)->debug();
return new QDebug(rv);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qlogging.h:128
// [8] QDebug debug(const QLoggingCategory &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger5debugERK16QLoggingCategory(void *this_, QLoggingCategory* cat) {
  auto rv = ((QMessageLogger*)this_)->debug(*cat);
return new QDebug(rv);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qlogging.h:129
// [8] QDebug debug(QMessageLogger::CategoryFunction)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger5debugEPFRK16QLoggingCategoryvE(void *this_, QMessageLogger::CategoryFunction catFunc) {
  auto rv = ((QMessageLogger*)this_)->debug(catFunc);
return new QDebug(rv);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qlogging.h:130
// [8] QDebug info()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger4infoEv(void *this_) {
  auto rv = ((QMessageLogger*)this_)->info();
return new QDebug(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qlogging.h:131
// [8] QDebug info(const QLoggingCategory &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger4infoERK16QLoggingCategory(void *this_, QLoggingCategory* cat) {
  auto rv = ((QMessageLogger*)this_)->info(*cat);
return new QDebug(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qlogging.h:132
// [8] QDebug info(QMessageLogger::CategoryFunction)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger4infoEPFRK16QLoggingCategoryvE(void *this_, QMessageLogger::CategoryFunction catFunc) {
  auto rv = ((QMessageLogger*)this_)->info(catFunc);
return new QDebug(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:133
// [8] QDebug warning()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger7warningEv(void *this_) {
  auto rv = ((QMessageLogger*)this_)->warning();
return new QDebug(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:134
// [8] QDebug warning(const QLoggingCategory &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger7warningERK16QLoggingCategory(void *this_, QLoggingCategory* cat) {
  auto rv = ((QMessageLogger*)this_)->warning(*cat);
return new QDebug(rv);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qlogging.h:135
// [8] QDebug warning(QMessageLogger::CategoryFunction)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger7warningEPFRK16QLoggingCategoryvE(void *this_, QMessageLogger::CategoryFunction catFunc) {
  auto rv = ((QMessageLogger*)this_)->warning(catFunc);
return new QDebug(rv);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:136
// [8] QDebug critical()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger8criticalEv(void *this_) {
  auto rv = ((QMessageLogger*)this_)->critical();
return new QDebug(rv);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qlogging.h:137
// [8] QDebug critical(const QLoggingCategory &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger8criticalERK16QLoggingCategory(void *this_, QLoggingCategory* cat) {
  auto rv = ((QMessageLogger*)this_)->critical(*cat);
return new QDebug(rv);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qlogging.h:138
// [8] QDebug critical(QMessageLogger::CategoryFunction)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMessageLogger8criticalEPFRK16QLoggingCategoryvE(void *this_, QMessageLogger::CategoryFunction catFunc) {
  auto rv = ((QMessageLogger*)this_)->critical(catFunc);
return new QDebug(rv);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:140
// [1] QNoDebug noDebug()
extern "C" Q_DECL_EXPORT
void C_ZNK14QMessageLogger7noDebugEv(void *this_) {
  auto rv = ((QMessageLogger*)this_)->noDebug();
/*return rv;*/
}


extern "C" Q_DECL_EXPORT
void C_ZN14QMessageLoggerD2Ev(void *this_) {
  delete (QMessageLogger*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
