// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qsgtexture.h
// dst-file: /src/quick/qsgtexture.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsgtexture.h>


#include <qrect.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qsgtexture_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 90, column 19>
//   // proto:  QRectF QSGTexture::convertToNormalizedSourceRect(const QRectF & rect);
if (true) {
  auto f = [](const QRectF & arg1) {
    ((QSGTexture*)0)->convertToNormalizedSourceRect(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QSGTexture29convertToNormalizedSourceRectERK6QRectF convertToNormalizedSourceRect(const class QRectF &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSGTexture_Class_Size()
{
  return sizeof(QSGTexture);
}

extern "C"
int QSGDynamicTexture_Class_Size()
{
  return sizeof(QSGDynamicTexture);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 87, column 10>
//   // proto:  void QSGTexture::setVerticalWrapMode(QSGTexture::WrapMode vwrap);
// _ZN10QSGTexture19setVerticalWrapModeENS_8WrapModeE setVerticalWrapMode(enum QSGTexture::WrapMode)
extern "C"
void
C_ZN10QSGTexture19setVerticalWrapModeENS_8WrapModeE(void *qthis,
QSGTexture::WrapMode arg1) {
  ((QSGTexture*)qthis)->setVerticalWrapMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 79, column 27>
//   // proto:  QSGTexture::Filtering QSGTexture::mipmapFiltering();
// _ZNK10QSGTexture15mipmapFilteringEv mipmapFiltering()
extern "C"
QSGTexture::Filtering
C_ZNK10QSGTexture15mipmapFilteringEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->mipmapFiltering();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 73, column 25>
//   // proto:  QSGTexture * QSGTexture::removedFromAtlas();
// _ZNK10QSGTexture16removedFromAtlasEv removedFromAtlas()
extern "C"
void*
C_ZNK10QSGTexture16removedFromAtlasEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->removedFromAtlas();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 76, column 10>
//   // proto:  void QSGTexture::updateBindOptions(bool force);
// _ZN10QSGTexture17updateBindOptionsEb updateBindOptions(_Bool)
extern "C"
void
C_ZN10QSGTexture17updateBindOptionsEb(void *qthis,
bool arg1) {
  ((QSGTexture*)qthis)->updateBindOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 75, column 18>
//   // proto:  void QSGTexture::bind();
// _ZN10QSGTexture4bindEv bind()
extern "C"
void
C_ZN10QSGTexture4bindEv(void *qthis) {
  ((QSGTexture*)qthis)->bind();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 71, column 18>
//   // proto:  bool QSGTexture::isAtlasTexture();
// _ZNK10QSGTexture14isAtlasTextureEv isAtlasTexture()
extern "C"
bool
C_ZNK10QSGTexture14isAtlasTextureEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->isAtlasTexture();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QSGTexture::~QSGTexture();
extern "C"
void C_ZN10QSGTextureD2Ev(void *qthis) {
  delete (QSGTexture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 81, column 10>
//   // proto:  void QSGTexture::setFiltering(QSGTexture::Filtering filter);
// _ZN10QSGTexture12setFilteringENS_9FilteringE setFiltering(enum QSGTexture::Filtering)
extern "C"
void
C_ZN10QSGTexture12setFilteringENS_9FilteringE(void *qthis,
QSGTexture::Filtering arg1) {
  ((QSGTexture*)qthis)->setFiltering(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 50, column 5>
//   // proto:  void QSGTexture::QSGTexture();
extern "C"
QSGTexture*
C_ZN10QSGTextureC2Ev() {
  // auto ret = new QSGTexture();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 88, column 26>
//   // proto:  QSGTexture::WrapMode QSGTexture::verticalWrapMode();
// _ZNK10QSGTexture16verticalWrapModeEv verticalWrapMode()
extern "C"
QSGTexture::WrapMode
C_ZNK10QSGTexture16verticalWrapModeEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->verticalWrapMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 84, column 10>
//   // proto:  void QSGTexture::setHorizontalWrapMode(QSGTexture::WrapMode hwrap);
// _ZN10QSGTexture21setHorizontalWrapModeENS_8WrapModeE setHorizontalWrapMode(enum QSGTexture::WrapMode)
extern "C"
void
C_ZN10QSGTexture21setHorizontalWrapModeENS_8WrapModeE(void *qthis,
QSGTexture::WrapMode arg1) {
  ((QSGTexture*)qthis)->setHorizontalWrapMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 46, column 5>
//   // proto:  const QMetaObject * QSGTexture::metaObject();
// _ZNK10QSGTexture10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QSGTexture10metaObjectEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 69, column 20>
//   // proto:  QRectF QSGTexture::normalizedTextureSubRect();
// _ZNK10QSGTexture24normalizedTextureSubRectEv normalizedTextureSubRect()
extern "C"
QRectF*
C_ZNK10QSGTexture24normalizedTextureSubRectEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->normalizedTextureSubRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 85, column 26>
//   // proto:  QSGTexture::WrapMode QSGTexture::horizontalWrapMode();
// _ZNK10QSGTexture18horizontalWrapModeEv horizontalWrapMode()
extern "C"
QSGTexture::WrapMode
C_ZNK10QSGTexture18horizontalWrapModeEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->horizontalWrapMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 65, column 19>
//   // proto:  QSize QSGTexture::textureSize();
// _ZNK10QSGTexture11textureSizeEv textureSize()
extern "C"
QSize*
C_ZNK10QSGTexture11textureSizeEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->textureSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 78, column 10>
//   // proto:  void QSGTexture::setMipmapFiltering(QSGTexture::Filtering filter);
// _ZN10QSGTexture18setMipmapFilteringENS_9FilteringE setMipmapFiltering(enum QSGTexture::Filtering)
extern "C"
void
C_ZN10QSGTexture18setMipmapFilteringENS_9FilteringE(void *qthis,
QSGTexture::Filtering arg1) {
  ((QSGTexture*)qthis)->setMipmapFiltering(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 66, column 18>
//   // proto:  bool QSGTexture::hasAlphaChannel();
// _ZNK10QSGTexture15hasAlphaChannelEv hasAlphaChannel()
extern "C"
bool
C_ZNK10QSGTexture15hasAlphaChannelEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->hasAlphaChannel();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 82, column 27>
//   // proto:  QSGTexture::Filtering QSGTexture::filtering();
// _ZNK10QSGTexture9filteringEv filtering()
extern "C"
QSGTexture::Filtering
C_ZNK10QSGTexture9filteringEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->filtering();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 64, column 17>
//   // proto:  int QSGTexture::textureId();
// _ZNK10QSGTexture9textureIdEv textureId()
extern "C"
int
C_ZNK10QSGTexture9textureIdEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->textureId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 90, column 19>
//   // proto:  QRectF QSGTexture::convertToNormalizedSourceRect(const QRectF & rect);
// _ZNK10QSGTexture29convertToNormalizedSourceRectERK6QRectF convertToNormalizedSourceRect(const class QRectF &)
extern "C"
QRectF*
C_ZNK10QSGTexture29convertToNormalizedSourceRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QSGTexture*)qthis)->convertToNormalizedSourceRect(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 67, column 18>
//   // proto:  bool QSGTexture::hasMipmaps();
// _ZNK10QSGTexture10hasMipmapsEv hasMipmaps()
extern "C"
bool
C_ZNK10QSGTexture10hasMipmapsEv(void *qthis) {
  auto ret =
  ((QSGTexture*)qthis)->hasMipmaps();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 113, column 5>
//   // proto:  const QMetaObject * QSGDynamicTexture::metaObject();
// _ZNK17QSGDynamicTexture10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QSGDynamicTexture10metaObjectEv(void *qthis) {
  auto ret =
  ((QSGDynamicTexture*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 115, column 18>
//   // proto:  bool QSGDynamicTexture::updateTexture();
// _ZN17QSGDynamicTexture13updateTextureEv updateTexture()
extern "C"
bool
C_ZN17QSGDynamicTexture13updateTextureEv(void *qthis) {
  auto ret =
  ((QSGDynamicTexture*)qthis)->updateTexture();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QSGTexture_SlotProxy here
class QSGTexture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGTexture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QSGTexture_SlotProxy* QSGTexture_SlotProxy_new()
  {
    return new QSGTexture_SlotProxy();
  }
};

// QSGDynamicTexture_SlotProxy here
class QSGDynamicTexture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGDynamicTexture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/quick/qsgtexture.moc"

extern "C" {
  QSGDynamicTexture_SlotProxy* QSGDynamicTexture_SlotProxy_new()
  {
    return new QSGDynamicTexture_SlotProxy();
  }
};

// <= body block end

