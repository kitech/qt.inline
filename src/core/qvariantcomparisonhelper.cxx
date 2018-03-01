//  header block begin
// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariantComparisonHelper is pure virtual: false
// QVariantComparisonHelper has virtual projected: false
//  header block end

//  main block begin

class MyQVariantComparisonHelper : public QVariantComparisonHelper {
public:
  virtual ~MyQVariantComparisonHelper() {}
// void QVariantComparisonHelper(const class QVariant &)
MyQVariantComparisonHelper(const QVariant & var_) : QVariantComparisonHelper(var_) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:560
// [-2] void QVariantComparisonHelper(const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QVariantComparisonHelperC2ERK8QVariant(QVariant* var_) {
  return  new QVariantComparisonHelper(*var_);
}

extern "C" Q_DECL_EXPORT
void C_ZN24QVariantComparisonHelperD2Ev(void *this_) {
  delete (QVariantComparisonHelper*)(this_);
}
//  main block end
