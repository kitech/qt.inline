//  header block begin
// /usr/include/qt/QtQuick/qsgmaterial.h
#ifndef protected
#define protected public
#endif
#include <qsgmaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGMaterial is pure virtual: true
// QSGMaterial has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGMaterial : public QSGMaterial {
public:
  virtual ~MyQSGMaterial() {}
// void QSGMaterial()
MyQSGMaterial() : QSGMaterial() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:146
// [-2] void QSGMaterial()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGMaterialC2Ev() {
  return 0; // new QSGMaterial();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:147
// [-2] void ~QSGMaterial()
extern "C" Q_DECL_EXPORT
void C_ZN11QSGMaterialD2Ev(void *this_) {
  delete (QSGMaterial*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:149
// [8] QSGMaterialType * type()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGMaterial4typeEv(void *this_) {
  return (void*)((QSGMaterial*)this_)->type();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:150
// [8] QSGMaterialShader * createShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGMaterial12createShaderEv(void *this_) {
  return (void*)((QSGMaterial*)this_)->createShader();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:151
// [4] int compare(const class QSGMaterial *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QSGMaterial7compareEPKS_(void *this_, const QSGMaterial * other) {
  return (int)((QSGMaterial*)this_)->compare(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:153
// [4] QSGMaterial::Flags flags()
extern "C" Q_DECL_EXPORT
QSGMaterial::Flags C_ZNK11QSGMaterial5flagsEv(void *this_) {
  return (QSGMaterial::Flags)((QSGMaterial*)this_)->flags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:154
// [-2] void setFlag(QSGMaterial::Flags, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGMaterial7setFlagE6QFlagsINS_4FlagEEb(void *this_, QFlags<QSGMaterial::Flag> flags, bool on) {
  ((QSGMaterial*)this_)->setFlag(flags, on);
}

//  main block end
