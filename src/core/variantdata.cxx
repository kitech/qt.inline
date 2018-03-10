//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#ifndef protected
#define protected public
#endif
#include <qmetatype.h>
#include <QtCore>
#include "callback_inherit.h"

// VariantData is pure virtual: false
// VariantData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyVariantData : public QtMetaTypePrivate::VariantData {
public:
  virtual ~MyVariantData() {}
// void VariantData(const int, const void *, const uint)
MyVariantData(const int metaTypeId_, const void * data_, const uint flags_) : QtMetaTypePrivate::VariantData(metaTypeId_, data_, flags_) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:798
// [-2] void VariantData(const int, const void *, const uint)
extern "C" Q_DECL_EXPORT
void* C_ZN17QtMetaTypePrivate11VariantDataC2EiPKvj(const int metaTypeId_, const void * data_, const uint flags_) {
  return  new QtMetaTypePrivate::VariantData(metaTypeId_, data_, flags_);
}


extern "C" Q_DECL_EXPORT
void C_ZN11VariantDataD2Ev(void *this_) {
  delete (QtMetaTypePrivate::VariantData*)(this_);
}
//  main block end
