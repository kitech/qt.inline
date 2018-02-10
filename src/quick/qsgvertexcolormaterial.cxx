//  header block begin
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h
#include <qsgvertexcolormaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGVertexColorMaterial is pure virtual: false
// QSGVertexColorMaterial has virtual projected: true
//  header block end

//  main block begin

class MyQSGVertexColorMaterial : public QSGVertexColorMaterial {
public:
  virtual ~MyQSGVertexColorMaterial() {}
// void QSGVertexColorMaterial()
MyQSGVertexColorMaterial() : QSGVertexColorMaterial() {}
// QSGMaterialType * type()
  virtual QSGMaterialType * type() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"type", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialType *)(irv);
      // PointerPointerQSGMaterialType *
    } else {
    return QSGVertexColorMaterial::type();
  }
  }

// QSGMaterialShader * createShader()
  virtual QSGMaterialShader * createShader() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createShader", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialShader *)(irv);
      // PointerPointerQSGMaterialShader *
    } else {
    return QSGVertexColorMaterial::createShader();
  }
  }

};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h:50
// [-2] void QSGVertexColorMaterial()
extern "C"
void* C_ZN22QSGVertexColorMaterialC2Ev() {
  auto _nilp = (MyQSGVertexColorMaterial*)(0);
  return  new MyQSGVertexColorMaterial();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h:52
// [4] int compare(const class QSGMaterial *)
extern "C"
int C_ZNK22QSGVertexColorMaterial7compareEPK11QSGMaterial(void *this_, const QSGMaterial * other) {
  return (int)((QSGVertexColorMaterial*)this_)->compare(other);
}

extern "C"
void C_ZN22QSGVertexColorMaterialD2Ev(void *this_) {
  delete (QSGVertexColorMaterial*)(this_);
}
//  main block end
