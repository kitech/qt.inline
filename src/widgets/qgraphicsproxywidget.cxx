//  header block begin
// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsproxywidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsProxyWidget is pure virtual: false
// QGraphicsProxyWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsProxyWidget : public QGraphicsProxyWidget {
public:
  virtual ~MyQGraphicsProxyWidget() {}
// void QGraphicsProxyWidget(class QGraphicsItem *, Qt::WindowFlags)
MyQGraphicsProxyWidget(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) : QGraphicsProxyWidget(parent, wFlags) {}
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:76
// [16] QVariant itemChange(enum QGraphicsItem::GraphicsItemChange, const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidget10itemChangeEN13QGraphicsItem18GraphicsItemChangeERK8QVariant(void *this_, QGraphicsItem::GraphicsItemChange change, QVariant* value) {
  auto rv = ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::itemChange(change, *value);
return new QVariant(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:78
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QGraphicsProxyWidget5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:79
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QGraphicsProxyWidget11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::eventFilter(object, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:81
// [-2] void showEvent(class QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::showEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:82
// [-2] void hideEvent(class QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget9hideEventEP10QHideEvent(void *this_, QHideEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::hideEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:85
// [-2] void contextMenuEvent(class QGraphicsSceneContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget16contextMenuEventEP30QGraphicsSceneContextMenuEvent(void *this_, QGraphicsSceneContextMenuEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:89
// [-2] void dragEnterEvent(class QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14dragEnterEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:90
// [-2] void dragLeaveEvent(class QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14dragLeaveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:91
// [-2] void dragMoveEvent(class QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget13dragMoveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:92
// [-2] void dropEvent(class QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget9dropEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:95
// [-2] void hoverEnterEvent(class QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget15hoverEnterEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::hoverEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:96
// [-2] void hoverLeaveEvent(class QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget15hoverLeaveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::hoverLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:97
// [-2] void hoverMoveEvent(class QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14hoverMoveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::hoverMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:98
// [-2] void grabMouseEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14grabMouseEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::grabMouseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:99
// [-2] void ungrabMouseEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget16ungrabMouseEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::ungrabMouseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:101
// [-2] void mouseMoveEvent(class QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14mouseMoveEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:102
// [-2] void mousePressEvent(class QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget15mousePressEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:103
// [-2] void mouseReleaseEvent(class QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget17mouseReleaseEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:104
// [-2] void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget21mouseDoubleClickEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:106
// [-2] void wheelEvent(class QGraphicsSceneWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget10wheelEventEP24QGraphicsSceneWheelEvent(void *this_, QGraphicsSceneWheelEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:109
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:110
// [-2] void keyReleaseEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:112
// [-2] void focusInEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:113
// [-2] void focusOutEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:114
// [1] bool focusNextPrevChild(_Bool)
extern "C" Q_DECL_EXPORT
bool C_ZN20QGraphicsProxyWidget18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:116
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsProxyWidget16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::inputMethodQuery(query);
return new QVariant(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:117
// [-2] void inputMethodEvent(class QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::inputMethodEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:119
// [16] QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsProxyWidget8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::sizeHint(which, *constraint);
return new QSizeF(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:120
// [-2] void resizeEvent(class QGraphicsSceneResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget11resizeEventEP25QGraphicsSceneResizeEvent(void *this_, QGraphicsSceneResizeEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::resizeEvent(event);
}

// Protected Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:123
// [8] QGraphicsProxyWidget * newProxyWidget(const class QWidget *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidget14newProxyWidgetEPK7QWidget(void *this_, const QWidget * arg0) {
  return (void*)((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::newProxyWidget(arg0);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsProxyWidget10metaObjectEv(void *this_) {
  return (void*)((QGraphicsProxyWidget*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:56
// [-2] void QGraphicsProxyWidget(class QGraphicsItem *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidgetC2EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) {
  auto _nilp = (MyQGraphicsProxyWidget*)(0);
  return  new MyQGraphicsProxyWidget(parent, wFlags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:57
// [-2] void ~QGraphicsProxyWidget()
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidgetD2Ev(void *this_) {
  delete (QGraphicsProxyWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:59
// [-2] void setWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGraphicsProxyWidget*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:60
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsProxyWidget6widgetEv(void *this_) {
  return (void*)((QGraphicsProxyWidget*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:62
// [32] QRectF subWidgetRect(const class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsProxyWidget13subWidgetRectEPK7QWidget(void *this_, const QWidget * widget) {
  auto rv = ((QGraphicsProxyWidget*)this_)->subWidgetRect(widget);
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:64
// [-2] void setGeometry(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsProxyWidget*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:66
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsProxyWidget*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:71
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK20QGraphicsProxyWidget4typeEv(void *this_) {
  return (int)((QGraphicsProxyWidget*)this_)->type();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:73
// [8] QGraphicsProxyWidget * createProxyForChildWidget(class QWidget *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidget25createProxyForChildWidgetEP7QWidget(void *this_, QWidget * child) {
  return (void*)((QGraphicsProxyWidget*)this_)->createProxyForChildWidget(child);
}
#endif // QT_VERSION >= 0x040500

//  main block end
