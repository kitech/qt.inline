//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

// QGraphicsSimpleTextItem is pure virtual: false
// QGraphicsSimpleTextItem has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:991
// [1] bool supportsExtension(enum QGraphicsItem::Extension)
extern "C"
void* callback_ZNK23QGraphicsSimpleTextItem17supportsExtensionEN13QGraphicsItem9ExtensionE_fnptr = 0;
extern "C" void set_callback_ZNK23QGraphicsSimpleTextItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void*cbfn)
{ callback_ZNK23QGraphicsSimpleTextItem17supportsExtensionEN13QGraphicsItem9ExtensionE_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:992
// [-2] void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
extern "C"
void* callback_ZN23QGraphicsSimpleTextItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant_fnptr = 0;
extern "C" void set_callback_ZN23QGraphicsSimpleTextItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void*cbfn)
{ callback_ZN23QGraphicsSimpleTextItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:993
// [16] QVariant extension(const class QVariant &)
extern "C"
void* callback_ZNK23QGraphicsSimpleTextItem9extensionERK8QVariant_fnptr = 0;
extern "C" void set_callback_ZNK23QGraphicsSimpleTextItem9extensionERK8QVariant(void*cbfn)
{ callback_ZNK23QGraphicsSimpleTextItem9extensionERK8QVariant_fnptr = cbfn; }

class MyQGraphicsSimpleTextItem : public QGraphicsSimpleTextItem {
public:
  virtual ~MyQGraphicsSimpleTextItem() {}
// void QGraphicsSimpleTextItem(class QGraphicsItem *)
MyQGraphicsSimpleTextItem(QGraphicsItem * parent) : QGraphicsSimpleTextItem(parent) {}
// void QGraphicsSimpleTextItem(const class QString &, class QGraphicsItem *)
MyQGraphicsSimpleTextItem(const QString & text, QGraphicsItem * parent) : QGraphicsSimpleTextItem(text, parent) {}
// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    auto fnptr = ((bool (*)(void* , QGraphicsItem::Extension))(callback_ZNK23QGraphicsSimpleTextItem17supportsExtensionEN13QGraphicsItem9ExtensionE_fnptr));
    if (fnptr != 0) {
      fnptr(this , extension);
    }
    return QGraphicsSimpleTextItem::supportsExtension(extension);
  }
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
    auto fnptr = ((void (*)(void* , QGraphicsItem::Extension, QVariant*))(callback_ZN23QGraphicsSimpleTextItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant_fnptr));
    if (fnptr != 0) {
      fnptr(this , extension, (QVariant*)&variant);
    }
    QGraphicsSimpleTextItem::setExtension(extension, variant);
  }
// QVariant extension(const class QVariant &)
  virtual QVariant extension(const QVariant & variant) {
    auto fnptr = ((QVariant (*)(void* , QVariant*))(callback_ZNK23QGraphicsSimpleTextItem9extensionERK8QVariant_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QVariant*)&variant);
    }
    return QGraphicsSimpleTextItem::extension(variant);
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:968
// [-2] void QGraphicsSimpleTextItem(class QGraphicsItem *)
extern "C"
void* C_ZN23QGraphicsSimpleTextItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsSimpleTextItem*)(0);
  return  new MyQGraphicsSimpleTextItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:969
// [-2] void QGraphicsSimpleTextItem(const class QString &, class QGraphicsItem *)
extern "C"
void* C_ZN23QGraphicsSimpleTextItemC2ERK7QStringP13QGraphicsItem(QString* text, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsSimpleTextItem*)(0);
  return  new MyQGraphicsSimpleTextItem(*text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:970
// [-2] void ~QGraphicsSimpleTextItem()
extern "C"
void C_ZN23QGraphicsSimpleTextItemD2Ev(void *this_) {
  delete (QGraphicsSimpleTextItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:972
// [-2] void setText(const class QString &)
extern "C"
void C_ZN23QGraphicsSimpleTextItem7setTextERK7QString(void *this_, QString* text) {
  ((QGraphicsSimpleTextItem*)this_)->setText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:973
// [8] QString text()
extern "C"
void* C_ZNK23QGraphicsSimpleTextItem4textEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->text();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:975
// [-2] void setFont(const class QFont &)
extern "C"
void C_ZN23QGraphicsSimpleTextItem7setFontERK5QFont(void *this_, QFont* font) {
  ((QGraphicsSimpleTextItem*)this_)->setFont(*font);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:976
// [16] QFont font()
extern "C"
void* C_ZNK23QGraphicsSimpleTextItem4fontEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->font();
return new QFont(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:978
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK23QGraphicsSimpleTextItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->boundingRect();
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:979
// [8] QPainterPath shape()
extern "C"
void* C_ZNK23QGraphicsSimpleTextItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->shape();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:980
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK23QGraphicsSimpleTextItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsSimpleTextItem*)this_)->contains(*point);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:982
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN23QGraphicsSimpleTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsSimpleTextItem*)this_)->paint(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:984
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK23QGraphicsSimpleTextItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsSimpleTextItem*)this_)->isObscuredBy(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:985
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK23QGraphicsSimpleTextItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsSimpleTextItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:988
// [4] int type()
extern "C"
int C_ZNK23QGraphicsSimpleTextItem4typeEv(void *this_) {
  return (int)((QGraphicsSimpleTextItem*)this_)->type();
}
//  main block end
