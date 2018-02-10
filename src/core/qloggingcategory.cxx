//  header block begin
// /usr/include/qt/QtCore/qloggingcategory.h
#include <qloggingcategory.h>
#include <QtCore>
#include "callback_inherit.h"

// QLoggingCategory is pure virtual: false
// QLoggingCategory has virtual projected: false
//  header block end

//  main block begin

class MyQLoggingCategory : public QLoggingCategory {
public:
  virtual ~MyQLoggingCategory() {}
// void QLoggingCategory(const char *)
MyQLoggingCategory(const char * category) : QLoggingCategory(category) {}
// void QLoggingCategory(const char *, enum QtMsgType)
MyQLoggingCategory(const char * category, QtMsgType severityLevel) : QLoggingCategory(category, severityLevel) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:53
// [-2] void QLoggingCategory(const char *)
extern "C"
void* C_ZN16QLoggingCategoryC2EPKc(const char * category) {
  return  new QLoggingCategory(category);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:54
// [-2] void QLoggingCategory(const char *, enum QtMsgType)
extern "C"
void* C_ZN16QLoggingCategoryC2EPKc9QtMsgType(const char * category, QtMsgType severityLevel) {
  return  new QLoggingCategory(category, severityLevel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:55
// [-2] void ~QLoggingCategory()
extern "C"
void C_ZN16QLoggingCategoryD2Ev(void *this_) {
  delete (QLoggingCategory*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:57
// [1] bool isEnabled(enum QtMsgType)
extern "C"
bool C_ZNK16QLoggingCategory9isEnabledE9QtMsgType(void *this_, QtMsgType type_) {
  return (bool)((QLoggingCategory*)this_)->isEnabled(type_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:58
// [-2] void setEnabled(enum QtMsgType, _Bool)
extern "C"
void C_ZN16QLoggingCategory10setEnabledE9QtMsgTypeb(void *this_, QtMsgType type_, bool enable) {
  ((QLoggingCategory*)this_)->setEnabled(type_, enable);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:61
// [1] bool isDebugEnabled()
extern "C"
bool C_ZNK16QLoggingCategory14isDebugEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isDebugEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:62
// [1] bool isInfoEnabled()
extern "C"
bool C_ZNK16QLoggingCategory13isInfoEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isInfoEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:63
// [1] bool isWarningEnabled()
extern "C"
bool C_ZNK16QLoggingCategory16isWarningEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isWarningEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:64
// [1] bool isCriticalEnabled()
extern "C"
bool C_ZNK16QLoggingCategory17isCriticalEnabledEv(void *this_) {
  return (bool)((QLoggingCategory*)this_)->isCriticalEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:71
// [8] const char * categoryName()
extern "C"
void* C_ZNK16QLoggingCategory12categoryNameEv(void *this_) {
  return (void*)((QLoggingCategory*)this_)->categoryName();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:77
// [8] QLoggingCategory * defaultCategory()
extern "C"
void* C_ZN16QLoggingCategory15defaultCategoryEv() {
  return (void*)QLoggingCategory::defaultCategory();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:82
// [-2] void setFilterRules(const class QString &)
extern "C"
void C_ZN16QLoggingCategory14setFilterRulesERK7QString(QString* rules) {
  QLoggingCategory::setFilterRules(*rules);
}
//  main block end
