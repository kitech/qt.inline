//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsPixmapItem is pure virtual: false
// QGraphicsPixmapItem has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZNK19QGraphicsPixmapItem17supportsExtensionEN13QGraphicsItem9ExtensionE_fnptr = 0;
// extern "C" void set_callback_ZNK19QGraphicsPixmapItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void*cbfn)
// { callback_ZNK19QGraphicsPixmapItem17supportsExtensionEN13QGraphicsItem9ExtensionE_fnptr = cbfn; }
// void* callback_ZN19QGraphicsPixmapItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant_fnptr = 0;
// extern "C" void set_callback_ZN19QGraphicsPixmapItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void*cbfn)
// { callback_ZN19QGraphicsPixmapItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant_fnptr = cbfn; }
// void* callback_ZNK19QGraphicsPixmapItem9extensionERK8QVariant_fnptr = 0;
// extern "C" void set_callback_ZNK19QGraphicsPixmapItem9extensionERK8QVariant(void*cbfn)
// { callback_ZNK19QGraphicsPixmapItem9extensionERK8QVariant_fnptr = cbfn; }

class MyQGraphicsPixmapItem : public QGraphicsPixmapItem {
public:
  virtual ~MyQGraphicsPixmapItem() {}
// void QGraphicsPixmapItem(class QGraphicsItem *)
MyQGraphicsPixmapItem(QGraphicsItem * parent) : QGraphicsPixmapItem(parent) {}
// void QGraphicsPixmapItem(const class QPixmap &, class QGraphicsItem *)
MyQGraphicsPixmapItem(const QPixmap & pixmap, QGraphicsItem * parent) : QGraphicsPixmapItem(pixmap, parent) {}
// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QGraphicsItem::Extension))(callback_ZNK19QGraphicsPixmapItem17supportsExtensionEN13QGraphicsItem9ExtensionE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , extension);
    // }
    return QGraphicsPixmapItem::supportsExtension(extension);
  }
  }
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QGraphicsItem::Extension, QVariant*))(callback_ZN19QGraphicsPixmapItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , extension, (QVariant*)&variant);
    // }
    QGraphicsPixmapItem::setExtension(extension, variant);
  }
  }
// QVariant extension(const class QVariant &)
  virtual QVariant extension(const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    // auto fnptr = ((QVariant (*)(void* , QVariant*))(callback_ZNK19QGraphicsPixmapItem9extensionERK8QVariant_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QVariant*)&variant);
    // }
    return QGraphicsPixmapItem::extension(variant);
  }
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:825
// [-2] void QGraphicsPixmapItem(class QGraphicsItem *)
extern "C"
void* C_ZN19QGraphicsPixmapItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPixmapItem*)(0);
  return  new MyQGraphicsPixmapItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:826
// [-2] void QGraphicsPixmapItem(const class QPixmap &, class QGraphicsItem *)
extern "C"
void* C_ZN19QGraphicsPixmapItemC2ERK7QPixmapP13QGraphicsItem(QPixmap* pixmap, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPixmapItem*)(0);
  return  new MyQGraphicsPixmapItem(*pixmap, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:827
// [-2] void ~QGraphicsPixmapItem()
extern "C"
void C_ZN19QGraphicsPixmapItemD2Ev(void *this_) {
  delete (QGraphicsPixmapItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:829
// [32] QPixmap pixmap()
extern "C"
void* C_ZNK19QGraphicsPixmapItem6pixmapEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->pixmap();
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:830
// [-2] void setPixmap(const class QPixmap &)
extern "C"
void C_ZN19QGraphicsPixmapItem9setPixmapERK7QPixmap(void *this_, QPixmap* pixmap) {
  ((QGraphicsPixmapItem*)this_)->setPixmap(*pixmap);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:832
// [4] Qt::TransformationMode transformationMode()
extern "C"
Qt::TransformationMode C_ZNK19QGraphicsPixmapItem18transformationModeEv(void *this_) {
  return (Qt::TransformationMode)((QGraphicsPixmapItem*)this_)->transformationMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:833
// [-2] void setTransformationMode(Qt::TransformationMode)
extern "C"
void C_ZN19QGraphicsPixmapItem21setTransformationModeEN2Qt18TransformationModeE(void *this_, Qt::TransformationMode mode) {
  ((QGraphicsPixmapItem*)this_)->setTransformationMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:835
// [16] QPointF offset()
extern "C"
void* C_ZNK19QGraphicsPixmapItem6offsetEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->offset();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:836
// [-2] void setOffset(const class QPointF &)
extern "C"
void C_ZN19QGraphicsPixmapItem9setOffsetERK7QPointF(void *this_, QPointF* offset) {
  ((QGraphicsPixmapItem*)this_)->setOffset(*offset);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:837
// [-2] void setOffset(qreal, qreal)
extern "C"
void C_ZN19QGraphicsPixmapItem9setOffsetEdd(void *this_, qreal x, qreal y) {
  ((QGraphicsPixmapItem*)this_)->setOffset(x, y);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:839
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK19QGraphicsPixmapItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->boundingRect();
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:840
// [8] QPainterPath shape()
extern "C"
void* C_ZNK19QGraphicsPixmapItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->shape();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:841
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK19QGraphicsPixmapItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsPixmapItem*)this_)->contains(*point);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:843
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN19QGraphicsPixmapItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsPixmapItem*)this_)->paint(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:845
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK19QGraphicsPixmapItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsPixmapItem*)this_)->isObscuredBy(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:846
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK19QGraphicsPixmapItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:849
// [4] int type()
extern "C"
int C_ZNK19QGraphicsPixmapItem4typeEv(void *this_) {
  return (int)((QGraphicsPixmapItem*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:851
// [4] QGraphicsPixmapItem::ShapeMode shapeMode()
extern "C"
QGraphicsPixmapItem::ShapeMode C_ZNK19QGraphicsPixmapItem9shapeModeEv(void *this_) {
  return (QGraphicsPixmapItem::ShapeMode)((QGraphicsPixmapItem*)this_)->shapeMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:852
// [-2] void setShapeMode(enum QGraphicsPixmapItem::ShapeMode)
extern "C"
void C_ZN19QGraphicsPixmapItem12setShapeModeENS_9ShapeModeE(void *this_, QGraphicsPixmapItem::ShapeMode mode) {
  ((QGraphicsPixmapItem*)this_)->setShapeMode(mode);
}
//  main block end
