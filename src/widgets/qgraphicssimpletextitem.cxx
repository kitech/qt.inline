//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSimpleTextItem is pure virtual: false
// QGraphicsSimpleTextItem has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsSimpleTextItem : public QGraphicsSimpleTextItem {
public:
  virtual ~MyQGraphicsSimpleTextItem() {}
// void QGraphicsSimpleTextItem(class QGraphicsItem *)
MyQGraphicsSimpleTextItem(QGraphicsItem * parent) : QGraphicsSimpleTextItem(parent) {}
// void QGraphicsSimpleTextItem(const class QString &, class QGraphicsItem *)
MyQGraphicsSimpleTextItem(const QString & text, QGraphicsItem * parent) : QGraphicsSimpleTextItem(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsSimpleTextItem::supportsExtension(extension);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsSimpleTextItem::setExtension(extension, variant);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QVariant extension(const class QVariant &)
  virtual QVariant extension(const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsSimpleTextItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:991
// [1] bool supportsExtension(enum QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK23QGraphicsSimpleTextItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsSimpleTextItem*)this_)->QGraphicsSimpleTextItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:992
// [-2] void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSimpleTextItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsSimpleTextItem*)this_)->QGraphicsSimpleTextItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:993
// [16] QVariant extension(const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSimpleTextItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->QGraphicsSimpleTextItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:968
// [-2] void QGraphicsSimpleTextItem(class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGraphicsSimpleTextItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsSimpleTextItem*)(0);
  return  new MyQGraphicsSimpleTextItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:969
// [-2] void QGraphicsSimpleTextItem(const class QString &, class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGraphicsSimpleTextItemC2ERK7QStringP13QGraphicsItem(QString* text, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsSimpleTextItem*)(0);
  return  new MyQGraphicsSimpleTextItem(*text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:970
// [-2] void ~QGraphicsSimpleTextItem()
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSimpleTextItemD2Ev(void *this_) {
  delete (QGraphicsSimpleTextItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:972
// [-2] void setText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSimpleTextItem7setTextERK7QString(void *this_, QString* text) {
  ((QGraphicsSimpleTextItem*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:973
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSimpleTextItem4textEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:975
// [-2] void setFont(const class QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSimpleTextItem7setFontERK5QFont(void *this_, QFont* font) {
  ((QGraphicsSimpleTextItem*)this_)->setFont(*font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:976
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSimpleTextItem4fontEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->font();
return new QFont(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:978
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSimpleTextItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:979
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSimpleTextItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:980
// [1] bool contains(const class QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK23QGraphicsSimpleTextItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsSimpleTextItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:982
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSimpleTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsSimpleTextItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:984
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK23QGraphicsSimpleTextItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsSimpleTextItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:985
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSimpleTextItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:988
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK23QGraphicsSimpleTextItem4typeEv(void *this_) {
  return (int)((QGraphicsSimpleTextItem*)this_)->type();
}

//  main block end
