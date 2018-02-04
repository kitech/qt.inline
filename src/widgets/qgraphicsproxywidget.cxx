//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h
#include <qgraphicsproxywidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsProxyWidget is pure virtual: false
// QGraphicsProxyWidget has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsProxyWidget : public QGraphicsProxyWidget {
public:
  virtual ~MyQGraphicsProxyWidget() {}
// void QGraphicsProxyWidget(class QGraphicsItem *, Qt::WindowFlags)
MyQGraphicsProxyWidget(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) : QGraphicsProxyWidget(parent, wFlags) {}
// QVariant itemChange(enum QGraphicsItem::GraphicsItemChange, const class QVariant &)
  virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"itemChange", &handled, 2, (uint64_t)change, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsProxyWidget::itemChange(change, value);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsProxyWidget::event(event);
  }
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsProxyWidget::eventFilter(object, event);
  }
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::showEvent(event);
  }
  }
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::hideEvent(event);
  }
  }
// void contextMenuEvent(class QGraphicsSceneContextMenuEvent *)
  virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::contextMenuEvent(event);
  }
  }
// void dragEnterEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragEnterEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::dragEnterEvent(event);
  }
  }
// void dragLeaveEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::dragLeaveEvent(event);
  }
  }
// void dragMoveEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragMoveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::dragMoveEvent(event);
  }
  }
// void dropEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dropEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::dropEvent(event);
  }
  }
// void hoverEnterEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverEnterEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::hoverEnterEvent(event);
  }
  }
// void hoverLeaveEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::hoverLeaveEvent(event);
  }
  }
// void hoverMoveEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverMoveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::hoverMoveEvent(event);
  }
  }
// void grabMouseEvent(class QEvent *)
  virtual void grabMouseEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"grabMouseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::grabMouseEvent(event);
  }
  }
// void ungrabMouseEvent(class QEvent *)
  virtual void ungrabMouseEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"ungrabMouseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::ungrabMouseEvent(event);
  }
  }
// void mouseMoveEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseMoveEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::mouseMoveEvent(event);
  }
  }
// void mousePressEvent(class QGraphicsSceneMouseEvent *)
  virtual void mousePressEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::mousePressEvent(event);
  }
  }
// void mouseReleaseEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::mouseReleaseEvent(event);
  }
  }
// void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::mouseDoubleClickEvent(event);
  }
  }
// void wheelEvent(class QGraphicsSceneWheelEvent *)
  virtual void wheelEvent(QGraphicsSceneWheelEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::wheelEvent(event);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::keyPressEvent(event);
  }
  }
// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::keyReleaseEvent(event);
  }
  }
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::focusInEvent(event);
  }
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::focusOutEvent(event);
  }
  }
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsProxyWidget::focusNextPrevChild(next);
  }
  }
// QVariant inputMethodQuery(Qt::InputMethodQuery)
  virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodQuery", &handled, 1, (uint64_t)query, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsProxyWidget::inputMethodQuery(query);
  }
  }
// void inputMethodEvent(class QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::inputMethodEvent(event);
  }
  }
// QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSizeF*)(irv);
      // RecordRecordQSizeF
    } else {
    return QGraphicsProxyWidget::sizeHint(which, constraint);
  }
  }
// void resizeEvent(class QGraphicsSceneResizeEvent *)
  virtual void resizeEvent(QGraphicsSceneResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsProxyWidget::resizeEvent(event);
  }
  }
// QGraphicsProxyWidget * newProxyWidget(const class QWidget *)
  virtual QGraphicsProxyWidget * newProxyWidget(const QWidget * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"newProxyWidget", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGraphicsProxyWidget *)(irv);
      // PointerPointerQGraphicsProxyWidget *
    } else {
    return QGraphicsProxyWidget::newProxyWidget(arg0);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK20QGraphicsProxyWidget10metaObjectEv(void *this_) {
  return (void*)((QGraphicsProxyWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:56
// [-2] void QGraphicsProxyWidget(class QGraphicsItem *, Qt::WindowFlags)
extern "C"
void* C_ZN20QGraphicsProxyWidgetC2EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) {
  auto _nilp = (MyQGraphicsProxyWidget*)(0);
  return  new MyQGraphicsProxyWidget(parent, wFlags);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:57
// [-2] void ~QGraphicsProxyWidget()
extern "C"
void C_ZN20QGraphicsProxyWidgetD2Ev(void *this_) {
  delete (QGraphicsProxyWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:59
// [-2] void setWidget(class QWidget *)
extern "C"
void C_ZN20QGraphicsProxyWidget9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGraphicsProxyWidget*)this_)->setWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:60
// [8] QWidget * widget()
extern "C"
void* C_ZNK20QGraphicsProxyWidget6widgetEv(void *this_) {
  return (void*)((QGraphicsProxyWidget*)this_)->widget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:62
// [32] QRectF subWidgetRect(const class QWidget *)
extern "C"
void* C_ZNK20QGraphicsProxyWidget13subWidgetRectEPK7QWidget(void *this_, const QWidget * widget) {
  auto rv = ((QGraphicsProxyWidget*)this_)->subWidgetRect(widget);
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:64
// [-2] void setGeometry(const class QRectF &)
extern "C"
void C_ZN20QGraphicsProxyWidget11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsProxyWidget*)this_)->setGeometry(*rect);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:66
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN20QGraphicsProxyWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsProxyWidget*)this_)->paint(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:71
// [4] int type()
extern "C"
int C_ZNK20QGraphicsProxyWidget4typeEv(void *this_) {
  return (int)((QGraphicsProxyWidget*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:73
// [8] QGraphicsProxyWidget * createProxyForChildWidget(class QWidget *)
extern "C"
void* C_ZN20QGraphicsProxyWidget25createProxyForChildWidgetEP7QWidget(void *this_, QWidget * child) {
  return (void*)((QGraphicsProxyWidget*)this_)->createProxyForChildWidget(child);
}
//  main block end
