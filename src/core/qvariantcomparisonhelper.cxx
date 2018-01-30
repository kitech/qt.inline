//  header block begin
// /usr/include/qt/QtCore/qvariant.h
#include <qvariant.h>
#include <QtCore>

// QVariantComparisonHelper is pure virtual: false
// QVariantComparisonHelper has virtual projected: false
//  header block end

//  main block begin

class MyQVariantComparisonHelper : public QVariantComparisonHelper {
public:
  virtual ~MyQVariantComparisonHelper() {}
// void QVariantComparisonHelper(const class QVariant &)
MyQVariantComparisonHelper(const QVariant & var) : QVariantComparisonHelper(var) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:560
// [-2] void QVariantComparisonHelper(const class QVariant &)
extern "C"
void* C_ZN24QVariantComparisonHelperC2ERK8QVariant(const QVariant & var) {
  return  new QVariantComparisonHelper(var);
}
//  main block end
