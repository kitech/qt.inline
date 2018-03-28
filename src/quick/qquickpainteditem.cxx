//  header block begin
// /usr/include/qt/QtQuick/qquickpainteditem.h
#ifndef protected
#define protected public
#endif
#include <qquickpainteditem.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickPaintedItem is pure virtual: true
// QQuickPaintedItem has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickPaintedItem : public QQuickPaintedItem {
public:
  virtual ~MyQQuickPaintedItem() {}
// void QQuickPaintedItem(QQuickItem *)
MyQQuickPaintedItem(QQuickItem * parent) : QQuickPaintedItem(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void releaseResources()
  virtual void releaseResources() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"releaseResources", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickPaintedItem::releaseResources();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:123
// [-2] void releaseResources()
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem16releaseResourcesEv(void *this_) {
  ((QQuickPaintedItem*)this_)->QQuickPaintedItem::releaseResources();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQuickPaintedItem10metaObjectEv(void *this_) {
  return (void*)((QQuickPaintedItem*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:60
// [-2] void QQuickPaintedItem(QQuickItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QQuickPaintedItemC2EP10QQuickItem(QQuickItem * parent) {
  auto _nilp = (MyQQuickPaintedItem*)(0);
  return 0; // new MyQQuickPaintedItem(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:61
// [-2] void ~QQuickPaintedItem()
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItemD2Ev(void *this_) {
  delete (QQuickPaintedItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:75
// [-2] void update(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem6updateERK5QRect(void *this_, QRect* rect) {
  ((QQuickPaintedItem*)this_)->update(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:77
// [1] bool opaquePainting()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQuickPaintedItem14opaquePaintingEv(void *this_) {
  return (bool)((QQuickPaintedItem*)this_)->opaquePainting();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:78
// [-2] void setOpaquePainting(bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem17setOpaquePaintingEb(void *this_, bool opaque) {
  ((QQuickPaintedItem*)this_)->setOpaquePainting(opaque);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:80
// [1] bool antialiasing()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQuickPaintedItem12antialiasingEv(void *this_) {
  return (bool)((QQuickPaintedItem*)this_)->antialiasing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:81
// [-2] void setAntialiasing(bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem15setAntialiasingEb(void *this_, bool enable) {
  ((QQuickPaintedItem*)this_)->setAntialiasing(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:83
// [1] bool mipmap()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQuickPaintedItem6mipmapEv(void *this_) {
  return (bool)((QQuickPaintedItem*)this_)->mipmap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:84
// [-2] void setMipmap(bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem9setMipmapEb(void *this_, bool enable) {
  ((QQuickPaintedItem*)this_)->setMipmap(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:86
// [4] QQuickPaintedItem::PerformanceHints performanceHints()
extern "C" Q_DECL_EXPORT
QQuickPaintedItem::PerformanceHints* C_ZNK17QQuickPaintedItem16performanceHintsEv(void *this_) {
  auto rv = ((QQuickPaintedItem*)this_)->performanceHints();
return new QQuickPaintedItem::PerformanceHints(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:87
// [-2] void setPerformanceHint(QQuickPaintedItem::PerformanceHint, bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem18setPerformanceHintENS_15PerformanceHintEb(void *this_, QQuickPaintedItem::PerformanceHint hint, bool enabled) {
  ((QQuickPaintedItem*)this_)->setPerformanceHint(hint, enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:88
// [-2] void setPerformanceHints(QQuickPaintedItem::PerformanceHints)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem19setPerformanceHintsE6QFlagsINS_15PerformanceHintEE(void *this_, QFlags<QQuickPaintedItem::PerformanceHint> hints) {
  ((QQuickPaintedItem*)this_)->setPerformanceHints(hints);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:90
// [32] QRectF contentsBoundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQuickPaintedItem20contentsBoundingRectEv(void *this_) {
  auto rv = ((QQuickPaintedItem*)this_)->contentsBoundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:92
// [8] QSize contentsSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQuickPaintedItem12contentsSizeEv(void *this_) {
  auto rv = ((QQuickPaintedItem*)this_)->contentsSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:93
// [-2] void setContentsSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem15setContentsSizeERK5QSize(void *this_, QSize* arg0) {
  ((QQuickPaintedItem*)this_)->setContentsSize(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:94
// [-2] void resetContentsSize()
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem17resetContentsSizeEv(void *this_) {
  ((QQuickPaintedItem*)this_)->resetContentsSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:96
// [8] qreal contentsScale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QQuickPaintedItem13contentsScaleEv(void *this_) {
  return (qreal)((QQuickPaintedItem*)this_)->contentsScale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:97
// [-2] void setContentsScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem16setContentsScaleEd(void *this_, qreal arg0) {
  ((QQuickPaintedItem*)this_)->setContentsScale(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:99
// [8] QSize textureSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQuickPaintedItem11textureSizeEv(void *this_) {
  auto rv = ((QQuickPaintedItem*)this_)->textureSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:100
// [-2] void setTextureSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem14setTextureSizeERK5QSize(void *this_, QSize* size) {
  ((QQuickPaintedItem*)this_)->setTextureSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:102
// [16] QColor fillColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQuickPaintedItem9fillColorEv(void *this_) {
  auto rv = ((QQuickPaintedItem*)this_)->fillColor();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:103
// [-2] void setFillColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem12setFillColorERK6QColor(void *this_, QColor* arg0) {
  ((QQuickPaintedItem*)this_)->setFillColor(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:105
// [4] QQuickPaintedItem::RenderTarget renderTarget()
extern "C" Q_DECL_EXPORT
QQuickPaintedItem::RenderTarget C_ZNK17QQuickPaintedItem12renderTargetEv(void *this_) {
  return (QQuickPaintedItem::RenderTarget)((QQuickPaintedItem*)this_)->renderTarget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:106
// [-2] void setRenderTarget(QQuickPaintedItem::RenderTarget)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem15setRenderTargetENS_12RenderTargetE(void *this_, QQuickPaintedItem::RenderTarget target) {
  ((QQuickPaintedItem*)this_)->setRenderTarget(target);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:108
// [-2] void paint(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem5paintEP8QPainter(void *this_, QPainter * painter) {
  ((QQuickPaintedItem*)this_)->paint(painter);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:110
// [1] bool isTextureProvider()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQuickPaintedItem17isTextureProviderEv(void *this_) {
  return (bool)((QQuickPaintedItem*)this_)->isTextureProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:111
// [8] QSGTextureProvider * textureProvider()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQuickPaintedItem15textureProviderEv(void *this_) {
  return (void*)((QQuickPaintedItem*)this_)->textureProvider();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:114
// [-2] void fillColorChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem16fillColorChangedEv(void *this_) {
  ((QQuickPaintedItem*)this_)->fillColorChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:115
// [-2] void contentsSizeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem19contentsSizeChangedEv(void *this_) {
  ((QQuickPaintedItem*)this_)->contentsSizeChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:116
// [-2] void contentsScaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem20contentsScaleChangedEv(void *this_) {
  ((QQuickPaintedItem*)this_)->contentsScaleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:117
// [-2] void renderTargetChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem19renderTargetChangedEv(void *this_) {
  ((QQuickPaintedItem*)this_)->renderTargetChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:118
// [-2] void textureSizeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QQuickPaintedItem18textureSizeChangedEv(void *this_) {
  ((QQuickPaintedItem*)this_)->textureSizeChanged();
}

//  main block end
