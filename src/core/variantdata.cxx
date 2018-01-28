//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#include <qmetatype.h>
#include <QtCore>

// VariantData is pure virtual: false
//  header block end

//  main block begin

class MyVariantData : public QtMetaTypePrivate::VariantData {
public:
MyVariantData(const int metaTypeId_, const void * data_, const uint flags_) : QtMetaTypePrivate::VariantData(metaTypeId_, data_, flags_) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:798
// [-2] void VariantData(const int, const void *, const uint)
extern "C"
void* C_ZN17QtMetaTypePrivate11VariantDataC1EiPKvj(const int metaTypeId_, const void * data_, const uint flags_) {
  (MyVariantData*)(0);
  return  new MyVariantData(metaTypeId_, data_, flags_);
}
//  main block end
