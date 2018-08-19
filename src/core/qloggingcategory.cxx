//  header block begin
// since 0x050200
// /usr/include/qt/QtCore/qloggingcategory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qloggingcategory.h>
#include <QtCore>
#include "callback_inherit.h"

// QLoggingCategory is pure virtual: false
// QLoggingCategory has virtual projected: false
//  header block end

//  main block begin

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:53
// [-2] void QLoggingCategory(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QLoggingCategoryC2EPKc(const char * category) {
  return  new QLoggingCategory(category);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qloggingcategory.h:54
// [-2] void QLoggingCategory(const char *, QtMsgType)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN16QLoggingCategoryC2EPKc9QtMsgType(const char * category, QtMsgType severityLevel) {
  return  new QLoggingCategory(category, severityLevel);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:55
// [-2] void ~QLoggingCategory()
extern "C" Q_DECL_EXPORT
void C_ZN16QLoggingCategoryD2Ev(void *this_) {
  delete (QLoggingCategory*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:57
// [1] bool isEnabled(QtMsgType)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QLoggingCategory9isEnabledE9QtMsgType(void *this_, QtMsgType type_) {
  return (bool)((QLoggingCategory*)this_)->isEnabled(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:58
// [-2] void setEnabled(QtMsgType, bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QLoggingCategory10setEnabledE9QtMsgTypeb(void *this_, QtMsgType type_, bool enable) {
  ((QLoggingCategory*)this_)->setEnabled(type_, enable);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:61
// [1] bool isDebugEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QLoggingCategory14isDebugEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isDebugEnabled();
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qloggingcategory.h:62
// [1] bool isInfoEnabled()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZNK16QLoggingCategory13isInfoEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isInfoEnabled();
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:63
// [1] bool isWarningEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QLoggingCategory16isWarningEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isWarningEnabled();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:64
// [1] bool isCriticalEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QLoggingCategory17isCriticalEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isCriticalEnabled();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:71
// [8] const char * categoryName()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QLoggingCategory12categoryNameEv(void *this_) {
  return (void*)((QLoggingCategory*)this_)->categoryName();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:74
// [24] QLoggingCategory & operator()()
extern "C" Q_DECL_EXPORT
void* C_ZN16QLoggingCategoryclEv(void *this_) {
  auto& rv = ((QLoggingCategory*)this_)->operator()();
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:77
// [8] QLoggingCategory * defaultCategory()
extern "C" Q_DECL_EXPORT
void* C_ZN16QLoggingCategory15defaultCategoryEv() {
  return (void*)QLoggingCategory::defaultCategory();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:80
// [8] QLoggingCategory::CategoryFilter installFilter(QLoggingCategory::CategoryFilter)
extern "C" Q_DECL_EXPORT
void C_ZN16QLoggingCategory13installFilterEPFvPS_E(QLoggingCategory::CategoryFilter arg0) {
  auto rv = QLoggingCategory::installFilter(arg0);
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:82
// [-2] void setFilterRules(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QLoggingCategory14setFilterRulesERK7QString(QString* rules) {
  QLoggingCategory::setFilterRules(*rules);
}

//  main block end
