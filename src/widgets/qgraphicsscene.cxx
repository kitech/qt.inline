//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsscene.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsscene.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsScene is pure virtual: false
// QGraphicsScene has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsScene : public QGraphicsScene {
public:
  virtual ~MyQGraphicsScene() {}
// void QGraphicsScene(QObject *)
MyQGraphicsScene(QObject * parent) : QGraphicsScene(parent) {}
// void QGraphicsScene(const QRectF &, QObject *)
MyQGraphicsScene(const QRectF & sceneRect, QObject * parent) : QGraphicsScene(sceneRect, parent) {}
// void QGraphicsScene(qreal, qreal, qreal, qreal, QObject *)
MyQGraphicsScene(qreal x, qreal y, qreal width, qreal height, QObject * parent) : QGraphicsScene(x, y, width, height, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsScene::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * watched, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsScene::eventFilter(watched, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QGraphicsSceneContextMenuEvent *)
  virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::contextMenuEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragEnterEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::dragEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragMoveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::dragMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::dragLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QGraphicsSceneDragDropEvent *)
  virtual void dropEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::dropEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::focusOutEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void helpEvent(QGraphicsSceneHelpEvent *)
  virtual void helpEvent(QGraphicsSceneHelpEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"helpEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::helpEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::keyReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QGraphicsSceneMouseEvent *)
  virtual void mousePressEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseMoveEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QGraphicsSceneWheelEvent *)
  virtual void wheelEvent(QGraphicsSceneWheelEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::inputMethodEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawBackground(QPainter *, const QRectF &)
  virtual void drawBackground(QPainter * painter, const QRectF & rect) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawBackground", &handled, 2, (uint64_t)painter, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::drawBackground(painter, rect);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawForeground(QPainter *, const QRectF &)
  virtual void drawForeground(QPainter * painter, const QRectF & rect) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawForeground", &handled, 2, (uint64_t)painter, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::drawForeground(painter, rect);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawItems(QPainter *, int, QGraphicsItem **, const QStyleOptionGraphicsItem *, QWidget *)
// Protected Visibility=Default Availability=Available
// [1] bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsScene::focusNextPrevChild(next);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:264
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QGraphicsScene5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsScene*)this_)->QGraphicsScene::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:265
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QGraphicsScene11eventFilterEP7QObjectP6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QGraphicsScene*)this_)->QGraphicsScene::eventFilter(watched, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:266
// [-2] void contextMenuEvent(QGraphicsSceneContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16contextMenuEventEP30QGraphicsSceneContextMenuEvent(void *this_, QGraphicsSceneContextMenuEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:267
// [-2] void dragEnterEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene14dragEnterEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:268
// [-2] void dragMoveEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene13dragMoveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:269
// [-2] void dragLeaveEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene14dragLeaveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:270
// [-2] void dropEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene9dropEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:271
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:272
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:273
// [-2] void helpEvent(QGraphicsSceneHelpEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene9helpEventEP23QGraphicsSceneHelpEvent(void *this_, QGraphicsSceneHelpEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::helpEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:274
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:275
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:276
// [-2] void mousePressEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene15mousePressEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:277
// [-2] void mouseMoveEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene14mouseMoveEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:278
// [-2] void mouseReleaseEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene17mouseReleaseEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:279
// [-2] void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene21mouseDoubleClickEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:280
// [-2] void wheelEvent(QGraphicsSceneWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene10wheelEventEP24QGraphicsSceneWheelEvent(void *this_, QGraphicsSceneWheelEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:281
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * event) {
  ((QGraphicsScene*)this_)->QGraphicsScene::inputMethodEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:283
// [-2] void drawBackground(QPainter *, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene14drawBackgroundEP8QPainterRK6QRectF(void *this_, QPainter * painter, QRectF* rect) {
  ((QGraphicsScene*)this_)->QGraphicsScene::drawBackground(painter, *rect);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:284
// [-2] void drawForeground(QPainter *, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene14drawForegroundEP8QPainterRK6QRectF(void *this_, QPainter * painter, QRectF* rect) {
  ((QGraphicsScene*)this_)->QGraphicsScene::drawForeground(painter, *rect);
}

