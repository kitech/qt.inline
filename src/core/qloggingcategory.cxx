//  header block begin

// /usr/include/qt/QtCore/qloggingcategory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qloggingcategory.h>
#include <QtCore>
#include "callback_inherit.h"

// QLoggingCategory is pure virtual: false false
// QLoggingCategory has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qloggingcategory(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:53
// [-2] void QLoggingCategory(const char *) 
// (12)qm1095412876 (27)_ZN16QLoggingCategoryC2EPKc
/*void* qm1095412876(const char * category)*/{
  const char * category = *(const char **)this_;
  this_ = 0; // new QLoggingCategory(category);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:54
// [-2] void QLoggingCategory(const char *, QtMsgType) 
// (11)qm268948676 (37)_ZN16QLoggingCategoryC2EPKc9QtMsgType
/*void* qm268948676(const char * category, QtMsgType severityLevel)*/{
  const char * category = *(const char **)this_; QtMsgType severityLevel = *(QtMsgType*)this_;
  this_ = 0; // new QLoggingCategory(category, severityLevel);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:61
// [1] bool isDebugEnabled() const
// (12)qm2899630919 (40)_ZNK16QLoggingCategory14isDebugEnabledEv
//static
/*void qm2899630919()*/ {
  ;
  (void) ((QLoggingCategory*)this_)->isDebugEnabled();
   auto xptr = (bool (QLoggingCategory::*)() const ) &QLoggingCategory::isDebugEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:62
// [1] bool isInfoEnabled() const
// (12)qm2754089110 (39)_ZNK16QLoggingCategory13isInfoEnabledEv
//static
/*void qm2754089110()*/ {
  ;
  (void) ((QLoggingCategory*)this_)->isInfoEnabled();
   auto xptr = (bool (QLoggingCategory::*)() const ) &QLoggingCategory::isInfoEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:63
// [1] bool isWarningEnabled() const
// (11)qm348797737 (42)_ZNK16QLoggingCategory16isWarningEnabledEv
//static
/*void qm348797737()*/ {
  ;
  (void) ((QLoggingCategory*)this_)->isWarningEnabled();
   auto xptr = (bool (QLoggingCategory::*)() const ) &QLoggingCategory::isWarningEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:64
// [1] bool isCriticalEnabled() const
// (12)qm2793169782 (43)_ZNK16QLoggingCategory17isCriticalEnabledEv
//static
/*void qm2793169782()*/ {
  ;
  (void) ((QLoggingCategory*)this_)->isCriticalEnabled();
   auto xptr = (bool (QLoggingCategory::*)() const ) &QLoggingCategory::isCriticalEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:71
// [8] const char * categoryName() const
// (11)qm412378307 (38)_ZNK16QLoggingCategory12categoryNameEv
//static
/*void qm412378307()*/ {
  ;
  (void) ((QLoggingCategory*)this_)->categoryName();
   auto xptr = (const char * (QLoggingCategory::*)() const ) &QLoggingCategory::categoryName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qloggingcategory.h:74
// [24] QLoggingCategory & operator()() 
// (12)qm2744244159 (25)_ZN16QLoggingCategoryclEv
//static
/*void qm2744244159()*/ {
  ;
  (void) ((QLoggingCategory*)this_)->operator()();
  // auto xptr = (QLoggingCategory & (QLoggingCategory::*)()() ) &QLoggingCategory::operator;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qloggingcategory
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
