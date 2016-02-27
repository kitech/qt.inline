// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qsgsimpletexturenode.h
// dst-file: /src/quick/qsgsimpletexturenode.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsgsimpletexturenode.h>


#include <qsgtexture.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qsgsimpletexturenode_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 56, column 17>
//   // proto:  void QSGSimpleTextureNode::setSourceRect(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](QSGSimpleTextureNode flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QSGSimpleTextureNode*)0)->setSourceRect(arg1, arg2, arg3, arg4);
    flythis.setSourceRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN20QSGSimpleTextureNode13setSourceRectEdddd setSourceRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 52, column 17>
//   // proto:  void QSGSimpleTextureNode::setRect(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](QSGSimpleTextureNode flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QSGSimpleTextureNode*)0)->setRect(arg1, arg2, arg3, arg4);
    flythis.setRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN20QSGSimpleTextureNode7setRectEdddd setRect(qreal, qreal, qreal, qreal)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSGSimpleTextureNode_Class_Size()
{
  return sizeof(QSGSimpleTextureNode);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 56, column 17>
//   // proto:  void QSGSimpleTextureNode::setSourceRect(qreal x, qreal y, qreal w, qreal h);
// _ZN20QSGSimpleTextureNode13setSourceRectEdddd setSourceRect(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN20QSGSimpleTextureNode13setSourceRectEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QSGSimpleTextureNode*)qthis)->setSourceRect(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 75, column 10>
//   // proto:  void QSGSimpleTextureNode::setOwnsTexture(bool owns);
// _ZN20QSGSimpleTextureNode14setOwnsTextureEb setOwnsTexture(_Bool)
extern "C"
void
C_ZN20QSGSimpleTextureNode14setOwnsTextureEb(void *qthis,
bool arg1) {
  ((QSGSimpleTextureNode*)qthis)->setOwnsTexture(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 76, column 10>
//   // proto:  bool QSGSimpleTextureNode::ownsTexture();
// _ZNK20QSGSimpleTextureNode11ownsTextureEv ownsTexture()
extern "C"
bool
C_ZNK20QSGSimpleTextureNode11ownsTextureEv(void *qthis) {
  auto ret =
  ((QSGSimpleTextureNode*)qthis)->ownsTexture();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 73, column 37>
//   // proto:  TextureCoordinatesTransformMode QSGSimpleTextureNode::textureCoordinatesTransform();
// _ZNK20QSGSimpleTextureNode27textureCoordinatesTransformEv textureCoordinatesTransform()
extern "C"
QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag>*
C_ZNK20QSGSimpleTextureNode27textureCoordinatesTransformEv(void *qthis) {
  auto ret =
  ((QSGSimpleTextureNode*)qthis)->textureCoordinatesTransform();
  return new QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 63, column 27>
//   // proto:  QSGTexture::Filtering QSGSimpleTextureNode::filtering();
// _ZNK20QSGSimpleTextureNode9filteringEv filtering()
extern "C"
QSGTexture::Filtering
C_ZNK20QSGSimpleTextureNode9filteringEv(void *qthis) {
  auto ret =
  ((QSGSimpleTextureNode*)qthis)->filtering();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QSGSimpleTextureNode::~QSGSimpleTextureNode();
extern "C"
void C_ZN20QSGSimpleTextureNodeD2Ev(void *qthis) {
  delete (QSGSimpleTextureNode*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 52, column 17>
//   // proto:  void QSGSimpleTextureNode::setRect(qreal x, qreal y, qreal w, qreal h);
// _ZN20QSGSimpleTextureNode7setRectEdddd setRect(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN20QSGSimpleTextureNode7setRectEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QSGSimpleTextureNode*)qthis)->setRect(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 57, column 12>
//   // proto:  QRectF QSGSimpleTextureNode::sourceRect();
// _ZNK20QSGSimpleTextureNode10sourceRectEv sourceRect()
extern "C"
QRectF*
C_ZNK20QSGSimpleTextureNode10sourceRectEv(void *qthis) {
  auto ret =
  ((QSGSimpleTextureNode*)qthis)->sourceRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 60, column 17>
//   // proto:  QSGTexture * QSGSimpleTextureNode::texture();
// _ZNK20QSGSimpleTextureNode7textureEv texture()
extern "C"
void*
C_ZNK20QSGSimpleTextureNode7textureEv(void *qthis) {
  auto ret =
  ((QSGSimpleTextureNode*)qthis)->texture();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 51, column 10>
//   // proto:  void QSGSimpleTextureNode::setRect(const QRectF & rect);
// _ZN20QSGSimpleTextureNode7setRectERK6QRectF setRect(const class QRectF &)
extern "C"
void
C_ZN20QSGSimpleTextureNode7setRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QSGSimpleTextureNode*)qthis)->setRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 62, column 10>
//   // proto:  void QSGSimpleTextureNode::setFiltering(QSGTexture::Filtering filtering);
// _ZN20QSGSimpleTextureNode12setFilteringEN10QSGTexture9FilteringE setFiltering(class QSGTexture::Filtering)
extern "C"
void
C_ZN20QSGSimpleTextureNode12setFilteringEN10QSGTexture9FilteringE(void *qthis,
QSGTexture::Filtering* arg1) {
  ((QSGSimpleTextureNode*)qthis)->setFiltering(*((QSGTexture::Filtering*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 59, column 10>
//   // proto:  void QSGSimpleTextureNode::setTexture(QSGTexture * texture);
// _ZN20QSGSimpleTextureNode10setTextureEP10QSGTexture setTexture(class QSGTexture *)
extern "C"
void
C_ZN20QSGSimpleTextureNode10setTextureEP10QSGTexture(void *qthis,
QSGTexture * arg1) {
  ((QSGSimpleTextureNode*)qthis)->setTexture(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 55, column 10>
//   // proto:  void QSGSimpleTextureNode::setSourceRect(const QRectF & r);
// _ZN20QSGSimpleTextureNode13setSourceRectERK6QRectF setSourceRect(const class QRectF &)
extern "C"
void
C_ZN20QSGSimpleTextureNode13setSourceRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QSGSimpleTextureNode*)qthis)->setSourceRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 53, column 12>
//   // proto:  QRectF QSGSimpleTextureNode::rect();
// _ZNK20QSGSimpleTextureNode4rectEv rect()
extern "C"
QRectF*
C_ZNK20QSGSimpleTextureNode4rectEv(void *qthis) {
  auto ret =
  ((QSGSimpleTextureNode*)qthis)->rect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 72, column 10>
//   // proto:  void QSGSimpleTextureNode::setTextureCoordinatesTransform(TextureCoordinatesTransformMode mode);
// _ZN20QSGSimpleTextureNode30setTextureCoordinatesTransformE6QFlagsINS_31TextureCoordinatesTransformFlagEE setTextureCoordinatesTransform(TextureCoordinatesTransformMode)
extern "C"
void
C_ZN20QSGSimpleTextureNode30setTextureCoordinatesTransformE6QFlagsINS_31TextureCoordinatesTransformFlagEE(void *qthis,
QSGSimpleTextureNode::TextureCoordinatesTransformMode arg1) {
  ((QSGSimpleTextureNode*)qthis)->setTextureCoordinatesTransform(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimpletexturenode.h', line 48, column 5>
//   // proto:  void QSGSimpleTextureNode::QSGSimpleTextureNode();
extern "C"
QSGSimpleTextureNode*
C_ZN20QSGSimpleTextureNodeC2Ev() {
  auto ret = new QSGSimpleTextureNode();
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

