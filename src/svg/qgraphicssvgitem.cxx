//  header block begin
// since 0x040200
// /usr/include/qt/QtSvg/qgraphicssvgitem.h
#ifndef protected
#define protected public
#endif
#include <qgraphicssvgitem.h>
#include <QtSvg>
#include "callback_inherit.h"

// QGraphicsSvgItem is pure virtual: false
// QGraphicsSvgItem has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsSvgItem : public QGraphicsSvgItem {
public:
  virtual ~MyQGraphicsSvgItem() {}
// void QGraphicsSvgItem(QGraphicsItem *)
MyQGraphicsSvgItem(QGraphicsItem * parentItem) : QGraphicsSvgItem(parentItem) {}
// void QGraphicsSvgItem(const QString &, QGraphicsItem *)
MyQGraphicsSvgItem(const QString & fileName, QGraphicsItem * parentItem) : QGraphicsSvgItem(fileName, parentItem) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem10metaObjectEv(void *this_) {
  return (void*)((QGraphicsSvgItem*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItem11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsSvgItem*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QGraphicsSvgItem11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsSvgItem*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItem2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsSvgItem::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItem6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsSvgItem::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:64
// [-2] void QGraphicsSvgItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItemC2EP13QGraphicsItem(QGraphicsItem * parentItem) {
  return  new QGraphicsSvgItem(parentItem);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:65
// [-2] void QGraphicsSvgItem(const QString &, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItemC2ERK7QStringP13QGraphicsItem(QString* fileName, QGraphicsItem * parentItem) {
  return  new QGraphicsSvgItem(*fileName, parentItem);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:67
// [-2] void setSharedRenderer(QSvgRenderer *)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem17setSharedRendererEP12QSvgRenderer(void *this_, QSvgRenderer * renderer) {
  ((QGraphicsSvgItem*)this_)->setSharedRenderer(renderer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:68
// [8] QSvgRenderer * renderer()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem8rendererEv(void *this_) {
  return (void*)((QGraphicsSvgItem*)this_)->renderer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:70
// [-2] void setElementId(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem12setElementIdERK7QString(void *this_, QString* id) {
  ((QGraphicsSvgItem*)this_)->setElementId(*id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:71
// [8] QString elementId()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem9elementIdEv(void *this_) {
  auto rv = ((QGraphicsSvgItem*)this_)->elementId();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:73
// [-2] void setCachingEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem17setCachingEnabledEb(void *this_, bool arg0) {
  ((QGraphicsSvgItem*)this_)->setCachingEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:74
// [1] bool isCachingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGraphicsSvgItem16isCachingEnabledEv(void *this_) {
  return (bool)((QGraphicsSvgItem*)this_)->isCachingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:76
// [-2] void setMaximumCacheSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem19setMaximumCacheSizeERK5QSize(void *this_, QSize* size) {
  ((QGraphicsSvgItem*)this_)->setMaximumCacheSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:77
// [8] QSize maximumCacheSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem16maximumCacheSizeEv(void *this_) {
  auto rv = ((QGraphicsSvgItem*)this_)->maximumCacheSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:79
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsSvgItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:81
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsSvgItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:86
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK16QGraphicsSvgItem4typeEv(void *this_) {
  return (int)((QGraphicsSvgItem*)this_)->type();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItemD2Ev(void *this_) {
  delete (QGraphicsSvgItem*)(this_);
}
//  main block end
