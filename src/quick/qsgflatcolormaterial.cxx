//  header block begin
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h
#ifndef protected
#define protected public
#endif
#include <qsgflatcolormaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGFlatColorMaterial is pure virtual: false
// QSGFlatColorMaterial has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGFlatColorMaterial : public QSGFlatColorMaterial {
public:
  virtual ~MyQSGFlatColorMaterial() {}
// void QSGFlatColorMaterial()
MyQSGFlatColorMaterial() : QSGFlatColorMaterial() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:51
// [-2] void QSGFlatColorMaterial()
extern "C" Q_DECL_EXPORT
void* C_ZN20QSGFlatColorMaterialC2Ev() {
  return  new QSGFlatColorMaterial();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:52
// [8] QSGMaterialType * type()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGFlatColorMaterial4typeEv(void *this_) {
  return (void*)((QSGFlatColorMaterial*)this_)->type();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:53
// [8] QSGMaterialShader * createShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGFlatColorMaterial12createShaderEv(void *this_) {
  return (void*)((QSGFlatColorMaterial*)this_)->createShader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:55
// [-2] void setColor(const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGFlatColorMaterial8setColorERK6QColor(void *this_, QColor* color) {
  ((QSGFlatColorMaterial*)this_)->setColor(*color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:56
// [16] const QColor & color()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGFlatColorMaterial5colorEv(void *this_) {
  auto& rv = ((QSGFlatColorMaterial*)this_)->color();
return new QColor(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:58
// [4] int compare(const class QSGMaterial *)
extern "C" Q_DECL_EXPORT
int C_ZNK20QSGFlatColorMaterial7compareEPK11QSGMaterial(void *this_, const QSGMaterial * other) {
  return (int)((QSGFlatColorMaterial*)this_)->compare(other);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QSGFlatColorMaterialD2Ev(void *this_) {
  delete (QSGFlatColorMaterial*)(this_);
}
//  main block end
