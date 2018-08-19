//  header block begin
// /usr/include/qt/QtQuick/qsgtexturematerial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgtexturematerial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTextureMaterial is pure virtual: false
// QSGTextureMaterial has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGTextureMaterial : public QSGTextureMaterial {
public:
  virtual ~MyQSGTextureMaterial() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:90
// [8] QSGMaterialType * type()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSGTextureMaterial4typeEv(void *this_) {
  return (void*)((QSGTextureMaterial*)this_)->type();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:91
// [8] QSGMaterialShader * createShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSGTextureMaterial12createShaderEv(void *this_) {
  return (void*)((QSGTextureMaterial*)this_)->createShader();
}


extern "C" Q_DECL_EXPORT
void C_ZN18QSGTextureMaterialD2Ev(void *this_) {
  delete (QSGTextureMaterial*)(this_);
}
//  main block end
