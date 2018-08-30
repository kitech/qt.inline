//  header block begin
// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicswidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicswidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsWidget is pure virtual: false
// QGraphicsWidget has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsWidget_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsWidget_t qt_meta_stringdata_MyQGraphicsWidget = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQGraphicsWidget"
  },
  "MyQGraphicsWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsWidget[] = {
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
class Q_DECL_EXPORT MyQGraphicsWidget : public QGraphicsWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsWidget::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsWidget.data,
  qt_meta_data_MyQGraphicsWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsWidget.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsWidget() {}
// void QGraphicsWidget(QGraphicsItem *, Qt::WindowFlags)
MyQGraphicsWidget(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) : QGraphicsWidget(parent, wFlags) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOption *)
  virtual void initStyleOption(QStyleOption * option) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsWidget::initStyleOption(option);
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
    return QGraphicsWidget::sizeHint(which, constraint);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateGeometry()
  virtual void updateGeometry()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateGeometry", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsWidget::updateGeometry();
  }
  }

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
    return QGraphicsWidget::itemChange(change, value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [16] QVariant propertyChange(const QString &, const QVariant &)
  virtual QVariant propertyChange(const QString & propertyName, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"propertyChange", &handled, 2, (uint64_t)&propertyName, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsWidget::propertyChange(propertyName, value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool sceneEvent(QEvent *)
  virtual bool sceneEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sceneEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsWidget::sceneEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool windowFrameEvent(QEvent *)
  virtual bool windowFrameEvent(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"windowFrameEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsWidget::windowFrameEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] Qt::WindowFrameSection windowFrameSectionAt(const QPointF &)
  virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF & pos) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"windowFrameSectionAt", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::WindowFrameSection)(int)(irv);
      // Elaborated Enum Qt::WindowFrameSection
    } else {
    return QGraphicsWidget::windowFrameSectionAt(pos);
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
    return QGraphicsWidget::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsWidget::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsWidget::closeEvent(event);
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
    QGraphicsWidget::focusInEvent(event);
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
    return QGraphicsWidget::focusNextPrevChild(next);
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
    QGraphicsWidget::focusOutEvent(event);
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
    QGraphicsWidget::hideEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void moveEvent(QGraphicsSceneMoveEvent *)
  virtual void moveEvent(QGraphicsSceneMoveEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsWidget::moveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void polishEvent()
  virtual void polishEvent()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"polishEvent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsWidget::polishEvent();
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
    QGraphicsWidget::resizeEvent(event);
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
    QGraphicsWidget::showEvent(event);
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
    QGraphicsWidget::hoverMoveEvent(event);
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
    QGraphicsWidget::hoverLeaveEvent(event);
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
    QGraphicsWidget::grabMouseEvent(event);
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
    QGraphicsWidget::ungrabMouseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void grabKeyboardEvent(QEvent *)
  virtual void grabKeyboardEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"grabKeyboardEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsWidget::grabKeyboardEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void ungrabKeyboardEvent(QEvent *)
  virtual void ungrabKeyboardEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"ungrabKeyboardEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsWidget::ungrabKeyboardEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QGraphicsWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsWidget* qo = (MyQGraphicsWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:185
// [-2] void initStyleOption(QStyleOption *)
extern "C" Q_DECL_EXPORT
void C_ZNK15QGraphicsWidget15initStyleOptionEP12QStyleOption(void *this_, QStyleOption * option) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::initStyleOption(option);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:187
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsWidget*)this_)->QGraphicsWidget::sizeHint(which, *constraint);
return new QSizeF(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:188
// [-2] void updateGeometry()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget14updateGeometryEv(void *this_) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::updateGeometry();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:191
// [16] QVariant itemChange(QGraphicsItem::GraphicsItemChange, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsWidget10itemChangeEN13QGraphicsItem18GraphicsItemChangeERK8QVariant(void *this_, QGraphicsItem::GraphicsItemChange change, QVariant* value) {
  auto rv = ((QGraphicsWidget*)this_)->QGraphicsWidget::itemChange(change, *value);
return new QVariant(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:192
// [16] QVariant propertyChange(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsWidget14propertyChangeERK7QStringRK8QVariant(void *this_, QString* propertyName, QVariant* value) {
  auto rv = ((QGraphicsWidget*)this_)->QGraphicsWidget::propertyChange(*propertyName, *value);
return new QVariant(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:195
// [1] bool sceneEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGraphicsWidget10sceneEventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsWidget*)this_)->QGraphicsWidget::sceneEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:196
// [1] bool windowFrameEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGraphicsWidget16windowFrameEventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QGraphicsWidget*)this_)->QGraphicsWidget::windowFrameEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicswidget.h:197
// [4] Qt::WindowFrameSection windowFrameSectionAt(const QPointF &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
Qt::WindowFrameSection C_ZNK15QGraphicsWidget20windowFrameSectionAtERK7QPointF(void *this_, QPointF* pos) {
  return (Qt::WindowFrameSection)((QGraphicsWidget*)this_)->QGraphicsWidget::windowFrameSectionAt(*pos);
}
#endif // QT_VERSION >= 0x040400

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:200
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGraphicsWidget5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsWidget*)this_)->QGraphicsWidget::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:202
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:203
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:206
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:207
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGraphicsWidget18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QGraphicsWidget*)this_)->QGraphicsWidget::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:208
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:209
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget9hideEventEP10QHideEvent(void *this_, QHideEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::hideEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:211
// [-2] void moveEvent(QGraphicsSceneMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget9moveEventEP23QGraphicsSceneMoveEvent(void *this_, QGraphicsSceneMoveEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::moveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:212
// [-2] void polishEvent()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget11polishEventEv(void *this_) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::polishEvent();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:214
// [-2] void resizeEvent(QGraphicsSceneResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget11resizeEventEP25QGraphicsSceneResizeEvent(void *this_, QGraphicsSceneResizeEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:215
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::showEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:217
// [-2] void hoverMoveEvent(QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget14hoverMoveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::hoverMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:218
// [-2] void hoverLeaveEvent(QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget15hoverLeaveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::hoverLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:219
// [-2] void grabMouseEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget14grabMouseEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::grabMouseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:220
// [-2] void ungrabMouseEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget16ungrabMouseEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::ungrabMouseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:221
// [-2] void grabKeyboardEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget17grabKeyboardEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::grabKeyboardEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:222
// [-2] void ungrabKeyboardEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget19ungrabKeyboardEventEP6QEvent(void *this_, QEvent * event) {
  ((QGraphicsWidget*)this_)->QGraphicsWidget::ungrabKeyboardEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:66
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget10metaObjectEv(void *this_) {
  return (void*)((QGraphicsWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:66
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:66
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QGraphicsWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:66
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:66
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:83
// [-2] void QGraphicsWidget(QGraphicsItem *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsWidgetC2EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) {
  auto _nilp = (MyQGraphicsWidget*)(0);
  return  new MyQGraphicsWidget(parent, wFlags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:84
// [-2] void ~QGraphicsWidget()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidgetD2Ev(void *this_) {
  delete (QGraphicsWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:85
// [8] QGraphicsLayout * layout()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget6layoutEv(void *this_) {
  return (void*)((QGraphicsWidget*)this_)->layout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:86
// [-2] void setLayout(QGraphicsLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget9setLayoutEP15QGraphicsLayout(void *this_, QGraphicsLayout * layout) {
  ((QGraphicsWidget*)this_)->setLayout(layout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:87
// [-2] void adjustSize()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget10adjustSizeEv(void *this_) {
  ((QGraphicsWidget*)this_)->adjustSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:89
// [4] Qt::LayoutDirection layoutDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK15QGraphicsWidget15layoutDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QGraphicsWidget*)this_)->layoutDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:90
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QGraphicsWidget*)this_)->setLayoutDirection(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:91
// [-2] void unsetLayoutDirection()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget20unsetLayoutDirectionEv(void *this_) {
  ((QGraphicsWidget*)this_)->unsetLayoutDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:93
// [8] QStyle * style()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget5styleEv(void *this_) {
  return (void*)((QGraphicsWidget*)this_)->style();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:94
// [-2] void setStyle(QStyle *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget8setStyleEP6QStyle(void *this_, QStyle * style) {
  ((QGraphicsWidget*)this_)->setStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:96
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget4fontEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:97
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget7setFontERK5QFont(void *this_, QFont* font) {
  ((QGraphicsWidget*)this_)->setFont(*font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:99
// [16] QPalette palette()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget7paletteEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->palette();
return new QPalette(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:100
// [-2] void setPalette(const QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget10setPaletteERK8QPalette(void *this_, QPalette* palette) {
  ((QGraphicsWidget*)this_)->setPalette(*palette);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:102
// [1] bool autoFillBackground()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGraphicsWidget18autoFillBackgroundEv(void *this_) {
  return (bool)((QGraphicsWidget*)this_)->autoFillBackground();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:103
// [-2] void setAutoFillBackground(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget21setAutoFillBackgroundEb(void *this_, bool enabled) {
  ((QGraphicsWidget*)this_)->setAutoFillBackground(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:105
// [-2] void resize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget6resizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QGraphicsWidget*)this_)->resize(*size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:106
// [-2] void resize(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget6resizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsWidget*)this_)->resize(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:107
// [16] QSizeF size()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget4sizeEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->size();
return new QSizeF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:109
// [-2] void setGeometry(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsWidget*)this_)->setGeometry(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:110
// [-2] void setGeometry(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget11setGeometryEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsWidget*)this_)->setGeometry(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:111
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget4rectEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->rect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:113
// [-2] void setContentsMargins(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget18setContentsMarginsEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QGraphicsWidget*)this_)->setContentsMargins(left, top, right, bottom);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:114
// [-2] void getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK15QGraphicsWidget18getContentsMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsWidget*)this_)->getContentsMargins(left, top, right, bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:116
// [-2] void setWindowFrameMargins(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget21setWindowFrameMarginsEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QGraphicsWidget*)this_)->setWindowFrameMargins(left, top, right, bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:117
// [-2] void getWindowFrameMargins(qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK15QGraphicsWidget21getWindowFrameMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsWidget*)this_)->getWindowFrameMargins(left, top, right, bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:118
// [-2] void unsetWindowFrameMargins()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget23unsetWindowFrameMarginsEv(void *this_) {
  ((QGraphicsWidget*)this_)->unsetWindowFrameMargins();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:119
// [32] QRectF windowFrameGeometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget19windowFrameGeometryEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->windowFrameGeometry();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:120
// [32] QRectF windowFrameRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget15windowFrameRectEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->windowFrameRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:123
// [4] Qt::WindowFlags windowFlags()
extern "C" Q_DECL_EXPORT
Qt::WindowFlags C_ZNK15QGraphicsWidget11windowFlagsEv(void *this_) {
  return (Qt::WindowFlags)((QGraphicsWidget*)this_)->windowFlags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:124
// [4] Qt::WindowType windowType()
extern "C" Q_DECL_EXPORT
Qt::WindowType C_ZNK15QGraphicsWidget10windowTypeEv(void *this_) {
  return (Qt::WindowType)((QGraphicsWidget*)this_)->windowType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:125
// [-2] void setWindowFlags(Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget14setWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> wFlags) {
  ((QGraphicsWidget*)this_)->setWindowFlags(wFlags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:126
// [1] bool isActiveWindow()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGraphicsWidget14isActiveWindowEv(void *this_) {
  return (bool)((QGraphicsWidget*)this_)->isActiveWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:127
// [-2] void setWindowTitle(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget14setWindowTitleERK7QString(void *this_, QString* title) {
  ((QGraphicsWidget*)this_)->setWindowTitle(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:128
// [8] QString windowTitle()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget11windowTitleEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->windowTitle();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:131
// [4] Qt::FocusPolicy focusPolicy()
extern "C" Q_DECL_EXPORT
Qt::FocusPolicy C_ZNK15QGraphicsWidget11focusPolicyEv(void *this_) {
  return (Qt::FocusPolicy)((QGraphicsWidget*)this_)->focusPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:132
// [-2] void setFocusPolicy(Qt::FocusPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget14setFocusPolicyEN2Qt11FocusPolicyE(void *this_, Qt::FocusPolicy policy) {
  ((QGraphicsWidget*)this_)->setFocusPolicy(policy);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:133
// [-2] void setTabOrder(QGraphicsWidget *, QGraphicsWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget11setTabOrderEPS_S0_(QGraphicsWidget * first, QGraphicsWidget * second) {
  QGraphicsWidget::setTabOrder(first, second);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:134
// [8] QGraphicsWidget * focusWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget11focusWidgetEv(void *this_) {
  return (void*)((QGraphicsWidget*)this_)->focusWidget();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:137
// [4] int grabShortcut(const QKeySequence &, Qt::ShortcutContext)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN15QGraphicsWidget12grabShortcutERK12QKeySequenceN2Qt15ShortcutContextE(void *this_, QKeySequence* sequence, Qt::ShortcutContext context) {
  return (int)((QGraphicsWidget*)this_)->grabShortcut(*sequence, context);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:138
// [-2] void releaseShortcut(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget15releaseShortcutEi(void *this_, int id) {
  ((QGraphicsWidget*)this_)->releaseShortcut(id);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:139
// [-2] void setShortcutEnabled(int, bool)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget18setShortcutEnabledEib(void *this_, int id, bool enabled) {
  ((QGraphicsWidget*)this_)->setShortcutEnabled(id, enabled);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:140
// [-2] void setShortcutAutoRepeat(int, bool)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget21setShortcutAutoRepeatEib(void *this_, int id, bool enabled) {
  ((QGraphicsWidget*)this_)->setShortcutAutoRepeat(id, enabled);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:145
// [-2] void addAction(QAction *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget9addActionEP7QAction(void *this_, QAction * action) {
  ((QGraphicsWidget*)this_)->addAction(action);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:150
// [-2] void addActions(QList<QAction *>)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget10addActionsE5QListIP7QActionE(void *this_, QList<QAction *> actions) {
  ((QGraphicsWidget*)this_)->addActions(actions);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:151
// [-2] void insertActions(QAction *, QList<QAction *>)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget13insertActionsEP7QAction5QListIS1_E(void *this_, QAction * before, QList<QAction *> actions) {
  ((QGraphicsWidget*)this_)->insertActions(before, actions);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:153
// [-2] void insertAction(QAction *, QAction *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget12insertActionEP7QActionS1_(void *this_, QAction * before, QAction * action) {
  ((QGraphicsWidget*)this_)->insertAction(before, action);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:154
// [-2] void removeAction(QAction *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget12removeActionEP7QAction(void *this_, QAction * action) {
  ((QGraphicsWidget*)this_)->removeAction(action);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicswidget.h:155
// [-2] QList<QAction *> actions()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QList<QAction *>* C_ZNK15QGraphicsWidget7actionsEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->actions();
return new QList<QAction *>(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:158
// [-2] void setAttribute(Qt::WidgetAttribute, bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget12setAttributeEN2Qt15WidgetAttributeEb(void *this_, Qt::WidgetAttribute attribute, bool on) {
  ((QGraphicsWidget*)this_)->setAttribute(attribute, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:159
// [1] bool testAttribute(Qt::WidgetAttribute)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGraphicsWidget13testAttributeEN2Qt15WidgetAttributeE(void *this_, Qt::WidgetAttribute attribute) {
  return (bool)((QGraphicsWidget*)this_)->testAttribute(attribute);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:164
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK15QGraphicsWidget4typeEv(void *this_) {
  return (int)((QGraphicsWidget*)this_)->type();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:166
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsWidget*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:167
// [-2] void paintWindowFrame(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget16paintWindowFrameEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsWidget*)this_)->paintWindowFrame(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:168
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:169
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsWidget5shapeEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->shape();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:178
// [-2] void geometryChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget15geometryChangedEv(void *this_) {
  ((QGraphicsWidget*)this_)->geometryChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:179
// [-2] void layoutChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsWidget13layoutChangedEv(void *this_) {
  ((QGraphicsWidget*)this_)->layoutChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:182
// [1] bool close()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGraphicsWidget5closeEv(void *this_) {
  return (bool)((QGraphicsWidget*)this_)->close();
}

//  main block end
