// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qloggingcategory.h
// dst-file: /src/core/qloggingcategory.cxx
//

// header block begin =>
#include <qloggingcategory.h>

extern "C" {

int QLoggingCategory_Class_Size()
{
  return sizeof(QLoggingCategory);
}

// QLoggingCategory(const char *, enum QtMsgType)
QLoggingCategory* dector_ZN16QLoggingCategoryC1EPKc9QtMsgType(const char * category, QtMsgType severityLevel)
{
  // static_assert(sizeof(QLoggingCategory) == 32, "tyszerr");
  QLoggingCategory* rthis = new QLoggingCategory(category, severityLevel);
  return rthis;
}

// ~QLoggingCategory()
void dedtor_ZN16QLoggingCategoryD0Ev(QLoggingCategory* that)
{
  QLoggingCategory* rthis = (QLoggingCategory*)that;
  delete rthis;
}

// QLoggingCategory(const char *)
QLoggingCategory* dector_ZN16QLoggingCategoryC1EPKc(const char * category)
{
  // static_assert(sizeof(QLoggingCategory) == 32, "tyszerr");
  QLoggingCategory* rthis = new QLoggingCategory(category);
  return rthis;
}

  // proto:  bool QLoggingCategory::isDebugEnabled();
bool demth_ZNK16QLoggingCategory14isDebugEnabledEv(void *that)
{
  QLoggingCategory *cthat = (QLoggingCategory *)that;
  return cthat->isDebugEnabled();
}

  // proto:  bool QLoggingCategory::isWarningEnabled();
bool demth_ZNK16QLoggingCategory16isWarningEnabledEv(void *that)
{
  QLoggingCategory *cthat = (QLoggingCategory *)that;
  return cthat->isWarningEnabled();
}

  // proto:  bool QLoggingCategory::isInfoEnabled();
bool demth_ZNK16QLoggingCategory13isInfoEnabledEv(void *that)
{
  QLoggingCategory *cthat = (QLoggingCategory *)that;
  return cthat->isInfoEnabled();
}

  // proto:  const char * QLoggingCategory::categoryName();
const char * demth_ZNK16QLoggingCategory12categoryNameEv(void *that)
{
  QLoggingCategory *cthat = (QLoggingCategory *)that;
  return cthat->categoryName();
}

  // proto:  bool QLoggingCategory::isCriticalEnabled();
bool demth_ZNK16QLoggingCategory17isCriticalEnabledEv(void *that)
{
  QLoggingCategory *cthat = (QLoggingCategory *)that;
  return cthat->isCriticalEnabled();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

