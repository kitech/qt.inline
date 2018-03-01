//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsItem is pure virtual: true
// QGraphicsItem has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsItem : public QGraphicsItem {
public:
  virtual ~MyQGraphicsItem() {}
// void QGraphicsItem(class QGraphicsItem *)
MyQGraphicsItem(QGraphicsItem * parent) : QGraphicsItem(parent) {}
// Protected Visibility=Default Availability=Available
// void updateMicroFocus()
  virtual void updateMicroFocus() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateMicroFocus", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::updateMicroFocus();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool sceneEventFilter(class QGraphicsItem *, class QEvent *)
  virtual bool sceneEventFilter(QGraphicsItem * watched, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sceneEventFilter", &handled, 2, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsItem::sceneEventFilter(watched, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool sceneEvent(class QEvent *)
  virtual bool sceneEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sceneEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsItem::sceneEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(class QGraphicsSceneContextMenuEvent *)
  virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::contextMenuEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragEnterEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragEnterEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::dragEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragLeaveEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::dragLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragMoveEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragMoveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::dragMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dropEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dropEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::dropEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::focusOutEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hoverEnterEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverEnterEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::hoverEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hoverMoveEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverMoveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::hoverMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hoverLeaveEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::hoverLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::keyReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QGraphicsSceneMouseEvent *)
  virtual void mousePressEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseMoveEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(class QGraphicsSceneWheelEvent *)
  virtual void wheelEvent(QGraphicsSceneWheelEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void inputMethodEvent(class QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::inputMethodEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QVariant inputMethodQuery(Qt::InputMethodQuery)
  virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodQuery", &handled, 1, (uint64_t)query, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsItem::inputMethodQuery(query);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QVariant itemChange(enum QGraphicsItem::GraphicsItemChange, const class QVariant &)
  virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"itemChange", &handled, 2, (uint64_t)change, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsItem::itemChange(change, value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsItem::supportsExtension(extension);
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
    QGraphicsItem::setExtension(extension, variant);
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
    return QGraphicsItem::extension(variant);
  }
  }

// Protected Visibility=Default Availability=Available
// void addToIndex()
  virtual void addToIndex() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"addToIndex", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::addToIndex();
  }
  }

// Protected Visibility=Default Availability=Available
// void removeFromIndex()
  virtual void removeFromIndex() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"removeFromIndex", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::removeFromIndex();
  }
  }

// Protected Visibility=Default Availability=Available
// void prepareGeometryChange()
  virtual void prepareGeometryChange() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"prepareGeometryChange", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsItem::prepareGeometryChange();
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:421
// [-2] void updateMicroFocus()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem16updateMicroFocusEv(void *this_) {
  ((QGraphicsItem*)this_)->QGraphicsItem::updateMicroFocus();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:422
