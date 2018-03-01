//  header block begin
// /usr/include/qt/QtQuick/qsgimagenode.h
#ifndef protected
#define protected public
#endif
#include <qsgimagenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGImageNode is pure virtual: true
// QSGImageNode has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGImageNode : public QSGImageNode {
public:
  virtual ~MyQSGImageNode() {}
};

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:51
// [-2] void ~QSGImageNode()
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNodeD2Ev(void *this_) {
  delete (QSGImageNode*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:53
// [-2] void setRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode7setRectERK6QRectF(void *this_, QRectF* rect) {
  ((QSGImageNode*)this_)->setRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:54
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGImageNode*)this_)->setRect(x, y, w, h);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:55
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSGImageNode4rectEv(void *this_) {
  auto rv = ((QSGImageNode*)this_)->rect();
return new QRectF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:57
// [-2] void setSourceRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode13setSourceRectERK6QRectF(void *this_, QRectF* r) {
  ((QSGImageNode*)this_)->setSourceRect(*r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:58
// [-2] void setSourceRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode13setSourceRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGImageNode*)this_)->setSourceRect(x, y, w, h);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:59
// [32] QRectF sourceRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSGImageNode10sourceRectEv(void *this_) {
  auto rv = ((QSGImageNode*)this_)->sourceRect();
return new QRectF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:61
// [-2] void setTexture(class QSGTexture *)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode10setTextureEP10QSGTexture(void *this_, QSGTexture * texture) {
  ((QSGImageNode*)this_)->setTexture(texture);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:62
// [8] QSGTexture * texture()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSGImageNode7textureEv(void *this_) {
  return (void*)((QSGImageNode*)this_)->texture();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:64
// [-2] void setFiltering(class QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode12setFilteringEN10QSGTexture9FilteringE(void *this_, QSGTexture::Filtering filtering) {
  ((QSGImageNode*)this_)->setFiltering(filtering);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:65
// [4] QSGTexture::Filtering filtering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK12QSGImageNode9filteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGImageNode*)this_)->filtering();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:67
// [-2] void setMipmapFiltering(class QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode18setMipmapFilteringEN10QSGTexture9FilteringE(void *this_, QSGTexture::Filtering filtering) {
  ((QSGImageNode*)this_)->setMipmapFiltering(filtering);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:68
// [4] QSGTexture::Filtering mipmapFiltering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK12QSGImageNode15mipmapFilteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGImageNode*)this_)->mipmapFiltering();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:79
// [-2] void setTextureCoordinatesTransform(QSGImageNode::TextureCoordinatesTransformMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode30setTextureCoordinatesTransformE6QFlagsINS_31TextureCoordinatesTransformFlagEE(void *this_, QFlags<QSGImageNode::TextureCoordinatesTransformFlag> mode) {
  ((QSGImageNode*)this_)->setTextureCoordinatesTransform(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:80
// [4] QSGImageNode::TextureCoordinatesTransformMode textureCoordinatesTransform()
extern "C" Q_DECL_EXPORT
QSGImageNode::TextureCoordinatesTransformMode* C_ZNK12QSGImageNode27textureCoordinatesTransformEv(void *this_) {
  auto rv = ((QSGImageNode*)this_)->textureCoordinatesTransform();
return new QSGImageNode::TextureCoordinatesTransformMode(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:82
// [-2] void setOwnsTexture(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode14setOwnsTextureEb(void *this_, bool owns) {
  ((QSGImageNode*)this_)->setOwnsTexture(owns);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:83
// [1] bool ownsTexture()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSGImageNode11ownsTextureEv(void *this_) {
  return (bool)((QSGImageNode*)this_)->ownsTexture();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:85
// [-2] void rebuildGeometry(class QSGGeometry *, class QSGTexture *, const class QRectF &, class QRectF, QSGImageNode::TextureCoordinatesTransformMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode15rebuildGeometryEP11QSGGeometryP10QSGTextureRK6QRectFS4_6QFlagsINS_31TextureCoordinatesTransformFlagEE(QSGGeometry * g, QSGTexture * texture, QRectF* rect, QRectF* sourceRect, QFlags<QSGImageNode::TextureCoordinatesTransformFlag> texCoordMode) {
  QSGImageNode::rebuildGeometry(g, texture, *rect, *sourceRect, texCoordMode);
}
//  main block end
