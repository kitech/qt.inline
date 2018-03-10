//  header block begin
// /usr/include/qt/QtQuick/qsgtexture.h
#ifndef protected
#define protected public
#endif
#include <qsgtexture.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTexture is pure virtual: true
// QSGTexture has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGTexture : public QSGTexture {
public:
  virtual ~MyQSGTexture() {}
// void QSGTexture()
MyQSGTexture() : QSGTexture() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture10metaObjectEv(void *this_) {
  return (void*)((QSGTexture*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:56
// [-2] void QSGTexture()
extern "C" Q_DECL_EXPORT
void* C_ZN10QSGTextureC2Ev() {
  return 0; // new QSGTexture();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:57
// [-2] void ~QSGTexture()
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTextureD2Ev(void *this_) {
  delete (QSGTexture*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:79
// [4] int textureId()
extern "C" Q_DECL_EXPORT
int C_ZNK10QSGTexture9textureIdEv(void *this_) {
  return (int)((QSGTexture*)this_)->textureId();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:80
// [8] QSize textureSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture11textureSizeEv(void *this_) {
  auto rv = ((QSGTexture*)this_)->textureSize();
return new QSize(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:81
// [1] bool hasAlphaChannel()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSGTexture15hasAlphaChannelEv(void *this_) {
  return (bool)((QSGTexture*)this_)->hasAlphaChannel();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:82
// [1] bool hasMipmaps()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSGTexture10hasMipmapsEv(void *this_) {
  return (bool)((QSGTexture*)this_)->hasMipmaps();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:84
// [32] QRectF normalizedTextureSubRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture24normalizedTextureSubRectEv(void *this_) {
  auto rv = ((QSGTexture*)this_)->normalizedTextureSubRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:86
// [1] bool isAtlasTexture()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSGTexture14isAtlasTextureEv(void *this_) {
  return (bool)((QSGTexture*)this_)->isAtlasTexture();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:88
// [8] QSGTexture * removedFromAtlas()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture16removedFromAtlasEv(void *this_) {
  return (void*)((QSGTexture*)this_)->removedFromAtlas();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:90
// [-2] void bind()
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture4bindEv(void *this_) {
  ((QSGTexture*)this_)->bind();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:91
// [-2] void updateBindOptions(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture17updateBindOptionsEb(void *this_, bool force) {
  ((QSGTexture*)this_)->updateBindOptions(force);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:93
// [-2] void setMipmapFiltering(enum QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture18setMipmapFilteringENS_9FilteringE(void *this_, QSGTexture::Filtering filter) {
  ((QSGTexture*)this_)->setMipmapFiltering(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:94
// [4] QSGTexture::Filtering mipmapFiltering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK10QSGTexture15mipmapFilteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGTexture*)this_)->mipmapFiltering();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:96
// [-2] void setFiltering(enum QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture12setFilteringENS_9FilteringE(void *this_, QSGTexture::Filtering filter) {
  ((QSGTexture*)this_)->setFiltering(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:97
// [4] QSGTexture::Filtering filtering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK10QSGTexture9filteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGTexture*)this_)->filtering();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:99
// [-2] void setAnisotropyLevel(enum QSGTexture::AnisotropyLevel)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture18setAnisotropyLevelENS_15AnisotropyLevelE(void *this_, QSGTexture::AnisotropyLevel level) {
  ((QSGTexture*)this_)->setAnisotropyLevel(level);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtQuick/qsgtexture.h:100
// [4] QSGTexture::AnisotropyLevel anisotropyLevel()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
QSGTexture::AnisotropyLevel C_ZNK10QSGTexture15anisotropyLevelEv(void *this_) {
  return (QSGTexture::AnisotropyLevel)((QSGTexture*)this_)->anisotropyLevel();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:102
// [-2] void setHorizontalWrapMode(enum QSGTexture::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture21setHorizontalWrapModeENS_8WrapModeE(void *this_, QSGTexture::WrapMode hwrap) {
  ((QSGTexture*)this_)->setHorizontalWrapMode(hwrap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:103
// [4] QSGTexture::WrapMode horizontalWrapMode()
extern "C" Q_DECL_EXPORT
QSGTexture::WrapMode C_ZNK10QSGTexture18horizontalWrapModeEv(void *this_) {
  return (QSGTexture::WrapMode)((QSGTexture*)this_)->horizontalWrapMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:105
// [-2] void setVerticalWrapMode(enum QSGTexture::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture19setVerticalWrapModeENS_8WrapModeE(void *this_, QSGTexture::WrapMode vwrap) {
  ((QSGTexture*)this_)->setVerticalWrapMode(vwrap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:106
// [4] QSGTexture::WrapMode verticalWrapMode()
extern "C" Q_DECL_EXPORT
QSGTexture::WrapMode C_ZNK10QSGTexture16verticalWrapModeEv(void *this_) {
  return (QSGTexture::WrapMode)((QSGTexture*)this_)->verticalWrapMode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:108
// [32] QRectF convertToNormalizedSourceRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture29convertToNormalizedSourceRectERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QSGTexture*)this_)->convertToNormalizedSourceRect(*rect);
return new QRectF(rv);
}

//  main block end
