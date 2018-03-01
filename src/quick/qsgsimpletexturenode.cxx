//  header block begin
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h
#ifndef protected
#define protected public
#endif
#include <qsgsimpletexturenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGSimpleTextureNode is pure virtual: false
// QSGSimpleTextureNode has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGSimpleTextureNode : public QSGSimpleTextureNode {
public:
  virtual ~MyQSGSimpleTextureNode() {}
// void QSGSimpleTextureNode()
MyQSGSimpleTextureNode() : QSGSimpleTextureNode() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:54
// [-2] void QSGSimpleTextureNode()
extern "C" Q_DECL_EXPORT
void* C_ZN20QSGSimpleTextureNodeC2Ev() {
  return  new QSGSimpleTextureNode();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:55
// [-2] void ~QSGSimpleTextureNode()
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNodeD2Ev(void *this_) {
  delete (QSGSimpleTextureNode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:57
// [-2] void setRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNode7setRectERK6QRectF(void *this_, QRectF* rect) {
  ((QSGSimpleTextureNode*)this_)->setRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:58
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNode7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGSimpleTextureNode*)this_)->setRect(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:59
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGSimpleTextureNode4rectEv(void *this_) {
  auto rv = ((QSGSimpleTextureNode*)this_)->rect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:61
// [-2] void setSourceRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNode13setSourceRectERK6QRectF(void *this_, QRectF* r) {
  ((QSGSimpleTextureNode*)this_)->setSourceRect(*r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:62
// [-2] void setSourceRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNode13setSourceRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGSimpleTextureNode*)this_)->setSourceRect(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:63
// [32] QRectF sourceRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGSimpleTextureNode10sourceRectEv(void *this_) {
  auto rv = ((QSGSimpleTextureNode*)this_)->sourceRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:65
// [-2] void setTexture(class QSGTexture *)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNode10setTextureEP10QSGTexture(void *this_, QSGTexture * texture) {
  ((QSGSimpleTextureNode*)this_)->setTexture(texture);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:66
// [8] QSGTexture * texture()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGSimpleTextureNode7textureEv(void *this_) {
  return (void*)((QSGSimpleTextureNode*)this_)->texture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:68
// [-2] void setFiltering(class QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNode12setFilteringEN10QSGTexture9FilteringE(void *this_, QSGTexture::Filtering filtering) {
  ((QSGSimpleTextureNode*)this_)->setFiltering(filtering);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:69
// [4] QSGTexture::Filtering filtering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK20QSGSimpleTextureNode9filteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGSimpleTextureNode*)this_)->filtering();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:78
// [-2] void setTextureCoordinatesTransform(QSGSimpleTextureNode::TextureCoordinatesTransformMode)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNode30setTextureCoordinatesTransformE6QFlagsINS_31TextureCoordinatesTransformFlagEE(void *this_, QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag> mode) {
  ((QSGSimpleTextureNode*)this_)->setTextureCoordinatesTransform(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:79
// [4] QSGSimpleTextureNode::TextureCoordinatesTransformMode textureCoordinatesTransform()
extern "C" Q_DECL_EXPORT
QSGSimpleTextureNode::TextureCoordinatesTransformMode* C_ZNK20QSGSimpleTextureNode27textureCoordinatesTransformEv(void *this_) {
  auto rv = ((QSGSimpleTextureNode*)this_)->textureCoordinatesTransform();
return new QSGSimpleTextureNode::TextureCoordinatesTransformMode(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:81
// [-2] void setOwnsTexture(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGSimpleTextureNode14setOwnsTextureEb(void *this_, bool owns) {
  ((QSGSimpleTextureNode*)this_)->setOwnsTexture(owns);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:82
// [1] bool ownsTexture()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QSGSimpleTextureNode11ownsTextureEv(void *this_) {
  return (bool)((QSGSimpleTextureNode*)this_)->ownsTexture();
}

//  main block end
