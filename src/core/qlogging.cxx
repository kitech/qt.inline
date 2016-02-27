// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qlogging.h
// dst-file: /src/core/qlogging.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlogging.h>


#include <qdebug.h>
// <= header block end

// main block begin =>
void __keep_qlogging_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 61, column 22>
//   // proto:  void QMessageLogContext::QMessageLogContext(const char * fileName, int lineNumber, const char * functionName, const char * categoryName);
if (true) {
  auto f = [](const char * arg1, int arg2, const char * arg3, const char * arg4) {
    new QMessageLogContext(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 60, column 22>
//   // proto:  void QMessageLogContext::QMessageLogContext();
if (true) {
  auto f = []() {
    new QMessageLogContext();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 83, column 22>
//   // proto:  void QMessageLogger::QMessageLogger();
if (true) {
  auto f = []() {
    new QMessageLogger();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 84, column 22>
//   // proto:  void QMessageLogger::QMessageLogger(const char * file, int line, const char * function);
if (true) {
  auto f = [](const char * arg1, int arg2, const char * arg3) {
    new QMessageLogger(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 90, column 10>
//   // proto:  void QMessageLogger::noDebug(const char * );
if (true) {
  auto f = [](QMessageLogger flythis, const char * arg1) {
    ((QMessageLogger*)0)->noDebug(arg1);
    flythis.noDebug(arg1);
  };
  if (f == nullptr){}
}
// _ZNK14QMessageLogger7noDebugEPKcz noDebug(const char *, ...)
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 86, column 22>
//   // proto:  void QMessageLogger::QMessageLogger(const char * file, int line, const char * function, const char * category);
if (true) {
  auto f = [](const char * arg1, int arg2, const char * arg3, const char * arg4) {
    new QMessageLogger(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMessageLogContext_Class_Size()
{
  return sizeof(QMessageLogContext);
}

extern "C"
int QMessageLogger_Class_Size()
{
  return sizeof(QMessageLogger);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 61, column 22>
//   // proto:  void QMessageLogContext::QMessageLogContext(const char * fileName, int lineNumber, const char * functionName, const char * categoryName);
extern "C"
QMessageLogContext*
C_ZN18QMessageLogContextC2EPKciS1_S1_(const char * arg1,
int arg2,
const char * arg3,
const char * arg4) {
  auto ret = new QMessageLogContext(arg1, arg2, arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 64, column 10>
//   // proto:  void QMessageLogContext::copy(const QMessageLogContext & logContext);
// _ZN18QMessageLogContext4copyERKS_ copy(const class QMessageLogContext &)
extern "C"
void
C_ZN18QMessageLogContext4copyERKS_(void *qthis,
const QMessageLogContext* arg1) {
  ((QMessageLogContext*)qthis)->copy(*((const QMessageLogContext*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 60, column 22>
//   // proto:  void QMessageLogContext::QMessageLogContext();
extern "C"
QMessageLogContext*
C_ZN18QMessageLogContextC2Ev() {
  auto ret = new QMessageLogContext();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 100, column 10>
//   // proto:  void QMessageLogger::info(const QLoggingCategory & cat, const char * msg);
// _ZNK14QMessageLogger4infoERK16QLoggingCategoryPKcz info(const class QLoggingCategory &, const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger4infoERK16QLoggingCategoryPKcz(void *qthis,
const QLoggingCategory* arg1,
const char * arg2) {
  ((QMessageLogger*)qthis)->info(*((const QLoggingCategory*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 89, column 10>
//   // proto:  void QMessageLogger::debug(const char * msg);
// _ZNK14QMessageLogger5debugEPKcz debug(const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger5debugEPKcz(void *qthis,
const char * arg1) {
  ((QMessageLogger*)qthis)->debug(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 102, column 10>
//   // proto:  void QMessageLogger::warning(const QLoggingCategory & cat, const char * msg);
// _ZNK14QMessageLogger7warningERK16QLoggingCategoryPKcz warning(const class QLoggingCategory &, const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger7warningERK16QLoggingCategoryPKcz(void *qthis,
const QLoggingCategory* arg1,
const char * arg2) {
  ((QMessageLogger*)qthis)->warning(*((const QLoggingCategory*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 110, column 10>
//   // proto:  void QMessageLogger::fatal(const char * msg);
// _ZNK14QMessageLogger5fatalEPKcz fatal(const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger5fatalEPKcz(void *qthis,
const char * arg1) {
  ((QMessageLogger*)qthis)->fatal(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 118, column 12>
//   // proto:  QDebug QMessageLogger::info(CategoryFunction catFunc);
// _ZNK14QMessageLogger4infoEPFRK16QLoggingCategoryvE info(CategoryFunction)
extern "C"
QDebug*
C_ZNK14QMessageLogger4infoEPFRK16QLoggingCategoryvE(void *qthis,
QMessageLogger::CategoryFunction arg1) {
  auto ret =
  ((QMessageLogger*)qthis)->info(arg1);
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 117, column 12>
//   // proto:  QDebug QMessageLogger::info(const QLoggingCategory & cat);
// _ZNK14QMessageLogger4infoERK16QLoggingCategory info(const class QLoggingCategory &)
extern "C"
QDebug*
C_ZNK14QMessageLogger4infoERK16QLoggingCategory(void *qthis,
const QLoggingCategory* arg1) {
  auto ret =
  ((QMessageLogger*)qthis)->info(*((const QLoggingCategory*)arg1));
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 98, column 10>
//   // proto:  void QMessageLogger::debug(const QLoggingCategory & cat, const char * msg);
// _ZNK14QMessageLogger5debugERK16QLoggingCategoryPKcz debug(const class QLoggingCategory &, const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger5debugERK16QLoggingCategoryPKcz(void *qthis,
const QLoggingCategory* arg1,
const char * arg2) {
  ((QMessageLogger*)qthis)->debug(*((const QLoggingCategory*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 124, column 12>
//   // proto:  QDebug QMessageLogger::critical(CategoryFunction catFunc);
// _ZNK14QMessageLogger8criticalEPFRK16QLoggingCategoryvE critical(CategoryFunction)
extern "C"
QDebug*
C_ZNK14QMessageLogger8criticalEPFRK16QLoggingCategoryvE(void *qthis,
QMessageLogger::CategoryFunction arg1) {
  auto ret =
  ((QMessageLogger*)qthis)->critical(arg1);
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 94, column 10>
//   // proto:  void QMessageLogger::critical(const char * msg);
// _ZNK14QMessageLogger8criticalEPKcz critical(const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger8criticalEPKcz(void *qthis,
const char * arg1) {
  ((QMessageLogger*)qthis)->critical(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 101, column 10>
//   // proto:  void QMessageLogger::info(CategoryFunction catFunc, const char * msg);
// _ZNK14QMessageLogger4infoEPFRK16QLoggingCategoryvEPKcz info(CategoryFunction, const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger4infoEPFRK16QLoggingCategoryvEPKcz(void *qthis,
QMessageLogger::CategoryFunction arg1,
const char * arg2) {
  ((QMessageLogger*)qthis)->info(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 83, column 22>
//   // proto:  void QMessageLogger::QMessageLogger();
extern "C"
QMessageLogger*
C_ZN14QMessageLoggerC2Ev() {
  auto ret = new QMessageLogger();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 116, column 12>
//   // proto:  QDebug QMessageLogger::info();
// _ZNK14QMessageLogger4infoEv info()
extern "C"
QDebug*
C_ZNK14QMessageLogger4infoEv(void *qthis) {
  auto ret =
  ((QMessageLogger*)qthis)->info();
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 93, column 10>
//   // proto:  void QMessageLogger::warning(const char * msg);
// _ZNK14QMessageLogger7warningEPKcz warning(const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger7warningEPKcz(void *qthis,
const char * arg1) {
  ((QMessageLogger*)qthis)->warning(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 121, column 12>
//   // proto:  QDebug QMessageLogger::warning(CategoryFunction catFunc);
// _ZNK14QMessageLogger7warningEPFRK16QLoggingCategoryvE warning(CategoryFunction)
extern "C"
QDebug*
C_ZNK14QMessageLogger7warningEPFRK16QLoggingCategoryvE(void *qthis,
QMessageLogger::CategoryFunction arg1) {
  auto ret =
  ((QMessageLogger*)qthis)->warning(arg1);
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 99, column 10>
//   // proto:  void QMessageLogger::debug(CategoryFunction catFunc, const char * msg);
// _ZNK14QMessageLogger5debugEPFRK16QLoggingCategoryvEPKcz debug(CategoryFunction, const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger5debugEPFRK16QLoggingCategoryvEPKcz(void *qthis,
QMessageLogger::CategoryFunction arg1,
const char * arg2) {
  ((QMessageLogger*)qthis)->debug(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 123, column 12>
//   // proto:  QDebug QMessageLogger::critical(const QLoggingCategory & cat);
// _ZNK14QMessageLogger8criticalERK16QLoggingCategory critical(const class QLoggingCategory &)
extern "C"
QDebug*
C_ZNK14QMessageLogger8criticalERK16QLoggingCategory(void *qthis,
const QLoggingCategory* arg1) {
  auto ret =
  ((QMessageLogger*)qthis)->critical(*((const QLoggingCategory*)arg1));
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 122, column 12>
//   // proto:  QDebug QMessageLogger::critical();
// _ZNK14QMessageLogger8criticalEv critical()
extern "C"
QDebug*
C_ZNK14QMessageLogger8criticalEv(void *qthis) {
  auto ret =
  ((QMessageLogger*)qthis)->critical();
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 105, column 10>
//   // proto:  void QMessageLogger::critical(CategoryFunction catFunc, const char * msg);
// _ZNK14QMessageLogger8criticalEPFRK16QLoggingCategoryvEPKcz critical(CategoryFunction, const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger8criticalEPFRK16QLoggingCategoryvEPKcz(void *qthis,
QMessageLogger::CategoryFunction arg1,
const char * arg2) {
  ((QMessageLogger*)qthis)->critical(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 84, column 22>
//   // proto:  void QMessageLogger::QMessageLogger(const char * file, int line, const char * function);
extern "C"
QMessageLogger*
C_ZN14QMessageLoggerC2EPKciS1_(const char * arg1,
int arg2,
const char * arg3) {
  auto ret = new QMessageLogger(arg1, arg2, arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 113, column 12>
//   // proto:  QDebug QMessageLogger::debug();
// _ZNK14QMessageLogger5debugEv debug()
extern "C"
QDebug*
C_ZNK14QMessageLogger5debugEv(void *qthis) {
  auto ret =
  ((QMessageLogger*)qthis)->debug();
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 114, column 12>
//   // proto:  QDebug QMessageLogger::debug(const QLoggingCategory & cat);
// _ZNK14QMessageLogger5debugERK16QLoggingCategory debug(const class QLoggingCategory &)
extern "C"
QDebug*
C_ZNK14QMessageLogger5debugERK16QLoggingCategory(void *qthis,
const QLoggingCategory* arg1) {
  auto ret =
  ((QMessageLogger*)qthis)->debug(*((const QLoggingCategory*)arg1));
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 120, column 12>
//   // proto:  QDebug QMessageLogger::warning(const QLoggingCategory & cat);
// _ZNK14QMessageLogger7warningERK16QLoggingCategory warning(const class QLoggingCategory &)
extern "C"
QDebug*
C_ZNK14QMessageLogger7warningERK16QLoggingCategory(void *qthis,
const QLoggingCategory* arg1) {
  auto ret =
  ((QMessageLogger*)qthis)->warning(*((const QLoggingCategory*)arg1));
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 92, column 10>
//   // proto:  void QMessageLogger::info(const char * msg);
// _ZNK14QMessageLogger4infoEPKcz info(const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger4infoEPKcz(void *qthis,
const char * arg1) {
  ((QMessageLogger*)qthis)->info(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 103, column 10>
//   // proto:  void QMessageLogger::warning(CategoryFunction catFunc, const char * msg);
// _ZNK14QMessageLogger7warningEPFRK16QLoggingCategoryvEPKcz warning(CategoryFunction, const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger7warningEPFRK16QLoggingCategoryvEPKcz(void *qthis,
QMessageLogger::CategoryFunction arg1,
const char * arg2) {
  ((QMessageLogger*)qthis)->warning(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 115, column 12>
//   // proto:  QDebug QMessageLogger::debug(CategoryFunction catFunc);
// _ZNK14QMessageLogger5debugEPFRK16QLoggingCategoryvE debug(CategoryFunction)
extern "C"
QDebug*
C_ZNK14QMessageLogger5debugEPFRK16QLoggingCategoryvE(void *qthis,
QMessageLogger::CategoryFunction arg1) {
  auto ret =
  ((QMessageLogger*)qthis)->debug(arg1);
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 90, column 10>
//   // proto:  void QMessageLogger::noDebug(const char * );
// _ZNK14QMessageLogger7noDebugEPKcz noDebug(const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger7noDebugEPKcz(void *qthis,
const char * arg1) {
  ((QMessageLogger*)qthis)->noDebug(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 119, column 12>
//   // proto:  QDebug QMessageLogger::warning();
// _ZNK14QMessageLogger7warningEv warning()
extern "C"
QDebug*
C_ZNK14QMessageLogger7warningEv(void *qthis) {
  auto ret =
  ((QMessageLogger*)qthis)->warning();
  return new QDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 126, column 14>
//   // proto:  QNoDebug QMessageLogger::noDebug();
// _ZNK14QMessageLogger7noDebugEv noDebug()
extern "C"
QNoDebug*
C_ZNK14QMessageLogger7noDebugEv(void *qthis) {
  auto ret =
  ((QMessageLogger*)qthis)->noDebug();
  return new QNoDebug(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 104, column 10>
//   // proto:  void QMessageLogger::critical(const QLoggingCategory & cat, const char * msg);
// _ZNK14QMessageLogger8criticalERK16QLoggingCategoryPKcz critical(const class QLoggingCategory &, const char *, ...)
extern "C"
void
C_ZNK14QMessageLogger8criticalERK16QLoggingCategoryPKcz(void *qthis,
const QLoggingCategory* arg1,
const char * arg2) {
  ((QMessageLogger*)qthis)->critical(*((const QLoggingCategory*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlogging.h', line 86, column 22>
//   // proto:  void QMessageLogger::QMessageLogger(const char * file, int line, const char * function, const char * category);
extern "C"
QMessageLogger*
C_ZN14QMessageLoggerC2EPKciS1_S1_(const char * arg1,
int arg2,
const char * arg3,
const char * arg4) {
  auto ret = new QMessageLogger(arg1, arg2, arg3, arg4);
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

