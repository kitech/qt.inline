// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquickpainteditem.h
// dst-file: /src/quick/qquickpainteditem.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquickpainteditem.h>


#include <qsize.h>
#include <qglobal.h>
#include <qcolor.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qquickpainteditem_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickPaintedItem_Class_Size()
{
  return sizeof(QQuickPaintedItem);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 95, column 10>
//   // proto:  void QQuickPaintedItem::setRenderTarget(QQuickPaintedItem::RenderTarget target);
// _ZN17QQuickPaintedItem15setRenderTargetENS_12RenderTargetE setRenderTarget(enum QQuickPaintedItem::RenderTarget)
extern "C"
void
C_ZN17QQuickPaintedItem15setRenderTargetENS_12RenderTargetE(void *qthis,
QQuickPaintedItem::RenderTarget arg1) {
  ((QQuickPaintedItem*)qthis)->setRenderTarget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 72, column 10>
//   // proto:  bool QQuickPaintedItem::antialiasing();
// _ZNK17QQuickPaintedItem12antialiasingEv antialiasing()
extern "C"
bool
C_ZNK17QQuickPaintedItem12antialiasingEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->antialiasing();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 100, column 25>
//   // proto:  QSGTextureProvider * QQuickPaintedItem::textureProvider();
// _ZNK17QQuickPaintedItem15textureProviderEv textureProvider()
extern "C"
void*
C_ZNK17QQuickPaintedItem15textureProviderEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->textureProvider();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 45, column 5>
//   // proto:  const QMetaObject * QQuickPaintedItem::metaObject();
// _ZNK17QQuickPaintedItem10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QQuickPaintedItem10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 78, column 22>
//   // proto:  PerformanceHints QQuickPaintedItem::performanceHints();
// _ZNK17QQuickPaintedItem16performanceHintsEv performanceHints()
extern "C"
QFlags<QQuickPaintedItem::PerformanceHint>*
C_ZNK17QQuickPaintedItem16performanceHintsEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->performanceHints();
  return new QFlags<QQuickPaintedItem::PerformanceHint>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 79, column 10>
//   // proto:  void QQuickPaintedItem::setPerformanceHint(QQuickPaintedItem::PerformanceHint hint, bool enabled);
// _ZN17QQuickPaintedItem18setPerformanceHintENS_15PerformanceHintEb setPerformanceHint(enum QQuickPaintedItem::PerformanceHint, _Bool)
extern "C"
void
C_ZN17QQuickPaintedItem18setPerformanceHintENS_15PerformanceHintEb(void *qthis,
QQuickPaintedItem::PerformanceHint arg1,
bool arg2) {
  ((QQuickPaintedItem*)qthis)->setPerformanceHint(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 76, column 10>
//   // proto:  void QQuickPaintedItem::setMipmap(bool enable);
// _ZN17QQuickPaintedItem9setMipmapEb setMipmap(_Bool)
extern "C"
void
C_ZN17QQuickPaintedItem9setMipmapEb(void *qthis,
bool arg1) {
  ((QQuickPaintedItem*)qthis)->setMipmap(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 53, column 5>
//   // proto:  void QQuickPaintedItem::QQuickPaintedItem(QQuickItem * parent);
extern "C"
QQuickPaintedItem*
C_ZN17QQuickPaintedItemC2EP10QQuickItem(QQuickItem * arg1) {
  // auto ret = new QQuickPaintedItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 80, column 10>
//   // proto:  void QQuickPaintedItem::setPerformanceHints(PerformanceHints hints);
// _ZN17QQuickPaintedItem19setPerformanceHintsE6QFlagsINS_15PerformanceHintEE setPerformanceHints(PerformanceHints)
extern "C"
void
C_ZN17QQuickPaintedItem19setPerformanceHintsE6QFlagsINS_15PerformanceHintEE(void *qthis,
QQuickPaintedItem::PerformanceHints arg1) {
  ((QQuickPaintedItem*)qthis)->setPerformanceHints(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 84, column 11>
//   // proto:  QSize QQuickPaintedItem::contentsSize();
// _ZNK17QQuickPaintedItem12contentsSizeEv contentsSize()
extern "C"
QSize*
C_ZNK17QQuickPaintedItem12contentsSizeEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->contentsSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 73, column 10>
//   // proto:  void QQuickPaintedItem::setAntialiasing(bool enable);
// _ZN17QQuickPaintedItem15setAntialiasingEb setAntialiasing(_Bool)
extern "C"
void
C_ZN17QQuickPaintedItem15setAntialiasingEb(void *qthis,
bool arg1) {
  ((QQuickPaintedItem*)qthis)->setAntialiasing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 88, column 11>
//   // proto:  qreal QQuickPaintedItem::contentsScale();
// _ZNK17QQuickPaintedItem13contentsScaleEv contentsScale()
extern "C"
double
C_ZNK17QQuickPaintedItem13contentsScaleEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->contentsScale();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 104, column 10>
//   // proto:  void QQuickPaintedItem::contentsSizeChanged();
// _ZN17QQuickPaintedItem19contentsSizeChangedEv contentsSizeChanged()
extern "C"
void
C_ZN17QQuickPaintedItem19contentsSizeChangedEv(void *qthis) {
  ((QQuickPaintedItem*)qthis)->contentsSizeChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 99, column 10>
//   // proto:  bool QQuickPaintedItem::isTextureProvider();
// _ZNK17QQuickPaintedItem17isTextureProviderEv isTextureProvider()
extern "C"
bool
C_ZNK17QQuickPaintedItem17isTextureProviderEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->isTextureProvider();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QQuickPaintedItem::~QQuickPaintedItem();
extern "C"
void C_ZN17QQuickPaintedItemD2Ev(void *qthis) {
  delete (QQuickPaintedItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 91, column 12>
//   // proto:  QColor QQuickPaintedItem::fillColor();
// _ZNK17QQuickPaintedItem9fillColorEv fillColor()
extern "C"
QColor*
C_ZNK17QQuickPaintedItem9fillColorEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->fillColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 94, column 18>
//   // proto:  QQuickPaintedItem::RenderTarget QQuickPaintedItem::renderTarget();
// _ZNK17QQuickPaintedItem12renderTargetEv renderTarget()
extern "C"
QQuickPaintedItem::RenderTarget
C_ZNK17QQuickPaintedItem12renderTargetEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->renderTarget();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 103, column 10>
//   // proto:  void QQuickPaintedItem::fillColorChanged();
// _ZN17QQuickPaintedItem16fillColorChangedEv fillColorChanged()
extern "C"
void
C_ZN17QQuickPaintedItem16fillColorChangedEv(void *qthis) {
  ((QQuickPaintedItem*)qthis)->fillColorChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 70, column 10>
//   // proto:  void QQuickPaintedItem::setOpaquePainting(bool opaque);
// _ZN17QQuickPaintedItem17setOpaquePaintingEb setOpaquePainting(_Bool)
extern "C"
void
C_ZN17QQuickPaintedItem17setOpaquePaintingEb(void *qthis,
bool arg1) {
  ((QQuickPaintedItem*)qthis)->setOpaquePainting(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 105, column 10>
//   // proto:  void QQuickPaintedItem::contentsScaleChanged();
// _ZN17QQuickPaintedItem20contentsScaleChangedEv contentsScaleChanged()
extern "C"
void
C_ZN17QQuickPaintedItem20contentsScaleChangedEv(void *qthis) {
  ((QQuickPaintedItem*)qthis)->contentsScaleChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 75, column 10>
//   // proto:  bool QQuickPaintedItem::mipmap();
// _ZNK17QQuickPaintedItem6mipmapEv mipmap()
extern "C"
bool
C_ZNK17QQuickPaintedItem6mipmapEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->mipmap();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 92, column 10>
//   // proto:  void QQuickPaintedItem::setFillColor(const QColor & );
// _ZN17QQuickPaintedItem12setFillColorERK6QColor setFillColor(const class QColor &)
extern "C"
void
C_ZN17QQuickPaintedItem12setFillColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QQuickPaintedItem*)qthis)->setFillColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 86, column 10>
//   // proto:  void QQuickPaintedItem::resetContentsSize();
// _ZN17QQuickPaintedItem17resetContentsSizeEv resetContentsSize()
extern "C"
void
C_ZN17QQuickPaintedItem17resetContentsSizeEv(void *qthis) {
  ((QQuickPaintedItem*)qthis)->resetContentsSize();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 82, column 12>
//   // proto:  QRectF QQuickPaintedItem::contentsBoundingRect();
// _ZNK17QQuickPaintedItem20contentsBoundingRectEv contentsBoundingRect()
extern "C"
QRectF*
C_ZNK17QQuickPaintedItem20contentsBoundingRectEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->contentsBoundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 106, column 10>
//   // proto:  void QQuickPaintedItem::renderTargetChanged();
// _ZN17QQuickPaintedItem19renderTargetChangedEv renderTargetChanged()
extern "C"
void
C_ZN17QQuickPaintedItem19renderTargetChangedEv(void *qthis) {
  ((QQuickPaintedItem*)qthis)->renderTargetChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 67, column 10>
//   // proto:  void QQuickPaintedItem::update(const QRect & rect);
// _ZN17QQuickPaintedItem6updateERK5QRect update(const class QRect &)
extern "C"
void
C_ZN17QQuickPaintedItem6updateERK5QRect(void *qthis,
const QRect* arg1) {
  ((QQuickPaintedItem*)qthis)->update(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 69, column 10>
//   // proto:  bool QQuickPaintedItem::opaquePainting();
// _ZNK17QQuickPaintedItem14opaquePaintingEv opaquePainting()
extern "C"
bool
C_ZNK17QQuickPaintedItem14opaquePaintingEv(void *qthis) {
  auto ret =
  ((QQuickPaintedItem*)qthis)->opaquePainting();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 85, column 10>
//   // proto:  void QQuickPaintedItem::setContentsSize(const QSize & );
// _ZN17QQuickPaintedItem15setContentsSizeERK5QSize setContentsSize(const class QSize &)
extern "C"
void
C_ZN17QQuickPaintedItem15setContentsSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QQuickPaintedItem*)qthis)->setContentsSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 97, column 18>
//   // proto:  void QQuickPaintedItem::paint(QPainter * painter);
// _ZN17QQuickPaintedItem5paintEP8QPainter paint(class QPainter *)
extern "C"
void
C_ZN17QQuickPaintedItem5paintEP8QPainter(void *qthis,
QPainter * arg1) {
  ((QQuickPaintedItem*)qthis)->paint(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickpainteditem.h', line 89, column 10>
//   // proto:  void QQuickPaintedItem::setContentsScale(qreal );
// _ZN17QQuickPaintedItem16setContentsScaleEd setContentsScale(qreal)
extern "C"
void
C_ZN17QQuickPaintedItem16setContentsScaleEd(void *qthis,
qreal arg1) {
  ((QQuickPaintedItem*)qthis)->setContentsScale(arg1);
}
// <= ext block end

// body block begin =>
// QQuickPaintedItem_SlotProxy here
class QQuickPaintedItem_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickPaintedItem_SlotProxy():QObject(){}

public slots:
  // renderTargetChanged()
  void slot_proxy_func__ZN17QQuickPaintedItem19renderTargetChangedEv();
public:
  void (*slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv)(void* rsfptr) = NULL;
public slots:
  // contentsScaleChanged()
  void slot_proxy_func__ZN17QQuickPaintedItem20contentsScaleChangedEv();
public:
  void (*slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // contentsSizeChanged()
  void slot_proxy_func__ZN17QQuickPaintedItem19contentsSizeChangedEv();
public:
  void (*slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv)(void* rsfptr) = NULL;
public slots:
  // fillColorChanged()
  void slot_proxy_func__ZN17QQuickPaintedItem16fillColorChangedEv();
public:
  void (*slot_func__ZN17QQuickPaintedItem16fillColorChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickpainteditem.moc"

extern "C" {
  QQuickPaintedItem_SlotProxy* QQuickPaintedItem_SlotProxy_new()
  {
    return new QQuickPaintedItem_SlotProxy();
  }
};

void QQuickPaintedItem_SlotProxy::slot_proxy_func__ZN17QQuickPaintedItem19renderTargetChangedEv() {
  if (this->slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickPaintedItem_SlotProxy_connect__ZN17QQuickPaintedItem19renderTargetChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickPaintedItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv = (decltype(that->slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv))ffifptr;
  QObject::connect((QQuickPaintedItem*)sender, SIGNAL(renderTargetChanged()), that, SLOT(slot_proxy_func__ZN17QQuickPaintedItem19renderTargetChangedEv()));
  return that;
}
extern "C"
void QQuickPaintedItem_SlotProxy_disconnect__ZN17QQuickPaintedItem19renderTargetChangedEv(QQuickPaintedItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickPaintedItem_SlotProxy::slot_proxy_func__ZN17QQuickPaintedItem20contentsScaleChangedEv() {
  if (this->slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickPaintedItem_SlotProxy_connect__ZN17QQuickPaintedItem20contentsScaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickPaintedItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv = (decltype(that->slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv))ffifptr;
  QObject::connect((QQuickPaintedItem*)sender, SIGNAL(contentsScaleChanged()), that, SLOT(slot_proxy_func__ZN17QQuickPaintedItem20contentsScaleChangedEv()));
  return that;
}
extern "C"
void QQuickPaintedItem_SlotProxy_disconnect__ZN17QQuickPaintedItem20contentsScaleChangedEv(QQuickPaintedItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickPaintedItem_SlotProxy::slot_proxy_func__ZN17QQuickPaintedItem19contentsSizeChangedEv() {
  if (this->slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickPaintedItem_SlotProxy_connect__ZN17QQuickPaintedItem19contentsSizeChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickPaintedItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv = (decltype(that->slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv))ffifptr;
  QObject::connect((QQuickPaintedItem*)sender, SIGNAL(contentsSizeChanged()), that, SLOT(slot_proxy_func__ZN17QQuickPaintedItem19contentsSizeChangedEv()));
  return that;
}
extern "C"
void QQuickPaintedItem_SlotProxy_disconnect__ZN17QQuickPaintedItem19contentsSizeChangedEv(QQuickPaintedItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickPaintedItem_SlotProxy::slot_proxy_func__ZN17QQuickPaintedItem16fillColorChangedEv() {
  if (this->slot_func__ZN17QQuickPaintedItem16fillColorChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QQuickPaintedItem16fillColorChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickPaintedItem_SlotProxy_connect__ZN17QQuickPaintedItem16fillColorChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickPaintedItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QQuickPaintedItem16fillColorChangedEv = (decltype(that->slot_func__ZN17QQuickPaintedItem16fillColorChangedEv))ffifptr;
  QObject::connect((QQuickPaintedItem*)sender, SIGNAL(fillColorChanged()), that, SLOT(slot_proxy_func__ZN17QQuickPaintedItem16fillColorChangedEv()));
  return that;
}
extern "C"
void QQuickPaintedItem_SlotProxy_disconnect__ZN17QQuickPaintedItem16fillColorChangedEv(QQuickPaintedItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

