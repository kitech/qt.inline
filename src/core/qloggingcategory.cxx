//  header block begin
// /usr/include/qt/QtCore/qloggingcategory.h
#include <qloggingcategory.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qloggingcategory.h:53
// void QLoggingCategory(const char *)
extern "C"
void* C_ZN16QLoggingCategoryC1EPKc(const char * category) {
  return new QLoggingCategory(category);
}
// /usr/include/qt/QtCore/qloggingcategory.h:54
// void QLoggingCategory(const char *, enum QtMsgType)
extern "C"
void* C_ZN16QLoggingCategoryC1EPKc9QtMsgType(const char * category, QtMsgType severityLevel) {
  return new QLoggingCategory(category, severityLevel);
}
// /usr/include/qt/QtCore/qloggingcategory.h:55
// void ~QLoggingCategory()
extern "C"
void C_ZN16QLoggingCategoryD1Ev(void *this_) {
  delete (QLoggingCategory*)(this_);
}
// /usr/include/qt/QtCore/qloggingcategory.h:57
// bool isEnabled(enum QtMsgType)
extern "C"
void C_ZNK16QLoggingCategory9isEnabledE9QtMsgType(void *this_, QtMsgType type) {
  /*return*/ ((QLoggingCategory*)this_)->isEnabled(type);
}
// /usr/include/qt/QtCore/qloggingcategory.h:58
// void setEnabled(enum QtMsgType, _Bool)
extern "C"
void C_ZN16QLoggingCategory10setEnabledE9QtMsgTypeb(void *this_, QtMsgType type, bool enable) {
  ((QLoggingCategory*)this_)->setEnabled(type, enable);
}
// inline
// /usr/include/qt/QtCore/qloggingcategory.h:61
// bool isDebugEnabled()
extern "C"
void C_ZNK16QLoggingCategory14isDebugEnabledEv(void *this_) {
  /*return*/ ((QLoggingCategory*)this_)->isDebugEnabled();
}
// inline
// /usr/include/qt/QtCore/qloggingcategory.h:62
// bool isInfoEnabled()
extern "C"
void C_ZNK16QLoggingCategory13isInfoEnabledEv(void *this_) {
  /*return*/ ((QLoggingCategory*)this_)->isInfoEnabled();
}
// inline
// /usr/include/qt/QtCore/qloggingcategory.h:63
// bool isWarningEnabled()
extern "C"
void C_ZNK16QLoggingCategory16isWarningEnabledEv(void *this_) {
  /*return*/ ((QLoggingCategory*)this_)->isWarningEnabled();
}
// inline
// /usr/include/qt/QtCore/qloggingcategory.h:64
// bool isCriticalEnabled()
extern "C"
void C_ZNK16QLoggingCategory17isCriticalEnabledEv(void *this_) {
  /*return*/ ((QLoggingCategory*)this_)->isCriticalEnabled();
}
// inline
// /usr/include/qt/QtCore/qloggingcategory.h:71
// const char * categoryName()
extern "C"
void C_ZNK16QLoggingCategory12categoryNameEv(void *this_) {
  /*return*/ ((QLoggingCategory*)this_)->categoryName();
}
// static
// /usr/include/qt/QtCore/qloggingcategory.h:77
// QLoggingCategory * defaultCategory()
extern "C"
void C_ZN16QLoggingCategory15defaultCategoryEv() {
  /*return*/ QLoggingCategory::defaultCategory();
}
// static
// /usr/include/qt/QtCore/qloggingcategory.h:82
// void setFilterRules(const class QString &)
extern "C"
void C_ZN16QLoggingCategory14setFilterRulesERK7QString(const QString & rules) {
  QLoggingCategory::setFilterRules(rules);
}
//  main block end
