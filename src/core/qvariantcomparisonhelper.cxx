//  header block begin
// /usr/include/qt/QtCore/qvariant.h
#include <qvariant.h>
#include <QtCore>

// QVariantComparisonHelper is pure virtual: false
//  header block end

//  main block begin

class MyQVariantComparisonHelper : public QVariantComparisonHelper {
public:
MyQVariantComparisonHelper(const QVariant & var) : QVariantComparisonHelper(var) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:560
// [-2] void QVariantComparisonHelper(const class QVariant &)
extern "C"
void* C_ZN24QVariantComparisonHelperC1ERK8QVariant(const QVariant & var) {
  (MyQVariantComparisonHelper*)(0);
  return  new MyQVariantComparisonHelper(var);
}
//  main block end