// [1] bool sceneEventFilter(class QGraphicsItem *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QGraphicsItem16sceneEventFilterEPS_P6QEvent(void *this_, QGraphicsItem * watched, QEvent * event) {
  return (bool)((QGraphicsItem*)this_)->QGraphicsItem::sceneEventFilter(watched, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:423
// [1] bool sceneEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QGraphicsItem10sceneEventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsItem*)this_)->QGraphicsItem::sceneEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:424
// [-2] void contextMenuEvent(class QGraphicsSceneContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem16contextMenuEventEP30QGraphicsSceneContextMenuEvent(void *this_, QGraphicsSceneContextMenuEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:425
// [-2] void dragEnterEvent(class QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem14dragEnterEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:426
// [-2] void dragLeaveEvent(class QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem14dragLeaveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:427
// [-2] void dragMoveEvent(class QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem13dragMoveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:428
// [-2] void dropEvent(class QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem9dropEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:429
// [-2] void focusInEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:430
// [-2] void focusOutEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:431
// [-2] void hoverEnterEvent(class QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem15hoverEnterEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::hoverEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:432
// [-2] void hoverMoveEvent(class QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem14hoverMoveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::hoverMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:433
// [-2] void hoverLeaveEvent(class QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem15hoverLeaveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::hoverLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:434
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:435
// [-2] void keyReleaseEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:436
// [-2] void mousePressEvent(class QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem15mousePressEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:437
// [-2] void mouseMoveEvent(class QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem14mouseMoveEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:438
// [-2] void mouseReleaseEvent(class QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem17mouseReleaseEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:439
// [-2] void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem21mouseDoubleClickEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:440
// [-2] void wheelEvent(class QGraphicsSceneWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem10wheelEventEP24QGraphicsSceneWheelEvent(void *this_, QGraphicsSceneWheelEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:441
// [-2] void inputMethodEvent(class QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * event) {
  ((QGraphicsItem*)this_)->QGraphicsItem::inputMethodEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:442
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QGraphicsItem*)this_)->QGraphicsItem::inputMethodQuery(query);
return new QVariant(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:444
// [16] QVariant itemChange(enum QGraphicsItem::GraphicsItemChange, const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGraphicsItem10itemChangeENS_18GraphicsItemChangeERK8QVariant(void *this_, QGraphicsItem::GraphicsItemChange change, QVariant* value) {
  auto rv = ((QGraphicsItem*)this_)->QGraphicsItem::itemChange(change, *value);
return new QVariant(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:449
// [1] bool supportsExtension(enum QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem17supportsExtensionENS_9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsItem*)this_)->QGraphicsItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:450
// [-2] void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem12setExtensionENS_9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsItem*)this_)->QGraphicsItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:451
// [16] QVariant extension(const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsItem*)this_)->QGraphicsItem::extension(*variant);
return new QVariant(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:457
// [-2] void addToIndex()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem10addToIndexEv(void *this_) {
  ((QGraphicsItem*)this_)->QGraphicsItem::addToIndex();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:458
// [-2] void removeFromIndex()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem15removeFromIndexEv(void *this_) {
  ((QGraphicsItem*)this_)->QGraphicsItem::removeFromIndex();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:459
// [-2] void prepareGeometryChange()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem21prepareGeometryChangeEv(void *this_) {
  ((QGraphicsItem*)this_)->QGraphicsItem::prepareGeometryChange();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:161
// [-2] void QGraphicsItem(class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGraphicsItemC2EPS_(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsItem*)(0);
  return 0; // new MyQGraphicsItem(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:162
// [-2] void ~QGraphicsItem()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItemD2Ev(void *this_) {
  delete (QGraphicsItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:164
// [8] QGraphicsScene * scene()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem5sceneEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->scene();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:166
// [8] QGraphicsItem * parentItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10parentItemEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->parentItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:167
// [8] QGraphicsItem * topLevelItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12topLevelItemEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->topLevelItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:169
// [8] QGraphicsWidget * parentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12parentWidgetEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->parentWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:170
// [8] QGraphicsWidget * topLevelWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem14topLevelWidgetEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->topLevelWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:171
// [8] QGraphicsWidget * window()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem6windowEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->window();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:172
// [8] QGraphicsItem * panel()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem5panelEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->panel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:173
// [-2] void setParentItem(class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem13setParentItemEPS_(void *this_, QGraphicsItem * parent) {
  ((QGraphicsItem*)this_)->setParentItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:178
// [1] bool isWidget()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem8isWidgetEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:179
// [1] bool isWindow()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem8isWindowEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:180
// [1] bool isPanel()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem7isPanelEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isPanel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:185
// [8] QGraphicsItemGroup * group()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem5groupEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->group();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:186
// [-2] void setGroup(class QGraphicsItemGroup *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem8setGroupEP18QGraphicsItemGroup(void *this_, QGraphicsItemGroup * group) {
  ((QGraphicsItem*)this_)->setGroup(group);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:188
// [4] QGraphicsItem::GraphicsItemFlags flags()
extern "C" Q_DECL_EXPORT
QGraphicsItem::GraphicsItemFlags* C_ZNK13QGraphicsItem5flagsEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->flags();
return new QGraphicsItem::GraphicsItemFlags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:189
// [-2] void setFlag(enum QGraphicsItem::GraphicsItemFlag, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem7setFlagENS_16GraphicsItemFlagEb(void *this_, QGraphicsItem::GraphicsItemFlag flag, bool enabled) {
  ((QGraphicsItem*)this_)->setFlag(flag, enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:190
// [-2] void setFlags(QGraphicsItem::GraphicsItemFlags)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem8setFlagsE6QFlagsINS_16GraphicsItemFlagEE(void *this_, QFlags<QGraphicsItem::GraphicsItemFlag> flags) {
  ((QGraphicsItem*)this_)->setFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:192
// [4] QGraphicsItem::CacheMode cacheMode()
extern "C" Q_DECL_EXPORT
QGraphicsItem::CacheMode C_ZNK13QGraphicsItem9cacheModeEv(void *this_) {
  return (QGraphicsItem::CacheMode)((QGraphicsItem*)this_)->cacheMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:193
// [-2] void setCacheMode(enum QGraphicsItem::CacheMode, const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem12setCacheModeENS_9CacheModeERK5QSize(void *this_, QGraphicsItem::CacheMode mode, QSize* cacheSize) {
  ((QGraphicsItem*)this_)->setCacheMode(mode, *cacheSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:195
// [4] QGraphicsItem::PanelModality panelModality()
extern "C" Q_DECL_EXPORT
QGraphicsItem::PanelModality C_ZNK13QGraphicsItem13panelModalityEv(void *this_) {
  return (QGraphicsItem::PanelModality)((QGraphicsItem*)this_)->panelModality();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:196
// [-2] void setPanelModality(enum QGraphicsItem::PanelModality)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem16setPanelModalityENS_13PanelModalityE(void *this_, QGraphicsItem::PanelModality panelModality) {
  ((QGraphicsItem*)this_)->setPanelModality(panelModality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:197
// [1] bool isBlockedByModalPanel(class QGraphicsItem **)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem21isBlockedByModalPanelEPPS_(void *this_, QGraphicsItem ** blockingPanel) {
  return (bool)((QGraphicsItem*)this_)->isBlockedByModalPanel(blockingPanel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:200
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem7toolTipEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->toolTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:201
// [-2] void setToolTip(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem10setToolTipERK7QString(void *this_, QString* toolTip) {
  ((QGraphicsItem*)this_)->setToolTip(*toolTip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:205
// [8] QCursor cursor()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem6cursorEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->cursor();
return new QCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:206
// [-2] void setCursor(const class QCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem9setCursorERK7QCursor(void *this_, QCursor* cursor) {
  ((QGraphicsItem*)this_)->setCursor(*cursor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:207
// [1] bool hasCursor()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem9hasCursorEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->hasCursor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:208
// [-2] void unsetCursor()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem11unsetCursorEv(void *this_) {
  ((QGraphicsItem*)this_)->unsetCursor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:211
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem9isVisibleEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:212
// [1] bool isVisibleTo(const class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem11isVisibleToEPKS_(void *this_, const QGraphicsItem * parent) {
  return (bool)((QGraphicsItem*)this_)->isVisibleTo(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:213
// [-2] void setVisible(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem10setVisibleEb(void *this_, bool visible) {
  ((QGraphicsItem*)this_)->setVisible(visible);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:214
// [-2] void hide()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem4hideEv(void *this_) {
  ((QGraphicsItem*)this_)->hide();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:215
// [-2] void show()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem4showEv(void *this_) {
  ((QGraphicsItem*)this_)->show();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:217
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem9isEnabledEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:218
// [-2] void setEnabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem10setEnabledEb(void *this_, bool enabled) {
  ((QGraphicsItem*)this_)->setEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:220
// [1] bool isSelected()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem10isSelectedEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isSelected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:221
// [-2] void setSelected(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem11setSelectedEb(void *this_, bool selected) {
  ((QGraphicsItem*)this_)->setSelected(selected);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:223
// [1] bool acceptDrops()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem11acceptDropsEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->acceptDrops();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:224
// [-2] void setAcceptDrops(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem14setAcceptDropsEb(void *this_, bool on) {
  ((QGraphicsItem*)this_)->setAcceptDrops(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:226
// [8] qreal opacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QGraphicsItem7opacityEv(void *this_) {
  return (qreal)((QGraphicsItem*)this_)->opacity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:227
// [8] qreal effectiveOpacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QGraphicsItem16effectiveOpacityEv(void *this_) {
  return (qreal)((QGraphicsItem*)this_)->effectiveOpacity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:228
// [-2] void setOpacity(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem10setOpacityEd(void *this_, qreal opacity) {
  ((QGraphicsItem*)this_)->setOpacity(opacity);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:232
// [8] QGraphicsEffect * graphicsEffect()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem14graphicsEffectEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->graphicsEffect();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:233
// [-2] void setGraphicsEffect(class QGraphicsEffect *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem17setGraphicsEffectEP15QGraphicsEffect(void *this_, QGraphicsEffect * effect) {
  ((QGraphicsItem*)this_)->setGraphicsEffect(effect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:236
// [4] Qt::MouseButtons acceptedMouseButtons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK13QGraphicsItem20acceptedMouseButtonsEv(void *this_) {
  return (Qt::MouseButtons)((QGraphicsItem*)this_)->acceptedMouseButtons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:237
// [-2] void setAcceptedMouseButtons(Qt::MouseButtons)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsItem*)this_)->setAcceptedMouseButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:242
// [1] bool acceptHoverEvents()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem17acceptHoverEventsEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->acceptHoverEvents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:243
// [-2] void setAcceptHoverEvents(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem20setAcceptHoverEventsEb(void *this_, bool enabled) {
  ((QGraphicsItem*)this_)->setAcceptHoverEvents(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:244
// [1] bool acceptTouchEvents()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem17acceptTouchEventsEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->acceptTouchEvents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:245
// [-2] void setAcceptTouchEvents(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem20setAcceptTouchEventsEb(void *this_, bool enabled) {
  ((QGraphicsItem*)this_)->setAcceptTouchEvents(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:247
// [1] bool filtersChildEvents()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem18filtersChildEventsEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->filtersChildEvents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:248
// [-2] void setFiltersChildEvents(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem21setFiltersChildEventsEb(void *this_, bool enabled) {
  ((QGraphicsItem*)this_)->setFiltersChildEvents(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:250
// [1] bool handlesChildEvents()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem18handlesChildEventsEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->handlesChildEvents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:251
// [-2] void setHandlesChildEvents(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem21setHandlesChildEventsEb(void *this_, bool enabled) {
  ((QGraphicsItem*)this_)->setHandlesChildEvents(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:253
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem8isActiveEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:254
// [-2] void setActive(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem9setActiveEb(void *this_, bool active) {
  ((QGraphicsItem*)this_)->setActive(active);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:256
// [1] bool hasFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem8hasFocusEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->hasFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:257
// [-2] void setFocus(Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem8setFocusEN2Qt11FocusReasonE(void *this_, Qt::FocusReason focusReason) {
  ((QGraphicsItem*)this_)->setFocus(focusReason);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:258
// [-2] void clearFocus()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem10clearFocusEv(void *this_) {
  ((QGraphicsItem*)this_)->clearFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:260
// [8] QGraphicsItem * focusProxy()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10focusProxyEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->focusProxy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:261
// [-2] void setFocusProxy(class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem13setFocusProxyEPS_(void *this_, QGraphicsItem * item) {
  ((QGraphicsItem*)this_)->setFocusProxy(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:263
// [8] QGraphicsItem * focusItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9focusItemEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->focusItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:264
// [8] QGraphicsItem * focusScopeItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem14focusScopeItemEv(void *this_) {
  return (void*)((QGraphicsItem*)this_)->focusScopeItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:266
// [-2] void grabMouse()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem9grabMouseEv(void *this_) {
  ((QGraphicsItem*)this_)->grabMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:267
// [-2] void ungrabMouse()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem11ungrabMouseEv(void *this_) {
  ((QGraphicsItem*)this_)->ungrabMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:268
// [-2] void grabKeyboard()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem12grabKeyboardEv(void *this_) {
  ((QGraphicsItem*)this_)->grabKeyboard();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:269
// [-2] void ungrabKeyboard()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem14ungrabKeyboardEv(void *this_) {
  ((QGraphicsItem*)this_)->ungrabKeyboard();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:272
// [16] QPointF pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem3posEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->pos();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:273
// [8] qreal x()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QGraphicsItem1xEv(void *this_) {
  return (qreal)((QGraphicsItem*)this_)->x();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:274
// [-2] void setX(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem4setXEd(void *this_, qreal x) {
  ((QGraphicsItem*)this_)->setX(x);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:275
// [8] qreal y()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QGraphicsItem1yEv(void *this_) {
  return (qreal)((QGraphicsItem*)this_)->y();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:276
// [-2] void setY(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem4setYEd(void *this_, qreal y) {
  ((QGraphicsItem*)this_)->setY(y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:277
// [16] QPointF scenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem8scenePosEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->scenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:278
// [-2] void setPos(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem6setPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsItem*)this_)->setPos(*pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:279
// [-2] void setPos(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem6setPosEdd(void *this_, qreal x, qreal y) {
  ((QGraphicsItem*)this_)->setPos(x, y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:280
// [-2] void moveBy(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem6moveByEdd(void *this_, qreal dx, qreal dy) {
  ((QGraphicsItem*)this_)->moveBy(dx, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:282
// [-2] void ensureVisible(const class QRectF &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem13ensureVisibleERK6QRectFii(void *this_, QRectF* rect, int xmargin, int ymargin) {
  ((QGraphicsItem*)this_)->ensureVisible(*rect, xmargin, ymargin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:283
// [-2] void ensureVisible(qreal, qreal, qreal, qreal, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem13ensureVisibleEddddii(void *this_, qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin) {
  ((QGraphicsItem*)this_)->ensureVisible(x, y, w, h, xmargin, ymargin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:286
// [48] QMatrix matrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem6matrixEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->matrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:287
// [48] QMatrix sceneMatrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11sceneMatrixEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->sceneMatrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:288
// [-2] void setMatrix(const class QMatrix &, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem9setMatrixERK7QMatrixb(void *this_, QMatrix* matrix, bool combine) {
  ((QGraphicsItem*)this_)->setMatrix(*matrix, combine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:289
// [-2] void resetMatrix()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem11resetMatrixEv(void *this_) {
  ((QGraphicsItem*)this_)->resetMatrix();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:290
// [88] QTransform transform()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9transformEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->transform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:291
// [88] QTransform sceneTransform()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem14sceneTransformEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->sceneTransform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:292
// [88] QTransform deviceTransform(const class QTransform &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem15deviceTransformERK10QTransform(void *this_, QTransform* viewportTransform) {
  auto rv = ((QGraphicsItem*)this_)->deviceTransform(*viewportTransform);
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:293
// [88] QTransform itemTransform(const class QGraphicsItem *, _Bool *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13itemTransformEPKS_Pb(void *this_, const QGraphicsItem * other, bool * ok) {
  auto rv = ((QGraphicsItem*)this_)->itemTransform(other, ok);
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:294
// [-2] void setTransform(const class QTransform &, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem12setTransformERK10QTransformb(void *this_, QTransform* matrix, bool combine) {
  ((QGraphicsItem*)this_)->setTransform(*matrix, combine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:295
// [-2] void resetTransform()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem14resetTransformEv(void *this_) {
  ((QGraphicsItem*)this_)->resetTransform();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:302
// [-2] void setRotation(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem11setRotationEd(void *this_, qreal angle) {
  ((QGraphicsItem*)this_)->setRotation(angle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:303
// [8] qreal rotation()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QGraphicsItem8rotationEv(void *this_) {
  return (qreal)((QGraphicsItem*)this_)->rotation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:305
// [-2] void setScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem8setScaleEd(void *this_, qreal scale) {
  ((QGraphicsItem*)this_)->setScale(scale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:306
// [8] qreal scale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QGraphicsItem5scaleEv(void *this_) {
  return (qreal)((QGraphicsItem*)this_)->scale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:311
// [16] QPointF transformOriginPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem20transformOriginPointEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->transformOriginPoint();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:312
// [-2] void setTransformOriginPoint(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem23setTransformOriginPointERK7QPointF(void *this_, QPointF* origin) {
  ((QGraphicsItem*)this_)->setTransformOriginPoint(*origin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:313
// [-2] void setTransformOriginPoint(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem23setTransformOriginPointEdd(void *this_, qreal ax, qreal ay) {
  ((QGraphicsItem*)this_)->setTransformOriginPoint(ax, ay);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:316
// [-2] void advance(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem7advanceEi(void *this_, int phase) {
  ((QGraphicsItem*)this_)->advance(phase);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:319
// [8] qreal zValue()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QGraphicsItem6zValueEv(void *this_) {
  return (qreal)((QGraphicsItem*)this_)->zValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:320
// [-2] void setZValue(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem9setZValueEd(void *this_, qreal z) {
  ((QGraphicsItem*)this_)->setZValue(z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:321
// [-2] void stackBefore(const class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem11stackBeforeEPKS_(void *this_, const QGraphicsItem * sibling) {
  ((QGraphicsItem*)this_)->stackBefore(sibling);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:324
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:325
// [32] QRectF childrenBoundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem20childrenBoundingRectEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->childrenBoundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:326
// [32] QRectF sceneBoundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem17sceneBoundingRectEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->sceneBoundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:327
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:328
// [1] bool isClipped()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem9isClippedEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isClipped();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:329
// [8] QPainterPath clipPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem8clipPathEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->clipPath();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:330
// [1] bool contains(const class QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:331
// [1] bool collidesWithItem(const class QGraphicsItem *, Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem16collidesWithItemEPKS_N2Qt17ItemSelectionModeE(void *this_, const QGraphicsItem * other, Qt::ItemSelectionMode mode) {
  return (bool)((QGraphicsItem*)this_)->collidesWithItem(other, mode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:332
// [1] bool collidesWithPath(const class QPainterPath &, Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem16collidesWithPathERK12QPainterPathN2Qt17ItemSelectionModeE(void *this_, QPainterPath* path, Qt::ItemSelectionMode mode) {
  return (bool)((QGraphicsItem*)this_)->collidesWithPath(*path, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:334
// [1] bool isObscured(const class QRectF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem10isObscuredERK6QRectF(void *this_, QRectF* rect) {
  return (bool)((QGraphicsItem*)this_)->isObscured(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:335
// [1] bool isObscured(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem10isObscuredEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  return (bool)((QGraphicsItem*)this_)->isObscured(x, y, w, h);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:336
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem12isObscuredByEPKS_(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:337
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:339
// [8] QRegion boundingRegion(const class QTransform &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem14boundingRegionERK10QTransform(void *this_, QTransform* itemToDeviceTransform) {
  auto rv = ((QGraphicsItem*)this_)->boundingRegion(*itemToDeviceTransform);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:340
// [8] qreal boundingRegionGranularity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QGraphicsItem25boundingRegionGranularityEv(void *this_) {
  return (qreal)((QGraphicsItem*)this_)->boundingRegionGranularity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:341
// [-2] void setBoundingRegionGranularity(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem28setBoundingRegionGranularityEd(void *this_, qreal granularity) {
  ((QGraphicsItem*)this_)->setBoundingRegionGranularity(granularity);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:344
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsItem*)this_)->paint(painter, option, widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:345
// [-2] void update(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem6updateERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsItem*)this_)->update(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:346
// [-2] void update(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem6updateEdddd(void *this_, qreal x, qreal y, qreal width, qreal height) {
  ((QGraphicsItem*)this_)->update(x, y, width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:347
// [-2] void scroll(qreal, qreal, const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem6scrollEddRK6QRectF(void *this_, qreal dx, qreal dy, QRectF* rect) {
  ((QGraphicsItem*)this_)->scroll(dx, dy, *rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:350
// [16] QPointF mapToItem(const class QGraphicsItem *, const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9mapToItemEPKS_RK7QPointF(void *this_, const QGraphicsItem * item, QPointF* point) {
  auto rv = ((QGraphicsItem*)this_)->mapToItem(item, *point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:351
// [16] QPointF mapToParent(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapToParentERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QGraphicsItem*)this_)->mapToParent(*point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:352
// [16] QPointF mapToScene(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10mapToSceneERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QGraphicsItem*)this_)->mapToScene(*point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:353
// [8] QPolygonF mapToItem(const class QGraphicsItem *, const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9mapToItemEPKS_RK6QRectF(void *this_, const QGraphicsItem * item, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapToItem(item, *rect);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:354
// [8] QPolygonF mapToParent(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapToParentERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapToParent(*rect);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:355
// [8] QPolygonF mapToScene(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10mapToSceneERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapToScene(*rect);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:356
// [32] QRectF mapRectToItem(const class QGraphicsItem *, const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13mapRectToItemEPKS_RK6QRectF(void *this_, const QGraphicsItem * item, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapRectToItem(item, *rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:357
// [32] QRectF mapRectToParent(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem15mapRectToParentERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapRectToParent(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:358
// [32] QRectF mapRectToScene(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem14mapRectToSceneERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapRectToScene(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:359
// [8] QPolygonF mapToItem(const class QGraphicsItem *, const class QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9mapToItemEPKS_RK9QPolygonF(void *this_, const QGraphicsItem * item, QPolygonF* polygon) {
  auto rv = ((QGraphicsItem*)this_)->mapToItem(item, *polygon);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:360
// [8] QPolygonF mapToParent(const class QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapToParentERK9QPolygonF(void *this_, QPolygonF* polygon) {
  auto rv = ((QGraphicsItem*)this_)->mapToParent(*polygon);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:361
// [8] QPolygonF mapToScene(const class QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10mapToSceneERK9QPolygonF(void *this_, QPolygonF* polygon) {
  auto rv = ((QGraphicsItem*)this_)->mapToScene(*polygon);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:362
// [8] QPainterPath mapToItem(const class QGraphicsItem *, const class QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9mapToItemEPKS_RK12QPainterPath(void *this_, const QGraphicsItem * item, QPainterPath* path) {
  auto rv = ((QGraphicsItem*)this_)->mapToItem(item, *path);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:363
// [8] QPainterPath mapToParent(const class QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapToParentERK12QPainterPath(void *this_, QPainterPath* path) {
  auto rv = ((QGraphicsItem*)this_)->mapToParent(*path);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:364
// [8] QPainterPath mapToScene(const class QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10mapToSceneERK12QPainterPath(void *this_, QPainterPath* path) {
  auto rv = ((QGraphicsItem*)this_)->mapToScene(*path);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:365
// [16] QPointF mapFromItem(const class QGraphicsItem *, const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapFromItemEPKS_RK7QPointF(void *this_, const QGraphicsItem * item, QPointF* point) {
  auto rv = ((QGraphicsItem*)this_)->mapFromItem(item, *point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:366
// [16] QPointF mapFromParent(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13mapFromParentERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QGraphicsItem*)this_)->mapFromParent(*point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:367
// [16] QPointF mapFromScene(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12mapFromSceneERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QGraphicsItem*)this_)->mapFromScene(*point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:368
// [8] QPolygonF mapFromItem(const class QGraphicsItem *, const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapFromItemEPKS_RK6QRectF(void *this_, const QGraphicsItem * item, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapFromItem(item, *rect);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:369
// [8] QPolygonF mapFromParent(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13mapFromParentERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapFromParent(*rect);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:370
// [8] QPolygonF mapFromScene(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12mapFromSceneERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapFromScene(*rect);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:371
// [32] QRectF mapRectFromItem(const class QGraphicsItem *, const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem15mapRectFromItemEPKS_RK6QRectF(void *this_, const QGraphicsItem * item, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapRectFromItem(item, *rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:372
// [32] QRectF mapRectFromParent(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem17mapRectFromParentERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapRectFromParent(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:373
// [32] QRectF mapRectFromScene(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem16mapRectFromSceneERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsItem*)this_)->mapRectFromScene(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:374
// [8] QPolygonF mapFromItem(const class QGraphicsItem *, const class QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapFromItemEPKS_RK9QPolygonF(void *this_, const QGraphicsItem * item, QPolygonF* polygon) {
  auto rv = ((QGraphicsItem*)this_)->mapFromItem(item, *polygon);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:375
// [8] QPolygonF mapFromParent(const class QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13mapFromParentERK9QPolygonF(void *this_, QPolygonF* polygon) {
  auto rv = ((QGraphicsItem*)this_)->mapFromParent(*polygon);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:376
// [8] QPolygonF mapFromScene(const class QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12mapFromSceneERK9QPolygonF(void *this_, QPolygonF* polygon) {
  auto rv = ((QGraphicsItem*)this_)->mapFromScene(*polygon);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:377
// [8] QPainterPath mapFromItem(const class QGraphicsItem *, const class QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapFromItemEPKS_RK12QPainterPath(void *this_, const QGraphicsItem * item, QPainterPath* path) {
  auto rv = ((QGraphicsItem*)this_)->mapFromItem(item, *path);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:378
// [8] QPainterPath mapFromParent(const class QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13mapFromParentERK12QPainterPath(void *this_, QPainterPath* path) {
  auto rv = ((QGraphicsItem*)this_)->mapFromParent(*path);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:379
// [8] QPainterPath mapFromScene(const class QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12mapFromSceneERK12QPainterPath(void *this_, QPainterPath* path) {
  auto rv = ((QGraphicsItem*)this_)->mapFromScene(*path);
return new QPainterPath(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:381
// [16] QPointF mapToItem(const class QGraphicsItem *, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9mapToItemEPKS_dd(void *this_, const QGraphicsItem * item, qreal x, qreal y) {
  auto rv = ((QGraphicsItem*)this_)->mapToItem(item, x, y);
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:382
// [16] QPointF mapToParent(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapToParentEdd(void *this_, qreal x, qreal y) {
  auto rv = ((QGraphicsItem*)this_)->mapToParent(x, y);
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:383
// [16] QPointF mapToScene(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10mapToSceneEdd(void *this_, qreal x, qreal y) {
  auto rv = ((QGraphicsItem*)this_)->mapToScene(x, y);
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:384
// [8] QPolygonF mapToItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem9mapToItemEPKS_dddd(void *this_, const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapToItem(item, x, y, w, h);
return new QPolygonF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:385
// [8] QPolygonF mapToParent(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapToParentEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapToParent(x, y, w, h);
return new QPolygonF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:386
// [8] QPolygonF mapToScene(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem10mapToSceneEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapToScene(x, y, w, h);
return new QPolygonF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:387
// [32] QRectF mapRectToItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13mapRectToItemEPKS_dddd(void *this_, const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapRectToItem(item, x, y, w, h);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:388
// [32] QRectF mapRectToParent(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem15mapRectToParentEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapRectToParent(x, y, w, h);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:389
// [32] QRectF mapRectToScene(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem14mapRectToSceneEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapRectToScene(x, y, w, h);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:390
// [16] QPointF mapFromItem(const class QGraphicsItem *, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapFromItemEPKS_dd(void *this_, const QGraphicsItem * item, qreal x, qreal y) {
  auto rv = ((QGraphicsItem*)this_)->mapFromItem(item, x, y);
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:391
// [16] QPointF mapFromParent(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13mapFromParentEdd(void *this_, qreal x, qreal y) {
  auto rv = ((QGraphicsItem*)this_)->mapFromParent(x, y);
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:392
// [16] QPointF mapFromScene(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12mapFromSceneEdd(void *this_, qreal x, qreal y) {
  auto rv = ((QGraphicsItem*)this_)->mapFromScene(x, y);
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:393
// [8] QPolygonF mapFromItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem11mapFromItemEPKS_dddd(void *this_, const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapFromItem(item, x, y, w, h);
return new QPolygonF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:394
// [8] QPolygonF mapFromParent(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem13mapFromParentEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapFromParent(x, y, w, h);
return new QPolygonF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:395
// [8] QPolygonF mapFromScene(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem12mapFromSceneEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapFromScene(x, y, w, h);
return new QPolygonF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:396
// [32] QRectF mapRectFromItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem15mapRectFromItemEPKS_dddd(void *this_, const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapRectFromItem(item, x, y, w, h);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:397
// [32] QRectF mapRectFromParent(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem17mapRectFromParentEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapRectFromParent(x, y, w, h);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:398
// [32] QRectF mapRectFromScene(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem16mapRectFromSceneEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsItem*)this_)->mapRectFromScene(x, y, w, h);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:400
// [1] bool isAncestorOf(const class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem12isAncestorOfEPKS_(void *this_, const QGraphicsItem * child) {
  return (bool)((QGraphicsItem*)this_)->isAncestorOf(child);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:401
// [8] QGraphicsItem * commonAncestorItem(const class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem18commonAncestorItemEPKS_(void *this_, const QGraphicsItem * other) {
  return (void*)((QGraphicsItem*)this_)->commonAncestorItem(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:402
// [1] bool isUnderMouse()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsItem12isUnderMouseEv(void *this_) {
  return (bool)((QGraphicsItem*)this_)->isUnderMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:405
// [16] QVariant data(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsItem4dataEi(void *this_, int key) {
  auto rv = ((QGraphicsItem*)this_)->data(key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:406
// [-2] void setData(int, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem7setDataEiRK8QVariant(void *this_, int key, QVariant* value) {
  ((QGraphicsItem*)this_)->setData(key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:408
// [4] Qt::InputMethodHints inputMethodHints()
extern "C" Q_DECL_EXPORT
Qt::InputMethodHints C_ZNK13QGraphicsItem16inputMethodHintsEv(void *this_) {
  return (Qt::InputMethodHints)((QGraphicsItem*)this_)->inputMethodHints();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:409
// [-2] void setInputMethodHints(Qt::InputMethodHints)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem19setInputMethodHintsE6QFlagsIN2Qt15InputMethodHintEE(void *this_, QFlags<Qt::InputMethodHint> hints) {
  ((QGraphicsItem*)this_)->setInputMethodHints(hints);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:415
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK13QGraphicsItem4typeEv(void *this_) {
  return (int)((QGraphicsItem*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:417
// [-2] void installSceneEventFilter(class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem23installSceneEventFilterEPS_(void *this_, QGraphicsItem * filterItem) {
  ((QGraphicsItem*)this_)->installSceneEventFilter(filterItem);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:418
// [-2] void removeSceneEventFilter(class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsItem22removeSceneEventFilterEPS_(void *this_, QGraphicsItem * filterItem) {
  ((QGraphicsItem*)this_)->removeSceneEventFilter(filterItem);
}

//  main block end
