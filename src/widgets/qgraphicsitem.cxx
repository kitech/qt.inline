//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsItem is pure virtual: true true
// QGraphicsItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsItem_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsItem_t qt_meta_stringdata_MyQGraphicsItem = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQGraphicsItem"
  },
  "MyQGraphicsItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsItem : public QGraphicsItem {
public:
  virtual ~MyQGraphicsItem() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [32] QRectF boundingRect()
  virtual QRectF boundingRect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"boundingRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
  virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paint", &handled, 3, (uint64_t)painter, (uint64_t)option, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGraphicsItem::paint(painter, option, widget);
  }
  }

// void QGraphicsItem(QGraphicsItem *)
MyQGraphicsItem(QGraphicsItem * parent) : QGraphicsItem(parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool sceneEventFilter(QGraphicsItem *, QEvent *)
  virtual bool sceneEventFilter(QGraphicsItem * watched, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sceneEventFilter", &handled, 2, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsItem::sceneEventFilter(watched, event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool sceneEvent(QEvent *)
  virtual bool sceneEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sceneEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsItem::sceneEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QGraphicsSceneContextMenuEvent *)
  virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::contextMenuEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragEnterEvent(QGraphicsSceneDragDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::dragEnterEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::dragLeaveEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragMoveEvent(QGraphicsSceneDragDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::dragMoveEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dropEvent(QGraphicsSceneDragDropEvent *)
  virtual void dropEvent(QGraphicsSceneDragDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::dropEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::focusInEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::focusOutEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void hoverEnterEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverEnterEvent(QGraphicsSceneHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::hoverEnterEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void hoverMoveEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverMoveEvent(QGraphicsSceneHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::hoverMoveEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void hoverLeaveEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::hoverLeaveEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::keyPressEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::keyReleaseEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mousePressEvent(QGraphicsSceneMouseEvent *)
  virtual void mousePressEvent(QGraphicsSceneMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::mousePressEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseMoveEvent(QGraphicsSceneMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::mouseMoveEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::mouseReleaseEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void wheelEvent(QGraphicsSceneWheelEvent *)
  virtual void wheelEvent(QGraphicsSceneWheelEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::wheelEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::inputMethodEvent(event);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
  virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodQuery", &handled, 1, (uint64_t)query, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsItem::inputMethodQuery(query);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [16] QVariant itemChange(QGraphicsItem::GraphicsItemChange, const QVariant &)
  virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"itemChange", &handled, 2, (uint64_t)change, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsItem::itemChange(change, value);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsItem::supportsExtension(extension);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItem::setExtension(extension, variant);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [16] QVariant extension(const QVariant &)
  virtual QVariant extension(const QVariant & variant) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsItem::extension(variant);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:216
// [-2] void hide() 
// (11)qm837254722 (25)_ZN13QGraphicsItem4hideEv
//static
/*void qm837254722()*/ {
  ;
  (void) ((QGraphicsItem*)this_)->hide();
   auto xptr = (void (QGraphicsItem::*)() ) &QGraphicsItem::hide;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:217
// [-2] void show() 
// (12)qm2905953717 (25)_ZN13QGraphicsItem4showEv
//static
/*void qm2905953717()*/ {
  ;
  (void) ((QGraphicsItem*)this_)->show();
   auto xptr = (void (QGraphicsItem::*)() ) &QGraphicsItem::show;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:275
// [8] qreal x() const
// (12)qm1943081872 (23)_ZNK13QGraphicsItem1xEv
//static
/*void qm1943081872()*/ {
  ;
  (void) ((QGraphicsItem*)this_)->x();
   auto xptr = (double (QGraphicsItem::*)() const ) &QGraphicsItem::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:277
// [8] qreal y() const
// (12)qm1913878951 (23)_ZNK13QGraphicsItem1yEv
//static
/*void qm1913878951()*/ {
  ;
  (void) ((QGraphicsItem*)this_)->y();
   auto xptr = (double (QGraphicsItem::*)() const ) &QGraphicsItem::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:281
// [-2] void setPos(qreal, qreal) 
// (12)qm3432723326 (28)_ZN13QGraphicsItem6setPosEdd
//static
/*void qm3432723326(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->setPos(x, y);
   auto xptr = (void (QGraphicsItem::*)(double, double) ) &QGraphicsItem::setPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:282
// [-2] void moveBy(qreal, qreal) 
// (12)qm2895985331 (28)_ZN13QGraphicsItem6moveByEdd
//static
/*void qm2895985331(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->moveBy(dx, dy);
   auto xptr = (void (QGraphicsItem::*)(double, double) ) &QGraphicsItem::moveBy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:285
// [-2] void ensureVisible(qreal, qreal, qreal, qreal, int, int) 
// (11)qm995703349 (40)_ZN13QGraphicsItem13ensureVisibleEddddii
//static
/*void qm995703349(double x, double y, double w, double h, int xmargin, int ymargin)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; int xmargin = *(int*)this_; int ymargin = *(int*)this_;
  (void) ((QGraphicsItem*)this_)->ensureVisible(x, y, w, h, xmargin, ymargin);
   auto xptr = (void (QGraphicsItem::*)(double, double, double, double, int, int) ) &QGraphicsItem::ensureVisible;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:321
// [-2] void setTransformOriginPoint(qreal, qreal) 
// (12)qm3023468559 (46)_ZN13QGraphicsItem23setTransformOriginPointEdd
//static
/*void qm3023468559(double ax, double ay)*/ {
  double ax = *(double*)this_; double ay = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->setTransformOriginPoint(ax, ay);
   auto xptr = (void (QGraphicsItem::*)(double, double) ) &QGraphicsItem::setTransformOriginPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:343
// [1] bool isObscured(qreal, qreal, qreal, qreal) const
// (12)qm2586296195 (36)_ZNK13QGraphicsItem10isObscuredEdddd
//static
/*void qm2586296195(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->isObscured(x, y, w, h);
   auto xptr = (bool (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::isObscured;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:354
// [-2] void update(qreal, qreal, qreal, qreal) 
// (12)qm2016958503 (30)_ZN13QGraphicsItem6updateEdddd
//static
/*void qm2016958503(double x, double y, double width, double height)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double width = *(double*)this_; double height = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->update(x, y, width, height);
   auto xptr = (void (QGraphicsItem::*)(double, double, double, double) ) &QGraphicsItem::update;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:389
// [16] QPointF mapToItem(const QGraphicsItem *, qreal, qreal) const
// (12)qm1877306171 (36)_ZNK13QGraphicsItem9mapToItemEPKS_dd
//static
/*void qm1877306171(const QGraphicsItem * item, double x, double y)*/ {
  const QGraphicsItem * item = *(const QGraphicsItem **)this_; double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapToItem(item, x, y);
   auto xptr = (QPointF (QGraphicsItem::*)(QGraphicsItem const*, double, double) const ) &QGraphicsItem::mapToItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:390
// [16] QPointF mapToParent(qreal, qreal) const
// (12)qm2894013337 (35)_ZNK13QGraphicsItem11mapToParentEdd
//static
/*void qm2894013337(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapToParent(x, y);
   auto xptr = (QPointF (QGraphicsItem::*)(double, double) const ) &QGraphicsItem::mapToParent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:391
// [16] QPointF mapToScene(qreal, qreal) const
// (12)qm1604010146 (34)_ZNK13QGraphicsItem10mapToSceneEdd
//static
/*void qm1604010146(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapToScene(x, y);
   auto xptr = (QPointF (QGraphicsItem::*)(double, double) const ) &QGraphicsItem::mapToScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:392
// [8] QPolygonF mapToItem(const QGraphicsItem *, qreal, qreal, qreal, qreal) const
// (12)qm3963953424 (38)_ZNK13QGraphicsItem9mapToItemEPKS_dddd
//static
/*void qm3963953424(const QGraphicsItem * item, double x, double y, double w, double h)*/ {
  const QGraphicsItem * item = *(const QGraphicsItem **)this_; double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapToItem(item, x, y, w, h);
   auto xptr = (QPolygonF (QGraphicsItem::*)(QGraphicsItem const*, double, double, double, double) const ) &QGraphicsItem::mapToItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:393
// [8] QPolygonF mapToParent(qreal, qreal, qreal, qreal) const
// (11)qm141817155 (37)_ZNK13QGraphicsItem11mapToParentEdddd
//static
/*void qm141817155(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapToParent(x, y, w, h);
   auto xptr = (QPolygonF (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::mapToParent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:394
// [8] QPolygonF mapToScene(qreal, qreal, qreal, qreal) const
// (12)qm3766147453 (36)_ZNK13QGraphicsItem10mapToSceneEdddd
//static
/*void qm3766147453(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapToScene(x, y, w, h);
   auto xptr = (QPolygonF (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::mapToScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:395
// [32] QRectF mapRectToItem(const QGraphicsItem *, qreal, qreal, qreal, qreal) const
// (12)qm3127060260 (43)_ZNK13QGraphicsItem13mapRectToItemEPKS_dddd
//static
/*void qm3127060260(const QGraphicsItem * item, double x, double y, double w, double h)*/ {
  const QGraphicsItem * item = *(const QGraphicsItem **)this_; double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapRectToItem(item, x, y, w, h);
   auto xptr = (QRectF (QGraphicsItem::*)(QGraphicsItem const*, double, double, double, double) const ) &QGraphicsItem::mapRectToItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:396
// [32] QRectF mapRectToParent(qreal, qreal, qreal, qreal) const
// (12)qm1082655636 (41)_ZNK13QGraphicsItem15mapRectToParentEdddd
//static
/*void qm1082655636(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapRectToParent(x, y, w, h);
   auto xptr = (QRectF (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::mapRectToParent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:397
// [32] QRectF mapRectToScene(qreal, qreal, qreal, qreal) const
// (12)qm1656090381 (40)_ZNK13QGraphicsItem14mapRectToSceneEdddd
//static
/*void qm1656090381(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapRectToScene(x, y, w, h);
   auto xptr = (QRectF (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::mapRectToScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:398
// [16] QPointF mapFromItem(const QGraphicsItem *, qreal, qreal) const
// (12)qm3213211933 (39)_ZNK13QGraphicsItem11mapFromItemEPKS_dd
//static
/*void qm3213211933(const QGraphicsItem * item, double x, double y)*/ {
  const QGraphicsItem * item = *(const QGraphicsItem **)this_; double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapFromItem(item, x, y);
   auto xptr = (QPointF (QGraphicsItem::*)(QGraphicsItem const*, double, double) const ) &QGraphicsItem::mapFromItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:399
// [16] QPointF mapFromParent(qreal, qreal) const
// (12)qm2754814805 (37)_ZNK13QGraphicsItem13mapFromParentEdd
//static
/*void qm2754814805(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapFromParent(x, y);
   auto xptr = (QPointF (QGraphicsItem::*)(double, double) const ) &QGraphicsItem::mapFromParent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:400
// [16] QPointF mapFromScene(qreal, qreal) const
// (12)qm1304547592 (36)_ZNK13QGraphicsItem12mapFromSceneEdd
//static
/*void qm1304547592(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapFromScene(x, y);
   auto xptr = (QPointF (QGraphicsItem::*)(double, double) const ) &QGraphicsItem::mapFromScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:401
// [8] QPolygonF mapFromItem(const QGraphicsItem *, qreal, qreal, qreal, qreal) const
// (12)qm1195819436 (41)_ZNK13QGraphicsItem11mapFromItemEPKS_dddd
//static
/*void qm1195819436(const QGraphicsItem * item, double x, double y, double w, double h)*/ {
  const QGraphicsItem * item = *(const QGraphicsItem **)this_; double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapFromItem(item, x, y, w, h);
   auto xptr = (QPolygonF (QGraphicsItem::*)(QGraphicsItem const*, double, double, double, double) const ) &QGraphicsItem::mapFromItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:402
// [8] QPolygonF mapFromParent(qreal, qreal, qreal, qreal) const
// (12)qm1866229069 (39)_ZNK13QGraphicsItem13mapFromParentEdddd
//static
/*void qm1866229069(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapFromParent(x, y, w, h);
   auto xptr = (QPolygonF (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::mapFromParent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:403
// [8] QPolygonF mapFromScene(qreal, qreal, qreal, qreal) const
// (11)qm865746070 (38)_ZNK13QGraphicsItem12mapFromSceneEdddd
//static
/*void qm865746070(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapFromScene(x, y, w, h);
   auto xptr = (QPolygonF (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::mapFromScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:404
// [32] QRectF mapRectFromItem(const QGraphicsItem *, qreal, qreal, qreal, qreal) const
// (12)qm3267608122 (45)_ZNK13QGraphicsItem15mapRectFromItemEPKS_dddd
//static
/*void qm3267608122(const QGraphicsItem * item, double x, double y, double w, double h)*/ {
  const QGraphicsItem * item = *(const QGraphicsItem **)this_; double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapRectFromItem(item, x, y, w, h);
   auto xptr = (QRectF (QGraphicsItem::*)(QGraphicsItem const*, double, double, double, double) const ) &QGraphicsItem::mapRectFromItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:405
// [32] QRectF mapRectFromParent(qreal, qreal, qreal, qreal) const
// (12)qm1824128095 (43)_ZNK13QGraphicsItem17mapRectFromParentEdddd
//static
/*void qm1824128095(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapRectFromParent(x, y, w, h);
   auto xptr = (QRectF (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::mapRectFromParent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:406
// [32] QRectF mapRectFromScene(qreal, qreal, qreal, qreal) const
// (12)qm4170969141 (42)_ZNK13QGraphicsItem16mapRectFromSceneEdddd
//static
/*void qm4170969141(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsItem*)this_)->mapRectFromScene(x, y, w, h);
   auto xptr = (QRectF (QGraphicsItem::*)(double, double, double, double) const ) &QGraphicsItem::mapRectFromScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QGraphicsItemD2Ev(void *this_)*/ {
  delete (QGraphicsItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
