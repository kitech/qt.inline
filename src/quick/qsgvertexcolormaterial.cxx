//  header block begin
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgvertexcolormaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGVertexColorMaterial is pure virtual: false
// QSGVertexColorMaterial has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGVertexColorMaterial : public QSGVertexColorMaterial {
public:
  virtual ~MyQSGVertexColorMaterial() {}
// void QSGVertexColorMaterial()
MyQSGVertexColorMaterial() : QSGVertexColorMaterial() {}
// Protected virtual Visibility=Default Availability=Available
// [8] QSGMaterialType * type()
  virtual QSGMaterialType * type() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"type", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialType *)(irv);
      // Pointer Pointer QSGMaterialType *
    } else {
    return QSGVertexColorMaterial::type();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSGMaterialShader * createShader()
  virtual QSGMaterialShader * createShader() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createShader", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialShader *)(irv);
      // Pointer Pointer QSGMaterialShader *
    } else {
    return QSGVertexColorMaterial::createShader();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h:55
// [8] QSGMaterialType * type()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QSGVertexColorMaterial4typeEv(void *this_) {
  return (void*)((QSGVertexColorMaterial*)this_)->QSGVertexColorMaterial::type();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h:56
// [8] QSGMaterialShader * createShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QSGVertexColorMaterial12createShaderEv(void *this_) {
  return (void*)((QSGVertexColorMaterial*)this_)->QSGVertexColorMaterial::createShader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h:50
// [-2] void QSGVertexColorMaterial()
extern "C" Q_DECL_EXPORT
void* C_ZN22QSGVertexColorMaterialC2Ev() {
  auto _nilp = (MyQSGVertexColorMaterial*)(0);
  return  new MyQSGVertexColorMaterial();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h:52
// [4] int compare(const QSGMaterial *)
extern "C" Q_DECL_EXPORT
int C_ZNK22QSGVertexColorMaterial7compareEPK11QSGMaterial(void *this_, const QSGMaterial * other) {
  return (int)((QSGVertexColorMaterial*)this_)->compare(other);
}


extern "C" Q_DECL_EXPORT
void C_ZN22QSGVertexColorMaterialD2Ev(void *this_) {
  delete (QSGVertexColorMaterial*)(this_);
}
//  main block end
