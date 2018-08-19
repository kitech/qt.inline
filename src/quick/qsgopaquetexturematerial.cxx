//  header block begin
// /usr/include/qt/QtQuick/qsgtexturematerial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgtexturematerial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGOpaqueTextureMaterial is pure virtual: false
// QSGOpaqueTextureMaterial has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGOpaqueTextureMaterial : public QSGOpaqueTextureMaterial {
public:
  virtual ~MyQSGOpaqueTextureMaterial() {}
// void QSGOpaqueTextureMaterial()
MyQSGOpaqueTextureMaterial() : QSGOpaqueTextureMaterial() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:51
// [-2] void QSGOpaqueTextureMaterial()
extern "C" Q_DECL_EXPORT
void* C_ZN24QSGOpaqueTextureMaterialC2Ev() {
  return  new QSGOpaqueTextureMaterial();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:53
// [8] QSGMaterialType * type()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QSGOpaqueTextureMaterial4typeEv(void *this_) {
  return (void*)((QSGOpaqueTextureMaterial*)this_)->type();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:54
// [8] QSGMaterialShader * createShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QSGOpaqueTextureMaterial12createShaderEv(void *this_) {
  return (void*)((QSGOpaqueTextureMaterial*)this_)->createShader();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:55
// [4] int compare(const QSGMaterial *)
extern "C" Q_DECL_EXPORT
int C_ZNK24QSGOpaqueTextureMaterial7compareEPK11QSGMaterial(void *this_, const QSGMaterial * other) {
  return (int)((QSGOpaqueTextureMaterial*)this_)->compare(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:57
// [-2] void setTexture(QSGTexture *)
extern "C" Q_DECL_EXPORT
void C_ZN24QSGOpaqueTextureMaterial10setTextureEP10QSGTexture(void *this_, QSGTexture * texture) {
  ((QSGOpaqueTextureMaterial*)this_)->setTexture(texture);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:58
// [8] QSGTexture * texture()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QSGOpaqueTextureMaterial7textureEv(void *this_) {
  return (void*)((QSGOpaqueTextureMaterial*)this_)->texture();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:60
// [-2] void setMipmapFiltering(QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN24QSGOpaqueTextureMaterial18setMipmapFilteringEN10QSGTexture9FilteringE(void *this_, QSGTexture::Filtering filteringType) {
  ((QSGOpaqueTextureMaterial*)this_)->setMipmapFiltering(filteringType);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:61
// [4] QSGTexture::Filtering mipmapFiltering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK24QSGOpaqueTextureMaterial15mipmapFilteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGOpaqueTextureMaterial*)this_)->mipmapFiltering();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:63
// [-2] void setFiltering(QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN24QSGOpaqueTextureMaterial12setFilteringEN10QSGTexture9FilteringE(void *this_, QSGTexture::Filtering filteringType) {
  ((QSGOpaqueTextureMaterial*)this_)->setFiltering(filteringType);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:64
// [4] QSGTexture::Filtering filtering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK24QSGOpaqueTextureMaterial9filteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGOpaqueTextureMaterial*)this_)->filtering();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:66
// [-2] void setHorizontalWrapMode(QSGTexture::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN24QSGOpaqueTextureMaterial21setHorizontalWrapModeEN10QSGTexture8WrapModeE(void *this_, QSGTexture::WrapMode mode) {
  ((QSGOpaqueTextureMaterial*)this_)->setHorizontalWrapMode(mode);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:67
// [4] QSGTexture::WrapMode horizontalWrapMode()
extern "C" Q_DECL_EXPORT
QSGTexture::WrapMode C_ZNK24QSGOpaqueTextureMaterial18horizontalWrapModeEv(void *this_) {
  return (QSGTexture::WrapMode)((QSGOpaqueTextureMaterial*)this_)->horizontalWrapMode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:69
// [-2] void setVerticalWrapMode(QSGTexture::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN24QSGOpaqueTextureMaterial19setVerticalWrapModeEN10QSGTexture8WrapModeE(void *this_, QSGTexture::WrapMode mode) {
  ((QSGOpaqueTextureMaterial*)this_)->setVerticalWrapMode(mode);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:70
// [4] QSGTexture::WrapMode verticalWrapMode()
extern "C" Q_DECL_EXPORT
QSGTexture::WrapMode C_ZNK24QSGOpaqueTextureMaterial16verticalWrapModeEv(void *this_) {
  return (QSGTexture::WrapMode)((QSGOpaqueTextureMaterial*)this_)->verticalWrapMode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:72
// [-2] void setAnisotropyLevel(QSGTexture::AnisotropyLevel)
extern "C" Q_DECL_EXPORT
void C_ZN24QSGOpaqueTextureMaterial18setAnisotropyLevelEN10QSGTexture15AnisotropyLevelE(void *this_, QSGTexture::AnisotropyLevel level) {
  ((QSGOpaqueTextureMaterial*)this_)->setAnisotropyLevel(level);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:73
// [4] QSGTexture::AnisotropyLevel anisotropyLevel()
extern "C" Q_DECL_EXPORT
QSGTexture::AnisotropyLevel C_ZNK24QSGOpaqueTextureMaterial15anisotropyLevelEv(void *this_) {
  return (QSGTexture::AnisotropyLevel)((QSGOpaqueTextureMaterial*)this_)->anisotropyLevel();
}


extern "C" Q_DECL_EXPORT
void C_ZN24QSGOpaqueTextureMaterialD2Ev(void *this_) {
  delete (QSGOpaqueTextureMaterial*)(this_);
}
//  main block end
