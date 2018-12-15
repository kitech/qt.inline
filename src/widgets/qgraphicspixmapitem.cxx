//  header block begin

// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsPixmapItem is pure virtual: false
// QGraphicsPixmapItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsPixmapItem_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsPixmapItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsPixmapItem_t qt_meta_stringdata_MyQGraphicsPixmapItem = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQGraphicsPixmapItem"
  },
  "MyQGraphicsPixmapItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsPixmapItem[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQGraphicsPixmapItem : public QGraphicsPixmapItem {
public:
  virtual ~MyQGraphicsPixmapItem() {}
// void QGraphicsPixmapItem(QGraphicsItem *)
MyQGraphicsPixmapItem(QGraphicsItem * parent) : QGraphicsPixmapItem(parent) {}
// void QGraphicsPixmapItem(const QPixmap &, QGraphicsItem *)
MyQGraphicsPixmapItem(const QPixmap & pixmap, QGraphicsItem * parent) : QGraphicsPixmapItem(pixmap, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsPixmapItem::supportsExtension(extension);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsPixmapItem::setExtension(extension, variant);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [16] QVariant extension(const QVariant &)
  virtual QVariant extension(const QVariant & variant) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsPixmapItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:856
// [1] bool supportsExtension(QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGraphicsPixmapItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsPixmapItem*)this_)->QGraphicsPixmapItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:857
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsPixmapItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsPixmapItem*)this_)->QGraphicsPixmapItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:858
// [16] QVariant extension(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsPixmapItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsPixmapItem*)this_)->QGraphicsPixmapItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:826
// [-2] void QGraphicsPixmapItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsPixmapItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPixmapItem*)(0);
  return  new MyQGraphicsPixmapItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:827
// [-2] void QGraphicsPixmapItem(const QPixmap &, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsPixmapItemC2ERK7QPixmapP13QGraphicsItem(QPixmap* pixmap, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPixmapItem*)(0);
  return  new MyQGraphicsPixmapItem(*pixmap, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:828
// [-2] void ~QGraphicsPixmapItem()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsPixmapItemD2Ev(void *this_) {
  delete (QGraphicsPixmapItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:830
// [32] QPixmap pixmap()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsPixmapItem6pixmapEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->pixmap();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:831
// [-2] void setPixmap(const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsPixmapItem9setPixmapERK7QPixmap(void *this_, QPixmap* pixmap) {
  ((QGraphicsPixmapItem*)this_)->setPixmap(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:833
// [4] Qt::TransformationMode transformationMode()
extern "C" Q_DECL_EXPORT
Qt::TransformationMode C_ZNK19QGraphicsPixmapItem18transformationModeEv(void *this_) {
  return (Qt::TransformationMode)((QGraphicsPixmapItem*)this_)->transformationMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:834
// [-2] void setTransformationMode(Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsPixmapItem21setTransformationModeEN2Qt18TransformationModeE(void *this_, Qt::TransformationMode mode) {
  ((QGraphicsPixmapItem*)this_)->setTransformationMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:836
// [16] QPointF offset()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsPixmapItem6offsetEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->offset();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:837
// [-2] void setOffset(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsPixmapItem9setOffsetERK7QPointF(void *this_, QPointF* offset) {
  ((QGraphicsPixmapItem*)this_)->setOffset(*offset);
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qgraphicsitem.h:838
// [-2] void setOffset(qreal, qreal)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsPixmapItem9setOffsetEdd(void *this_, qreal x, qreal y) {
  ((QGraphicsPixmapItem*)this_)->setOffset(x, y);
}
#endif // QT_VERSION >= 0x040300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:840
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsPixmapItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:841
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsPixmapItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:842
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGraphicsPixmapItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsPixmapItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:844
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsPixmapItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsPixmapItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:846
// [1] bool isObscuredBy(const QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGraphicsPixmapItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsPixmapItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:847
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsPixmapItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsPixmapItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:850
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsPixmapItem4typeEv(void *this_) {
  return (int)((QGraphicsPixmapItem*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:852
// [4] QGraphicsPixmapItem::ShapeMode shapeMode()
extern "C" Q_DECL_EXPORT
QGraphicsPixmapItem::ShapeMode C_ZNK19QGraphicsPixmapItem9shapeModeEv(void *this_) {
  return (QGraphicsPixmapItem::ShapeMode)((QGraphicsPixmapItem*)this_)->shapeMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:853
// [-2] void setShapeMode(QGraphicsPixmapItem::ShapeMode)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsPixmapItem12setShapeModeENS_9ShapeModeE(void *this_, QGraphicsPixmapItem::ShapeMode mode) {
  ((QGraphicsPixmapItem*)this_)->setShapeMode(mode);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
