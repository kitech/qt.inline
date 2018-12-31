//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsproxywidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsProxyWidget is pure virtual: false
// QGraphicsProxyWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsProxyWidget_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsProxyWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsProxyWidget_t qt_meta_stringdata_MyQGraphicsProxyWidget = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQGraphicsProxyWidget"
  },
  "MyQGraphicsProxyWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsProxyWidget[] = {
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
class Q_DECL_EXPORT MyQGraphicsProxyWidget : public QGraphicsProxyWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsProxyWidget::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsProxyWidget.data,
  qt_meta_data_MyQGraphicsProxyWidget,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsProxyWidget.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsProxyWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsProxyWidget::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQGraphicsProxyWidget() {}
// void QGraphicsProxyWidget(QGraphicsItem *, Qt::WindowFlags)
MyQGraphicsProxyWidget(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) : QGraphicsProxyWidget(parent, wFlags) {}
// Protected virtual Visibility=Default Availability=Available
// [16] QVariant itemChange(QGraphicsItem::GraphicsItemChange, const QVariant &)
  virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"itemChange", &handled, 2, (uint64_t)change, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsProxyWidget::itemChange(change, value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsProxyWidget::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsProxyWidget::eventFilter(object, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::showEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::hideEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QGraphicsSceneContextMenuEvent *)
  virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::contextMenuEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragEnterEvent(QGraphicsSceneDragDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::dragEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::dragLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragMoveEvent(QGraphicsSceneDragDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::dragMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QGraphicsSceneDragDropEvent *)
  virtual void dropEvent(QGraphicsSceneDragDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::dropEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hoverEnterEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverEnterEvent(QGraphicsSceneHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::hoverEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hoverLeaveEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::hoverLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hoverMoveEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverMoveEvent(QGraphicsSceneHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::hoverMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void grabMouseEvent(QEvent *)
  virtual void grabMouseEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"grabMouseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::grabMouseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void ungrabMouseEvent(QEvent *)
  virtual void ungrabMouseEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"ungrabMouseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::ungrabMouseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseMoveEvent(QGraphicsSceneMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QGraphicsSceneMouseEvent *)
  virtual void mousePressEvent(QGraphicsSceneMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QGraphicsSceneWheelEvent *)
  virtual void wheelEvent(QGraphicsSceneWheelEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::keyReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::focusOutEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsProxyWidget::focusNextPrevChild(next);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
  virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodQuery", &handled, 1, (uint64_t)query, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsProxyWidget::inputMethodQuery(query);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::inputMethodEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSizeF){};}
    auto prv = (QSizeF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSizeF
    } else {
    return QGraphicsProxyWidget::sizeHint(which, constraint);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QGraphicsSceneResizeEvent *)
  virtual void resizeEvent(QGraphicsSceneResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsProxyWidget::resizeEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsProxyWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsProxyWidget* qo = (MyQGraphicsProxyWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:76
// [16] QVariant itemChange(QGraphicsItem::GraphicsItemChange, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidget10itemChangeEN13QGraphicsItem18GraphicsItemChangeERK8QVariant(void *this_, QGraphicsItem::GraphicsItemChange change, QVariant* value) {
  auto rv = ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::itemChange(change, *value);
return new QVariant(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:78
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QGraphicsProxyWidget5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:79
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QGraphicsProxyWidget11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::eventFilter(object, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:81
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::showEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:82
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget9hideEventEP10QHideEvent(void *this_, QHideEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::hideEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:85
// [-2] void contextMenuEvent(QGraphicsSceneContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget16contextMenuEventEP30QGraphicsSceneContextMenuEvent(void *this_, QGraphicsSceneContextMenuEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:89
// [-2] void dragEnterEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14dragEnterEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:90
// [-2] void dragLeaveEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14dragLeaveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:91
// [-2] void dragMoveEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget13dragMoveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:92
// [-2] void dropEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget9dropEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:95
// [-2] void hoverEnterEvent(QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget15hoverEnterEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::hoverEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:96
// [-2] void hoverLeaveEvent(QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget15hoverLeaveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::hoverLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:97
// [-2] void hoverMoveEvent(QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14hoverMoveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::hoverMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:98
// [-2] void grabMouseEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14grabMouseEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::grabMouseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:99
// [-2] void ungrabMouseEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget16ungrabMouseEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::ungrabMouseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:101
// [-2] void mouseMoveEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget14mouseMoveEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:102
// [-2] void mousePressEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget15mousePressEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:103
// [-2] void mouseReleaseEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget17mouseReleaseEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:104
// [-2] void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget21mouseDoubleClickEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:106
// [-2] void wheelEvent(QGraphicsSceneWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget10wheelEventEP24QGraphicsSceneWheelEvent(void *this_, QGraphicsSceneWheelEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:109
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:110
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:112
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:113
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:114
// [1] bool focusNextPrevChild(bool)
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
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::inputMethodEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:119
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsProxyWidget8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::sizeHint(which, *constraint);
return new QSizeF(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:120
// [-2] void resizeEvent(QGraphicsSceneResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget11resizeEventEP25QGraphicsSceneResizeEvent(void *this_, QGraphicsSceneResizeEvent * event) {
  ((QGraphicsProxyWidget*)this_)->QGraphicsProxyWidget::resizeEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsProxyWidget10metaObjectEv(void *this_) {
  return (void*)((QGraphicsProxyWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsProxyWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QGraphicsProxyWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsProxyWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsProxyWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsProxyWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:56
// [-2] void QGraphicsProxyWidget(QGraphicsItem *, Qt::WindowFlags)
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
// [-2] void setWidget(QWidget *)
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
// [32] QRectF subWidgetRect(const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsProxyWidget13subWidgetRectEPK7QWidget(void *this_, const QWidget * widget) {
  auto rv = ((QGraphicsProxyWidget*)this_)->subWidgetRect(widget);
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:64
// [-2] void setGeometry(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsProxyWidget11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsProxyWidget*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:66
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
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
// [8] QGraphicsProxyWidget * createProxyForChildWidget(QWidget *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsProxyWidget25createProxyForChildWidgetEP7QWidget(void *this_, QWidget * child) {
  return (void*)((QGraphicsProxyWidget*)this_)->createProxyForChildWidget(child);
}
#endif // QT_VERSION >= 0x040500

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
