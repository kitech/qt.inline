// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qloggingcategory.h
// dst-file: /src/core/qloggingcategory.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qloggingcategory.h>


// <= header block end

// main block begin =>
void __keep_qloggingcategory_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 55, column 10>
//   // proto:  bool QLoggingCategory::isDebugEnabled();
if (true) {
  auto f = [](QLoggingCategory flythis) {
    ((QLoggingCategory*)0)->isDebugEnabled();
    flythis.isDebugEnabled();
  };
  if (f == nullptr){}
}
// _ZNK16QLoggingCategory14isDebugEnabledEv isDebugEnabled()
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 57, column 10>
//   // proto:  bool QLoggingCategory::isWarningEnabled();
if (true) {
  auto f = [](QLoggingCategory flythis) {
    ((QLoggingCategory*)0)->isWarningEnabled();
    flythis.isWarningEnabled();
  };
  if (f == nullptr){}
}
// _ZNK16QLoggingCategory16isWarningEnabledEv isWarningEnabled()
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 56, column 10>
//   // proto:  bool QLoggingCategory::isInfoEnabled();
if (true) {
  auto f = [](QLoggingCategory flythis) {
    ((QLoggingCategory*)0)->isInfoEnabled();
    flythis.isInfoEnabled();
  };
  if (f == nullptr){}
}
// _ZNK16QLoggingCategory13isInfoEnabledEv isInfoEnabled()
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 65, column 17>
//   // proto:  const char * QLoggingCategory::categoryName();
if (true) {
  auto f = [](QLoggingCategory flythis) {
    ((QLoggingCategory*)0)->categoryName();
    flythis.categoryName();
  };
  if (f == nullptr){}
}
// _ZNK16QLoggingCategory12categoryNameEv categoryName()
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 58, column 10>
//   // proto:  bool QLoggingCategory::isCriticalEnabled();
if (true) {
  auto f = [](QLoggingCategory flythis) {
    ((QLoggingCategory*)0)->isCriticalEnabled();
    flythis.isCriticalEnabled();
  };
  if (f == nullptr){}
}
// _ZNK16QLoggingCategory17isCriticalEnabledEv isCriticalEnabled()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLoggingCategory_Class_Size()
{
  return sizeof(QLoggingCategory);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 48, column 5>
//   // proto:  void QLoggingCategory::QLoggingCategory(const char * category, QtMsgType severityLevel);
extern "C"
QLoggingCategory*
C_ZN16QLoggingCategoryC2EPKc9QtMsgType(const char * arg1,
QtMsgType arg2) {
  auto ret = new QLoggingCategory(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 55, column 10>
//   // proto:  bool QLoggingCategory::isDebugEnabled();
// _ZNK16QLoggingCategory14isDebugEnabledEv isDebugEnabled()
extern "C"
bool
C_ZNK16QLoggingCategory14isDebugEnabledEv(void *qthis) {
  auto ret =
  ((QLoggingCategory*)qthis)->isDebugEnabled();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QLoggingCategory::~QLoggingCategory();
extern "C"
void C_ZN16QLoggingCategoryD2Ev(void *qthis) {
  delete (QLoggingCategory*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 47, column 14>
//   // proto:  void QLoggingCategory::QLoggingCategory(const char * category);
extern "C"
QLoggingCategory*
C_ZN16QLoggingCategoryC2EPKc(const char * arg1) {
  auto ret = new QLoggingCategory(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 52, column 10>
//   // proto:  void QLoggingCategory::setEnabled(QtMsgType type, bool enable);
// _ZN16QLoggingCategory10setEnabledE9QtMsgTypeb setEnabled(enum QtMsgType, _Bool)
extern "C"
void
C_ZN16QLoggingCategory10setEnabledE9QtMsgTypeb(void *qthis,
QtMsgType arg1,
bool arg2) {
  ((QLoggingCategory*)qthis)->setEnabled(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 51, column 10>
//   // proto:  bool QLoggingCategory::isEnabled(QtMsgType type);
// _ZNK16QLoggingCategory9isEnabledE9QtMsgType isEnabled(enum QtMsgType)
extern "C"
bool
C_ZNK16QLoggingCategory9isEnabledE9QtMsgType(void *qthis,
QtMsgType arg1) {
  auto ret =
  ((QLoggingCategory*)qthis)->isEnabled(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 74, column 27>
//   // proto: static CategoryFilter QLoggingCategory::installFilter(CategoryFilter );
// _ZN16QLoggingCategory13installFilterEPFvPS_E installFilter(CategoryFilter)
extern "C"
void*
C_ZN16QLoggingCategory13installFilterEPFvPS_E(QLoggingCategory::CategoryFilter arg1) {
  auto ret =
  QLoggingCategory::installFilter(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 57, column 10>
//   // proto:  bool QLoggingCategory::isWarningEnabled();
// _ZNK16QLoggingCategory16isWarningEnabledEv isWarningEnabled()
extern "C"
bool
C_ZNK16QLoggingCategory16isWarningEnabledEv(void *qthis) {
  auto ret =
  ((QLoggingCategory*)qthis)->isWarningEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 56, column 10>
//   // proto:  bool QLoggingCategory::isInfoEnabled();
// _ZNK16QLoggingCategory13isInfoEnabledEv isInfoEnabled()
extern "C"
bool
C_ZNK16QLoggingCategory13isInfoEnabledEv(void *qthis) {
  auto ret =
  ((QLoggingCategory*)qthis)->isInfoEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 65, column 17>
//   // proto:  const char * QLoggingCategory::categoryName();
// _ZNK16QLoggingCategory12categoryNameEv categoryName()
extern "C"
void*
C_ZNK16QLoggingCategory12categoryNameEv(void *qthis) {
  auto ret =
  ((QLoggingCategory*)qthis)->categoryName();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 58, column 10>
//   // proto:  bool QLoggingCategory::isCriticalEnabled();
// _ZNK16QLoggingCategory17isCriticalEnabledEv isCriticalEnabled()
extern "C"
bool
C_ZNK16QLoggingCategory17isCriticalEnabledEv(void *qthis) {
  auto ret =
  ((QLoggingCategory*)qthis)->isCriticalEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 71, column 30>
//   // proto: static QLoggingCategory * QLoggingCategory::defaultCategory();
// _ZN16QLoggingCategory15defaultCategoryEv defaultCategory()
extern "C"
void*
C_ZN16QLoggingCategory15defaultCategoryEv() {
  auto ret =
  QLoggingCategory::defaultCategory();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qloggingcategory.h', line 76, column 17>
//   // proto: static void QLoggingCategory::setFilterRules(const QString & rules);
// _ZN16QLoggingCategory14setFilterRulesERK7QString setFilterRules(const class QString &)
extern "C"
void
C_ZN16QLoggingCategory14setFilterRulesERK7QString(const QString* arg1) {
  QLoggingCategory::setFilterRules(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