// Protected Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicsscene.h:295
// [1] bool focusNextPrevChild(bool)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZN14QGraphicsScene18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QGraphicsScene*)this_)->QGraphicsScene::focusNextPrevChild(next);
}
#endif // QT_VERSION >= 0x040400

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:98
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene10metaObjectEv(void *this_) {
  return (void*)((QGraphicsScene*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:98
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsScene*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:98
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QGraphicsScene11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsScene*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:98
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsScene::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:98
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsScene::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:124
// [-2] void QGraphicsScene(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsSceneC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsScene*)(0);
  return  new MyQGraphicsScene(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:125
// [-2] void QGraphicsScene(const QRectF &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsSceneC2ERK6QRectFP7QObject(QRectF* sceneRect, QObject * parent) {
  auto _nilp = (MyQGraphicsScene*)(0);
  return  new MyQGraphicsScene(*sceneRect, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:126
// [-2] void QGraphicsScene(qreal, qreal, qreal, qreal, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsSceneC2EddddP7QObject(qreal x, qreal y, qreal width, qreal height, QObject * parent) {
  auto _nilp = (MyQGraphicsScene*)(0);
  return  new MyQGraphicsScene(x, y, width, height, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:127
// [-2] void ~QGraphicsScene()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsSceneD2Ev(void *this_) {
  delete (QGraphicsScene*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:129
// [32] QRectF sceneRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene9sceneRectEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->sceneRect();
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:130
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScene5widthEv(void *this_) {
  return (qreal)((QGraphicsScene*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:131
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScene6heightEv(void *this_) {
  return (qreal)((QGraphicsScene*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:132
// [-2] void setSceneRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene12setSceneRectERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsScene*)this_)->setSceneRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:133
// [-2] void setSceneRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene12setSceneRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsScene*)this_)->setSceneRect(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:136
// [-2] void render(QPainter *, const QRectF &, const QRectF &, Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene6renderEP8QPainterRK6QRectFS4_N2Qt15AspectRatioModeE(void *this_, QPainter * painter, QRectF* target, QRectF* source, Qt::AspectRatioMode aspectRatioMode) {
  ((QGraphicsScene*)this_)->render(painter, *target, *source, aspectRatioMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:140
// [4] QGraphicsScene::ItemIndexMethod itemIndexMethod()
extern "C" Q_DECL_EXPORT
QGraphicsScene::ItemIndexMethod C_ZNK14QGraphicsScene15itemIndexMethodEv(void *this_) {
  return (QGraphicsScene::ItemIndexMethod)((QGraphicsScene*)this_)->itemIndexMethod();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:141
// [-2] void setItemIndexMethod(QGraphicsScene::ItemIndexMethod)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene18setItemIndexMethodENS_15ItemIndexMethodE(void *this_, QGraphicsScene::ItemIndexMethod method) {
  ((QGraphicsScene*)this_)->setItemIndexMethod(method);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:143
// [1] bool isSortCacheEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QGraphicsScene18isSortCacheEnabledEv(void *this_) {
  return (bool)((QGraphicsScene*)this_)->isSortCacheEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:144
// [-2] void setSortCacheEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene19setSortCacheEnabledEb(void *this_, bool enabled) {
  ((QGraphicsScene*)this_)->setSortCacheEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:146
// [4] int bspTreeDepth()
extern "C" Q_DECL_EXPORT
int C_ZNK14QGraphicsScene12bspTreeDepthEv(void *this_) {
  return (int)((QGraphicsScene*)this_)->bspTreeDepth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:147
// [-2] void setBspTreeDepth(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene15setBspTreeDepthEi(void *this_, int depth) {
  ((QGraphicsScene*)this_)->setBspTreeDepth(depth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:149
// [32] QRectF itemsBoundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene17itemsBoundingRectEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->itemsBoundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:151
// [8] QList<QGraphicsItem *> items(Qt::SortOrder)
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK14QGraphicsScene5itemsEN2Qt9SortOrderE(void *this_, Qt::SortOrder order) {
  auto rv = ((QGraphicsScene*)this_)->items(order);
return new QList<QGraphicsItem *>(rv);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:153
// [8] QList<QGraphicsItem *> items(const QPointF &, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK14QGraphicsScene5itemsERK7QPointFN2Qt17ItemSelectionModeENS3_9SortOrderERK10QTransform(void *this_, QPointF* pos, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform* deviceTransform) {
  auto rv = ((QGraphicsScene*)this_)->items(*pos, mode, order, *deviceTransform);
return new QList<QGraphicsItem *>(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:154
// [8] QList<QGraphicsItem *> items(const QRectF &, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK14QGraphicsScene5itemsERK6QRectFN2Qt17ItemSelectionModeENS3_9SortOrderERK10QTransform(void *this_, QRectF* rect, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform* deviceTransform) {
  auto rv = ((QGraphicsScene*)this_)->items(*rect, mode, order, *deviceTransform);
return new QList<QGraphicsItem *>(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:155
// [8] QList<QGraphicsItem *> items(const QPolygonF &, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK14QGraphicsScene5itemsERK9QPolygonFN2Qt17ItemSelectionModeENS3_9SortOrderERK10QTransform(void *this_, QPolygonF* polygon, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform* deviceTransform) {
  auto rv = ((QGraphicsScene*)this_)->items(*polygon, mode, order, *deviceTransform);
return new QList<QGraphicsItem *>(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:156
// [8] QList<QGraphicsItem *> items(const QPainterPath &, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK14QGraphicsScene5itemsERK12QPainterPathN2Qt17ItemSelectionModeENS3_9SortOrderERK10QTransform(void *this_, QPainterPath* path, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform* deviceTransform) {
  auto rv = ((QGraphicsScene*)this_)->items(*path, mode, order, *deviceTransform);
return new QList<QGraphicsItem *>(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:158
// [8] QList<QGraphicsItem *> collidingItems(const QGraphicsItem *, Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK14QGraphicsScene14collidingItemsEPK13QGraphicsItemN2Qt17ItemSelectionModeE(void *this_, const QGraphicsItem * item, Qt::ItemSelectionMode mode) {
  auto rv = ((QGraphicsScene*)this_)->collidingItems(item, mode);
return new QList<QGraphicsItem *>(rv);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:165
// [8] QGraphicsItem * itemAt(const QPointF &, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene6itemAtERK7QPointFRK10QTransform(void *this_, QPointF* pos, QTransform* deviceTransform) {
  return (void*)((QGraphicsScene*)this_)->itemAt(*pos, *deviceTransform);
}
#endif // QT_VERSION >= 0x040600

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:170
// [8] QList<QGraphicsItem *> items(qreal, qreal, qreal, qreal, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK14QGraphicsScene5itemsEddddN2Qt17ItemSelectionModeENS0_9SortOrderERK10QTransform(void *this_, qreal x, qreal y, qreal w, qreal h, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform* deviceTransform) {
  auto rv = ((QGraphicsScene*)this_)->items(x, y, w, h, mode, order, *deviceTransform);
return new QList<QGraphicsItem *>(rv);
}
#endif // QT_VERSION >= 0x040600

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:179
// [8] QGraphicsItem * itemAt(qreal, qreal, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene6itemAtEddRK10QTransform(void *this_, qreal x, qreal y, QTransform* deviceTransform) {
  return (void*)((QGraphicsScene*)this_)->itemAt(x, y, *deviceTransform);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:182
// [8] QList<QGraphicsItem *> selectedItems()
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK14QGraphicsScene13selectedItemsEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->selectedItems();
return new QList<QGraphicsItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:183
// [8] QPainterPath selectionArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene13selectionAreaEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->selectionArea();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:184
// [-2] void setSelectionArea(const QPainterPath &, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16setSelectionAreaERK12QPainterPathRK10QTransform(void *this_, QPainterPath* path, QTransform* deviceTransform) {
  ((QGraphicsScene*)this_)->setSelectionArea(*path, *deviceTransform);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:185
// [-2] void setSelectionArea(const QPainterPath &, Qt::ItemSelectionMode, const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16setSelectionAreaERK12QPainterPathN2Qt17ItemSelectionModeERK10QTransform(void *this_, QPainterPath* path, Qt::ItemSelectionMode mode, QTransform* deviceTransform) {
  ((QGraphicsScene*)this_)->setSelectionArea(*path, mode, *deviceTransform);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWidgets/qgraphicsscene.h:186
// [-2] void setSelectionArea(const QPainterPath &, Qt::ItemSelectionOperation, Qt::ItemSelectionMode, const QTransform &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16setSelectionAreaERK12QPainterPathN2Qt22ItemSelectionOperationENS3_17ItemSelectionModeERK10QTransform(void *this_, QPainterPath* path, Qt::ItemSelectionOperation selectionOperation, Qt::ItemSelectionMode mode, QTransform* deviceTransform) {
  ((QGraphicsScene*)this_)->setSelectionArea(*path, selectionOperation, mode, *deviceTransform);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:189
// [8] QGraphicsItemGroup * createItemGroup(const QList<QGraphicsItem *> &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene15createItemGroupERK5QListIP13QGraphicsItemE(void *this_, QList<QGraphicsItem *>* items) {
  return (void*)((QGraphicsScene*)this_)->createItemGroup(*items);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:190
// [-2] void destroyItemGroup(QGraphicsItemGroup *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16destroyItemGroupEP18QGraphicsItemGroup(void *this_, QGraphicsItemGroup * group) {
  ((QGraphicsScene*)this_)->destroyItemGroup(group);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:192
// [-2] void addItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene7addItemEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsScene*)this_)->addItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:193
// [8] QGraphicsEllipseItem * addEllipse(const QRectF &, const QPen &, const QBrush &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene10addEllipseERK6QRectFRK4QPenRK6QBrush(void *this_, QRectF* rect, QPen* pen, QBrush* brush) {
  return (void*)((QGraphicsScene*)this_)->addEllipse(*rect, *pen, *brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:194
// [8] QGraphicsLineItem * addLine(const QLineF &, const QPen &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene7addLineERK6QLineFRK4QPen(void *this_, QLineF* line, QPen* pen) {
  return (void*)((QGraphicsScene*)this_)->addLine(*line, *pen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:195
// [8] QGraphicsPathItem * addPath(const QPainterPath &, const QPen &, const QBrush &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene7addPathERK12QPainterPathRK4QPenRK6QBrush(void *this_, QPainterPath* path, QPen* pen, QBrush* brush) {
  return (void*)((QGraphicsScene*)this_)->addPath(*path, *pen, *brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:196
// [8] QGraphicsPixmapItem * addPixmap(const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene9addPixmapERK7QPixmap(void *this_, QPixmap* pixmap) {
  return (void*)((QGraphicsScene*)this_)->addPixmap(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:197
// [8] QGraphicsPolygonItem * addPolygon(const QPolygonF &, const QPen &, const QBrush &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene10addPolygonERK9QPolygonFRK4QPenRK6QBrush(void *this_, QPolygonF* polygon, QPen* pen, QBrush* brush) {
  return (void*)((QGraphicsScene*)this_)->addPolygon(*polygon, *pen, *brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:198
// [8] QGraphicsRectItem * addRect(const QRectF &, const QPen &, const QBrush &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene7addRectERK6QRectFRK4QPenRK6QBrush(void *this_, QRectF* rect, QPen* pen, QBrush* brush) {
  return (void*)((QGraphicsScene*)this_)->addRect(*rect, *pen, *brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:199
// [8] QGraphicsTextItem * addText(const QString &, const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene7addTextERK7QStringRK5QFont(void *this_, QString* text, QFont* font) {
  return (void*)((QGraphicsScene*)this_)->addText(*text, *font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:200
// [8] QGraphicsSimpleTextItem * addSimpleText(const QString &, const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene13addSimpleTextERK7QStringRK5QFont(void *this_, QString* text, QFont* font) {
  return (void*)((QGraphicsScene*)this_)->addSimpleText(*text, *font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:201
// [8] QGraphicsProxyWidget * addWidget(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene9addWidgetEP7QWidget6QFlagsIN2Qt10WindowTypeEE(void *this_, QWidget * widget, QFlags<Qt::WindowType> wFlags) {
  return (void*)((QGraphicsScene*)this_)->addWidget(widget, wFlags);
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qgraphicsscene.h:202
// [8] QGraphicsEllipseItem * addEllipse(qreal, qreal, qreal, qreal, const QPen &, const QBrush &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene10addEllipseEddddRK4QPenRK6QBrush(void *this_, qreal x, qreal y, qreal w, qreal h, QPen* pen, QBrush* brush) {
  return (void*)((QGraphicsScene*)this_)->addEllipse(x, y, w, h, *pen, *brush);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qgraphicsscene.h:204
// [8] QGraphicsLineItem * addLine(qreal, qreal, qreal, qreal, const QPen &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene7addLineEddddRK4QPen(void *this_, qreal x1, qreal y1, qreal x2, qreal y2, QPen* pen) {
  return (void*)((QGraphicsScene*)this_)->addLine(x1, y1, x2, y2, *pen);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qgraphicsscene.h:206
// [8] QGraphicsRectItem * addRect(qreal, qreal, qreal, qreal, const QPen &, const QBrush &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScene7addRectEddddRK4QPenRK6QBrush(void *this_, qreal x, qreal y, qreal w, qreal h, QPen* pen, QBrush* brush) {
  return (void*)((QGraphicsScene*)this_)->addRect(x, y, w, h, *pen, *brush);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:208
// [-2] void removeItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene10removeItemEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsScene*)this_)->removeItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:210
// [8] QGraphicsItem * focusItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene9focusItemEv(void *this_) {
  return (void*)((QGraphicsScene*)this_)->focusItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:211
// [-2] void setFocusItem(QGraphicsItem *, Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene12setFocusItemEP13QGraphicsItemN2Qt11FocusReasonE(void *this_, QGraphicsItem * item, Qt::FocusReason focusReason) {
  ((QGraphicsScene*)this_)->setFocusItem(item, focusReason);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:212
// [1] bool hasFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QGraphicsScene8hasFocusEv(void *this_) {
  return (bool)((QGraphicsScene*)this_)->hasFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:213
// [-2] void setFocus(Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene8setFocusEN2Qt11FocusReasonE(void *this_, Qt::FocusReason focusReason) {
  ((QGraphicsScene*)this_)->setFocus(focusReason);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:214
// [-2] void clearFocus()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene10clearFocusEv(void *this_) {
  ((QGraphicsScene*)this_)->clearFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:216
// [-2] void setStickyFocus(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene14setStickyFocusEb(void *this_, bool enabled) {
  ((QGraphicsScene*)this_)->setStickyFocus(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:217
// [1] bool stickyFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QGraphicsScene11stickyFocusEv(void *this_) {
  return (bool)((QGraphicsScene*)this_)->stickyFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:219
// [8] QGraphicsItem * mouseGrabberItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene16mouseGrabberItemEv(void *this_) {
  return (void*)((QGraphicsScene*)this_)->mouseGrabberItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:221
// [8] QBrush backgroundBrush()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene15backgroundBrushEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->backgroundBrush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:222
// [-2] void setBackgroundBrush(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene18setBackgroundBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QGraphicsScene*)this_)->setBackgroundBrush(*brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:224
// [8] QBrush foregroundBrush()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene15foregroundBrushEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->foregroundBrush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:225
// [-2] void setForegroundBrush(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene18setForegroundBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QGraphicsScene*)this_)->setForegroundBrush(*brush);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:227
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QGraphicsScene*)this_)->inputMethodQuery(query);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:229
// [-2] QList<QGraphicsView *> views()
extern "C" Q_DECL_EXPORT
QList<QGraphicsView *>* C_ZNK14QGraphicsScene5viewsEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->views();
return new QList<QGraphicsView *>(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qgraphicsscene.h:231
// [-2] void update(qreal, qreal, qreal, qreal)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene6updateEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsScene*)this_)->update(x, y, w, h);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:233
// [-2] void invalidate(qreal, qreal, qreal, qreal, QGraphicsScene::SceneLayers)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene10invalidateEdddd6QFlagsINS_10SceneLayerEE(void *this_, qreal x, qreal y, qreal w, qreal h, QFlags<QGraphicsScene::SceneLayer> layers) {
  ((QGraphicsScene*)this_)->invalidate(x, y, w, h, layers);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicsscene.h:236
// [8] QStyle * style()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene5styleEv(void *this_) {
  return (void*)((QGraphicsScene*)this_)->style();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicsscene.h:237
// [-2] void setStyle(QStyle *)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene8setStyleEP6QStyle(void *this_, QStyle * style) {
  ((QGraphicsScene*)this_)->setStyle(style);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:239
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene4fontEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:240
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene7setFontERK5QFont(void *this_, QFont* font) {
  ((QGraphicsScene*)this_)->setFont(*font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:242
// [16] QPalette palette()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene7paletteEv(void *this_) {
  auto rv = ((QGraphicsScene*)this_)->palette();
return new QPalette(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:243
// [-2] void setPalette(const QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene10setPaletteERK8QPalette(void *this_, QPalette* palette) {
  ((QGraphicsScene*)this_)->setPalette(*palette);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:245
// [1] bool isActive()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZNK14QGraphicsScene8isActiveEv(void *this_) {
  return (bool)((QGraphicsScene*)this_)->isActive();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:246
// [8] QGraphicsItem * activePanel()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene11activePanelEv(void *this_) {
  return (void*)((QGraphicsScene*)this_)->activePanel();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:247
// [-2] void setActivePanel(QGraphicsItem *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene14setActivePanelEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsScene*)this_)->setActivePanel(item);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicsscene.h:248
// [8] QGraphicsWidget * activeWindow()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScene12activeWindowEv(void *this_) {
  return (void*)((QGraphicsScene*)this_)->activeWindow();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicsscene.h:249
// [-2] void setActiveWindow(QGraphicsWidget *)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene15setActiveWindowEP15QGraphicsWidget(void *this_, QGraphicsWidget * widget) {
  ((QGraphicsScene*)this_)->setActiveWindow(widget);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsscene.h:251
// [1] bool sendEvent(QGraphicsItem *, QEvent *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZN14QGraphicsScene9sendEventEP13QGraphicsItemP6QEvent(void *this_, QGraphicsItem * item, QEvent * event) {
  return (bool)((QGraphicsScene*)this_)->sendEvent(item, event);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:253
// [8] qreal minimumRenderSize()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScene17minimumRenderSizeEv(void *this_) {
  return (qreal)((QGraphicsScene*)this_)->minimumRenderSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:254
// [-2] void setMinimumRenderSize(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene20setMinimumRenderSizeEd(void *this_, qreal minSize) {
  ((QGraphicsScene*)this_)->setMinimumRenderSize(minSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:257
// [-2] void update(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene6updateERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsScene*)this_)->update(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:258
// [-2] void invalidate(const QRectF &, QGraphicsScene::SceneLayers)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene10invalidateERK6QRectF6QFlagsINS_10SceneLayerEE(void *this_, QRectF* rect, QFlags<QGraphicsScene::SceneLayer> layers) {
  ((QGraphicsScene*)this_)->invalidate(*rect, layers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:259
// [-2] void advance()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene7advanceEv(void *this_) {
  ((QGraphicsScene*)this_)->advance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:260
// [-2] void clearSelection()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene14clearSelectionEv(void *this_) {
  ((QGraphicsScene*)this_)->clearSelection();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicsscene.h:261
// [-2] void clear()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene5clearEv(void *this_) {
  ((QGraphicsScene*)this_)->clear();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:298
// [-2] void changed(const QList<QRectF> &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene7changedERK5QListI6QRectFE(void *this_, QList<QRectF>* region) {
  ((QGraphicsScene*)this_)->changed(*region);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:299
// [-2] void sceneRectChanged(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16sceneRectChangedERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsScene*)this_)->sceneRectChanged(*rect);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qgraphicsscene.h:300
// [-2] void selectionChanged()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16selectionChangedEv(void *this_) {
  ((QGraphicsScene*)this_)->selectionChanged();
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:301
// [-2] void focusItemChanged(QGraphicsItem *, QGraphicsItem *, Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(void *this_, QGraphicsItem * newFocus, QGraphicsItem * oldFocus, Qt::FocusReason reason) {
  ((QGraphicsScene*)this_)->focusItemChanged(newFocus, oldFocus, reason);
}

//  main block end
