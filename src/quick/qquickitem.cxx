//  header block begin

// /usr/include/qt/QtQuick/qquickitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickitem.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickItem is pure virtual: false
// QQuickItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQuickItem_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickItem_t qt_meta_stringdata_MyQQuickItem = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQQuickItem"
  },
  "MyQQuickItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickItem[] = {
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
class Q_DECL_EXPORT MyQQuickItem : public QQuickItem {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickItem::staticMetaObject,
  qt_meta_stringdata_MyQQuickItem.data,
  qt_meta_data_MyQQuickItem,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickItem.stringdata0))
      return static_cast<void*>(this);
  return QQuickItem::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickItem::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickItem() {}
// void QQuickItem(QQuickItem *)
MyQQuickItem(QQuickItem * parent) : QQuickItem(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QQuickItem::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void itemChange(QQuickItem::ItemChange, const QQuickItem::ItemChangeData &)
  virtual void itemChange(QQuickItem::ItemChange arg0, const QQuickItem::ItemChangeData & arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"itemChange", &handled, 2, (uint64_t)arg0, (uint64_t)&arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::itemChange(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void classBegin()
  virtual void classBegin()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"classBegin", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::classBegin();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void componentComplete()
  virtual void componentComplete()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"componentComplete", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::componentComplete();
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
    QQuickItem::keyPressEvent(event);
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
    QQuickItem::keyReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::inputMethodEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::focusInEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::focusOutEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseUngrabEvent()
  virtual void mouseUngrabEvent()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseUngrabEvent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::mouseUngrabEvent();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void touchUngrabEvent()
  virtual void touchUngrabEvent()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"touchUngrabEvent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::touchUngrabEvent();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void touchEvent(QTouchEvent *)
  virtual void touchEvent(QTouchEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"touchEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::touchEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hoverEnterEvent(QHoverEvent *)
  virtual void hoverEnterEvent(QHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::hoverEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hoverMoveEvent(QHoverEvent *)
  virtual void hoverMoveEvent(QHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::hoverMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hoverLeaveEvent(QHoverEvent *)
  virtual void hoverLeaveEvent(QHoverEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hoverLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::hoverLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::dragEnterEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::dragMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::dragLeaveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::dropEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool childMouseEventFilter(QQuickItem *, QEvent *)
  virtual bool childMouseEventFilter(QQuickItem * arg0, QEvent * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childMouseEventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QQuickItem::childMouseEventFilter(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void windowDeactivateEvent()
  virtual void windowDeactivateEvent()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"windowDeactivateEvent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::windowDeactivateEvent();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void geometryChanged(const QRectF &, const QRectF &)
  virtual void geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"geometryChanged", &handled, 2, (uint64_t)&newGeometry, (uint64_t)&oldGeometry, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::geometryChanged(newGeometry, oldGeometry);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSGNode * updatePaintNode(QSGNode *, QQuickItem::UpdatePaintNodeData *)
  virtual QSGNode * updatePaintNode(QSGNode * arg0, QQuickItem::UpdatePaintNodeData * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updatePaintNode", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGNode *)(irv);
      // Pointer Pointer QSGNode *
    } else {
    return QQuickItem::updatePaintNode(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void releaseResources()
  virtual void releaseResources()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"releaseResources", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::releaseResources();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updatePolish()
  virtual void updatePolish()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updatePolish", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickItem::updatePolish();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QQuickItem_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQuickItem* qo = (MyQQuickItem*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:391
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QQuickItem5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QQuickItem*)this_)->QQuickItem::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:394
// [-2] void itemChange(QQuickItem::ItemChange, const QQuickItem::ItemChangeData &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10itemChangeENS_10ItemChangeERKNS_14ItemChangeDataE(void *this_, QQuickItem::ItemChange arg0, QQuickItem::ItemChangeData* arg1) {
  ((QQuickItem*)this_)->QQuickItem::itemChange(arg0, *arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:404
// [-2] void classBegin()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10classBeginEv(void *this_) {
  ((QQuickItem*)this_)->QQuickItem::classBegin();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:405
// [-2] void componentComplete()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem17componentCompleteEv(void *this_) {
  ((QQuickItem*)this_)->QQuickItem::componentComplete();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:407
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:408
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:410
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * arg0) {
  ((QQuickItem*)this_)->QQuickItem::inputMethodEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:412
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QQuickItem*)this_)->QQuickItem::focusInEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:413
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QQuickItem*)this_)->QQuickItem::focusOutEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:414
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:415
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:416
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:417
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:418
// [-2] void mouseUngrabEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16mouseUngrabEventEv(void *this_) {
  ((QQuickItem*)this_)->QQuickItem::mouseUngrabEvent();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:419
// [-2] void touchUngrabEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16touchUngrabEventEv(void *this_) {
  ((QQuickItem*)this_)->QQuickItem::touchUngrabEvent();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:421
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:423
// [-2] void touchEvent(QTouchEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10touchEventEP11QTouchEvent(void *this_, QTouchEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::touchEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:424
// [-2] void hoverEnterEvent(QHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15hoverEnterEventEP11QHoverEvent(void *this_, QHoverEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::hoverEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:425
// [-2] void hoverMoveEvent(QHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem14hoverMoveEventEP11QHoverEvent(void *this_, QHoverEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::hoverMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:426
// [-2] void hoverLeaveEvent(QHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15hoverLeaveEventEP11QHoverEvent(void *this_, QHoverEvent * event) {
  ((QQuickItem*)this_)->QQuickItem::hoverLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:428
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * arg0) {
  ((QQuickItem*)this_)->QQuickItem::dragEnterEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:429
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * arg0) {
  ((QQuickItem*)this_)->QQuickItem::dragMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:430
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * arg0) {
  ((QQuickItem*)this_)->QQuickItem::dragLeaveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:431
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem9dropEventEP10QDropEvent(void *this_, QDropEvent * arg0) {
  ((QQuickItem*)this_)->QQuickItem::dropEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:433
// [1] bool childMouseEventFilter(QQuickItem *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QQuickItem21childMouseEventFilterEPS_P6QEvent(void *this_, QQuickItem * arg0, QEvent * arg1) {
  return (bool)((QQuickItem*)this_)->QQuickItem::childMouseEventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:434
// [-2] void windowDeactivateEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem21windowDeactivateEventEv(void *this_) {
  ((QQuickItem*)this_)->QQuickItem::windowDeactivateEvent();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:436
// [-2] void geometryChanged(const QRectF &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15geometryChangedERK6QRectFS2_(void *this_, QRectF* newGeometry, QRectF* oldGeometry) {
  ((QQuickItem*)this_)->QQuickItem::geometryChanged(*newGeometry, *oldGeometry);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:439
// [8] QSGNode * updatePaintNode(QSGNode *, QQuickItem::UpdatePaintNodeData *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickItem15updatePaintNodeEP7QSGNodePNS_19UpdatePaintNodeDataE(void *this_, QSGNode * arg0, QQuickItem::UpdatePaintNodeData * arg1) {
  return (void*)((QQuickItem*)this_)->QQuickItem::updatePaintNode(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:440
// [-2] void releaseResources()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16releaseResourcesEv(void *this_) {
  ((QQuickItem*)this_)->QQuickItem::releaseResources();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:441
// [-2] void updatePolish()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem12updatePolishEv(void *this_) {
  ((QQuickItem*)this_)->QQuickItem::updatePolish();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:98
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem10metaObjectEv(void *this_) {
  return (void*)((QQuickItem*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:98
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickItem11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickItem*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:98
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QQuickItem11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickItem*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:98
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickItem2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickItem::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:98
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickItem6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickItem::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:198
// [-2] void QQuickItem(QQuickItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickItemC2EPS_(QQuickItem * parent) {
  auto _nilp = (MyQQuickItem*)(0);
  return  new MyQQuickItem(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:199
// [-2] void ~QQuickItem()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItemD2Ev(void *this_) {
  delete (QQuickItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:201
// [8] QQuickWindow * window()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem6windowEv(void *this_) {
  return (void*)((QQuickItem*)this_)->window();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:202
// [8] QQuickItem * parentItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem10parentItemEv(void *this_) {
  return (void*)((QQuickItem*)this_)->parentItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:203
// [-2] void setParentItem(QQuickItem *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem13setParentItemEPS_(void *this_, QQuickItem * parent) {
  ((QQuickItem*)this_)->setParentItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:204
// [-2] void stackBefore(const QQuickItem *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem11stackBeforeEPKS_(void *this_, const QQuickItem * arg0) {
  ((QQuickItem*)this_)->stackBefore(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:205
// [-2] void stackAfter(const QQuickItem *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10stackAfterEPKS_(void *this_, const QQuickItem * arg0) {
  ((QQuickItem*)this_)->stackAfter(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:207
// [32] QRectF childrenRect()
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickItem12childrenRectEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->childrenRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:208
// [-2] QList<QQuickItem *> childItems()
extern "C" Q_DECL_EXPORT
QList<QQuickItem *>* C_ZNK10QQuickItem10childItemsEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->childItems();
return new QList<QQuickItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:210
// [1] bool clip()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem4clipEv(void *this_) {
  return (bool)((QQuickItem*)this_)->clip();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:211
// [-2] void setClip(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem7setClipEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setClip(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:213
// [8] QString state()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem5stateEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->state();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:214
// [-2] void setState(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8setStateERK7QString(void *this_, QString* arg0) {
  ((QQuickItem*)this_)->setState(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:216
// [8] qreal baselineOffset()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem14baselineOffsetEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->baselineOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:217
// [-2] void setBaselineOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem17setBaselineOffsetEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setBaselineOffset(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:219
// [64] QQmlListProperty<QQuickTransform> transform()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem9transformEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->transform();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:221
// [8] qreal x()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem1xEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->x();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:222
// [8] qreal y()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem1yEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->y();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:223
// [16] QPointF position()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem8positionEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->position();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:224
// [-2] void setX(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem4setXEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setX(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:225
// [-2] void setY(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem4setYEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setY(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:226
// [-2] void setPosition(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem11setPositionERK7QPointF(void *this_, QPointF* arg0) {
  ((QQuickItem*)this_)->setPosition(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:228
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem5widthEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:229
// [-2] void setWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8setWidthEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setWidth(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:230
// [-2] void resetWidth()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10resetWidthEv(void *this_) {
  ((QQuickItem*)this_)->resetWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:231
// [-2] void setImplicitWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16setImplicitWidthEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setImplicitWidth(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:232
// [8] qreal implicitWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem13implicitWidthEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->implicitWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:234
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem6heightEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:235
// [-2] void setHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem9setHeightEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setHeight(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:236
// [-2] void resetHeight()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem11resetHeightEv(void *this_) {
  ((QQuickItem*)this_)->resetHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:237
// [-2] void setImplicitHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem17setImplicitHeightEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setImplicitHeight(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:238
// [8] qreal implicitHeight()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem14implicitHeightEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->implicitHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:240
// [-2] void setSize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem7setSizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QQuickItem*)this_)->setSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:242
// [4] QQuickItem::TransformOrigin transformOrigin()
extern "C" Q_DECL_EXPORT
QQuickItem::TransformOrigin C_ZNK10QQuickItem15transformOriginEv(void *this_) {
  return (QQuickItem::TransformOrigin)((QQuickItem*)this_)->transformOrigin();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:243
// [-2] void setTransformOrigin(QQuickItem::TransformOrigin)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem18setTransformOriginENS_15TransformOriginE(void *this_, QQuickItem::TransformOrigin arg0) {
  ((QQuickItem*)this_)->setTransformOrigin(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:244
// [16] QPointF transformOriginPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem20transformOriginPointEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->transformOriginPoint();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:245
// [-2] void setTransformOriginPoint(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem23setTransformOriginPointERK7QPointF(void *this_, QPointF* arg0) {
  ((QQuickItem*)this_)->setTransformOriginPoint(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:247
// [8] qreal z()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem1zEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->z();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:248
// [-2] void setZ(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem4setZEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setZ(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:250
// [8] qreal rotation()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem8rotationEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->rotation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:251
// [-2] void setRotation(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem11setRotationEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setRotation(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:252
// [8] qreal scale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem5scaleEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->scale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:253
// [-2] void setScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8setScaleEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setScale(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:255
// [8] qreal opacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QQuickItem7opacityEv(void *this_) {
  return (qreal)((QQuickItem*)this_)->opacity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:256
// [-2] void setOpacity(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10setOpacityEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->setOpacity(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:258
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem9isVisibleEv(void *this_) {
  return (bool)((QQuickItem*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:259
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10setVisibleEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setVisible(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:261
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem9isEnabledEv(void *this_) {
  return (bool)((QQuickItem*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:262
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem10setEnabledEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:264
// [1] bool smooth()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem6smoothEv(void *this_) {
  return (bool)((QQuickItem*)this_)->smooth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:265
// [-2] void setSmooth(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem9setSmoothEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setSmooth(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:267
// [1] bool activeFocusOnTab()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem16activeFocusOnTabEv(void *this_) {
  return (bool)((QQuickItem*)this_)->activeFocusOnTab();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:268
// [-2] void setActiveFocusOnTab(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem19setActiveFocusOnTabEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setActiveFocusOnTab(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:270
// [1] bool antialiasing()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem12antialiasingEv(void *this_) {
  return (bool)((QQuickItem*)this_)->antialiasing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:271
// [-2] void setAntialiasing(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15setAntialiasingEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setAntialiasing(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:272
// [-2] void resetAntialiasing()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem17resetAntialiasingEv(void *this_) {
  ((QQuickItem*)this_)->resetAntialiasing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:274
// [4] QQuickItem::Flags flags()
extern "C" Q_DECL_EXPORT
QQuickItem::Flags* C_ZNK10QQuickItem5flagsEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->flags();
return new QQuickItem::Flags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:275
// [-2] void setFlag(QQuickItem::Flag, bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem7setFlagENS_4FlagEb(void *this_, QQuickItem::Flag flag, bool enabled) {
  ((QQuickItem*)this_)->setFlag(flag, enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:276
// [-2] void setFlags(QQuickItem::Flags)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8setFlagsE6QFlagsINS_4FlagEE(void *this_, QFlags<QQuickItem::Flag> flags) {
  ((QQuickItem*)this_)->setFlags(flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:278
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem12boundingRectEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:279
// [32] QRectF clipRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem8clipRectEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->clipRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:281
// [1] bool hasActiveFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem14hasActiveFocusEv(void *this_) {
  return (bool)((QQuickItem*)this_)->hasActiveFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:282
// [1] bool hasFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem8hasFocusEv(void *this_) {
  return (bool)((QQuickItem*)this_)->hasFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:283
// [-2] void setFocus(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8setFocusEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setFocus(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:284
// [-2] void setFocus(bool, Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8setFocusEbN2Qt11FocusReasonE(void *this_, bool focus, Qt::FocusReason reason) {
  ((QQuickItem*)this_)->setFocus(focus, reason);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:285
// [1] bool isFocusScope()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem12isFocusScopeEv(void *this_) {
  return (bool)((QQuickItem*)this_)->isFocusScope();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:286
// [8] QQuickItem * scopedFocusItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem15scopedFocusItemEv(void *this_) {
  return (void*)((QQuickItem*)this_)->scopedFocusItem();
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtQuick/qquickitem.h:288
// [1] bool isAncestorOf(const QQuickItem *)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem12isAncestorOfEPKS_(void *this_, const QQuickItem * child) {
  return (bool)((QQuickItem*)this_)->isAncestorOf(child);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:290
// [4] Qt::MouseButtons acceptedMouseButtons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK10QQuickItem20acceptedMouseButtonsEv(void *this_) {
  return (Qt::MouseButtons)((QQuickItem*)this_)->acceptedMouseButtons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:291
// [-2] void setAcceptedMouseButtons(Qt::MouseButtons)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QQuickItem*)this_)->setAcceptedMouseButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:292
// [1] bool acceptHoverEvents()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem17acceptHoverEventsEv(void *this_) {
  return (bool)((QQuickItem*)this_)->acceptHoverEvents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:293
// [-2] void setAcceptHoverEvents(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem20setAcceptHoverEventsEb(void *this_, bool enabled) {
  ((QQuickItem*)this_)->setAcceptHoverEvents(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:296
// [8] QCursor cursor()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem6cursorEv(void *this_) {
  auto rv = ((QQuickItem*)this_)->cursor();
return new QCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:297
// [-2] void setCursor(const QCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem9setCursorERK7QCursor(void *this_, QCursor* cursor) {
  ((QQuickItem*)this_)->setCursor(*cursor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:298
// [-2] void unsetCursor()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem11unsetCursorEv(void *this_) {
  ((QQuickItem*)this_)->unsetCursor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:301
// [1] bool isUnderMouse()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem12isUnderMouseEv(void *this_) {
  return (bool)((QQuickItem*)this_)->isUnderMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:302
// [-2] void grabMouse()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem9grabMouseEv(void *this_) {
  ((QQuickItem*)this_)->grabMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:303
// [-2] void ungrabMouse()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem11ungrabMouseEv(void *this_) {
  ((QQuickItem*)this_)->ungrabMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:304
// [1] bool keepMouseGrab()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem13keepMouseGrabEv(void *this_) {
  return (bool)((QQuickItem*)this_)->keepMouseGrab();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:305
// [-2] void setKeepMouseGrab(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16setKeepMouseGrabEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setKeepMouseGrab(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:306
// [1] bool filtersChildMouseEvents()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem23filtersChildMouseEventsEv(void *this_) {
  return (bool)((QQuickItem*)this_)->filtersChildMouseEvents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:307
// [-2] void setFiltersChildMouseEvents(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem26setFiltersChildMouseEventsEb(void *this_, bool filter) {
  ((QQuickItem*)this_)->setFiltersChildMouseEvents(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:309
// [-2] void grabTouchPoints(const QVector<int> &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15grabTouchPointsERK7QVectorIiE(void *this_, QVector<int>* ids) {
  ((QQuickItem*)this_)->grabTouchPoints(*ids);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:310
// [-2] void ungrabTouchPoints()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem17ungrabTouchPointsEv(void *this_) {
  ((QQuickItem*)this_)->ungrabTouchPoints();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:311
// [1] bool keepTouchGrab()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem13keepTouchGrabEv(void *this_) {
  return (bool)((QQuickItem*)this_)->keepTouchGrab();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:312
// [-2] void setKeepTouchGrab(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16setKeepTouchGrabEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->setKeepTouchGrab(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:315
// [1] bool grabToImage(const QJSValue &, const QSize &)
extern "C" Q_DECL_EXPORT
bool C_ZN10QQuickItem11grabToImageERK8QJSValueRK5QSize(void *this_, QJSValue* callback, QSize* targetSize) {
  return (bool)((QQuickItem*)this_)->grabToImage(*callback, *targetSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:316
// [-2] QSharedPointer<QQuickItemGrabResult> grabToImage(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem11grabToImageERK5QSize(void *this_, QSize* targetSize) {
  auto rv = ((QQuickItem*)this_)->grabToImage(*targetSize);
/*return rv;*/
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:318
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QQuickItem*)this_)->contains(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:320
// [88] QTransform itemTransform(QQuickItem *, bool *)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem13itemTransformEPS_Pb(void *this_, QQuickItem * arg0, bool * arg1) {
  auto rv = ((QQuickItem*)this_)->itemTransform(arg0, arg1);
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:321
// [16] QPointF mapToItem(const QQuickItem *, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem9mapToItemEPKS_RK7QPointF(void *this_, const QQuickItem * item, QPointF* point) {
  auto rv = ((QQuickItem*)this_)->mapToItem(item, *point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:322
// [16] QPointF mapToScene(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem10mapToSceneERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QQuickItem*)this_)->mapToScene(*point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtQuick/qquickitem.h:323
// [16] QPointF mapToGlobal(const QPointF &)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem11mapToGlobalERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QQuickItem*)this_)->mapToGlobal(*point);
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:324
// [32] QRectF mapRectToItem(const QQuickItem *, const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem13mapRectToItemEPKS_RK6QRectF(void *this_, const QQuickItem * item, QRectF* rect) {
  auto rv = ((QQuickItem*)this_)->mapRectToItem(item, *rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:325
// [32] QRectF mapRectToScene(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem14mapRectToSceneERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QQuickItem*)this_)->mapRectToScene(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:326
// [16] QPointF mapFromItem(const QQuickItem *, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem11mapFromItemEPKS_RK7QPointF(void *this_, const QQuickItem * item, QPointF* point) {
  auto rv = ((QQuickItem*)this_)->mapFromItem(item, *point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:327
// [16] QPointF mapFromScene(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem12mapFromSceneERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QQuickItem*)this_)->mapFromScene(*point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtQuick/qquickitem.h:328
// [16] QPointF mapFromGlobal(const QPointF &)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem13mapFromGlobalERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QQuickItem*)this_)->mapFromGlobal(*point);
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:329
// [32] QRectF mapRectFromItem(const QQuickItem *, const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem15mapRectFromItemEPKS_RK6QRectF(void *this_, const QQuickItem * item, QRectF* rect) {
  auto rv = ((QQuickItem*)this_)->mapRectFromItem(item, *rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:330
// [32] QRectF mapRectFromScene(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem16mapRectFromSceneERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QQuickItem*)this_)->mapRectFromScene(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:332
// [-2] void polish()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem6polishEv(void *this_) {
  ((QQuickItem*)this_)->polish();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:334
// [-2] void mapFromItem(QQmlV4Function *)
extern "C" Q_DECL_EXPORT
void C_ZNK10QQuickItem11mapFromItemEP14QQmlV4Function(void *this_, QQmlV4Function * arg0) {
  ((QQuickItem*)this_)->mapFromItem(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:335
// [-2] void mapToItem(QQmlV4Function *)
extern "C" Q_DECL_EXPORT
void C_ZNK10QQuickItem9mapToItemEP14QQmlV4Function(void *this_, QQmlV4Function * arg0) {
  ((QQuickItem*)this_)->mapToItem(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:336
// [-2] void mapFromGlobal(QQmlV4Function *)
extern "C" Q_DECL_EXPORT
void C_ZNK10QQuickItem13mapFromGlobalEP14QQmlV4Function(void *this_, QQmlV4Function * arg0) {
  ((QQuickItem*)this_)->mapFromGlobal(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:337
// [-2] void mapToGlobal(QQmlV4Function *)
extern "C" Q_DECL_EXPORT
void C_ZNK10QQuickItem11mapToGlobalEP14QQmlV4Function(void *this_, QQmlV4Function * arg0) {
  ((QQuickItem*)this_)->mapToGlobal(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:338
// [-2] void forceActiveFocus()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16forceActiveFocusEv(void *this_) {
  ((QQuickItem*)this_)->forceActiveFocus();
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtQuick/qquickitem.h:339
// [-2] void forceActiveFocus(Qt::FocusReason)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem16forceActiveFocusEN2Qt11FocusReasonE(void *this_, Qt::FocusReason reason) {
  ((QQuickItem*)this_)->forceActiveFocus(reason);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:340
// [8] QQuickItem * nextItemInFocusChain(bool)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickItem20nextItemInFocusChainEb(void *this_, bool forward) {
  return (void*)((QQuickItem*)this_)->nextItemInFocusChain(forward);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:341
// [8] QQuickItem * childAt(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem7childAtEdd(void *this_, qreal x, qreal y) {
  return (void*)((QQuickItem*)this_)->childAt(x, y);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:344
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QQuickItem*)this_)->inputMethodQuery(query);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:354
// [1] bool isTextureProvider()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQuickItem17isTextureProviderEv(void *this_) {
  return (bool)((QQuickItem*)this_)->isTextureProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:355
// [8] QSGTextureProvider * textureProvider()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickItem15textureProviderEv(void *this_) {
  return (void*)((QQuickItem*)this_)->textureProvider();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:358
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem6updateEv(void *this_) {
  ((QQuickItem*)this_)->update();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:361
// [-2] void childrenRectChanged(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem19childrenRectChangedERK6QRectF(void *this_, QRectF* arg0) {
  ((QQuickItem*)this_)->childrenRectChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:362
// [-2] void baselineOffsetChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem21baselineOffsetChangedEd(void *this_, qreal arg0) {
  ((QQuickItem*)this_)->baselineOffsetChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:363
// [-2] void stateChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem12stateChangedERK7QString(void *this_, QString* arg0) {
  ((QQuickItem*)this_)->stateChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:364
// [-2] void focusChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem12focusChangedEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->focusChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:365
// [-2] void activeFocusChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem18activeFocusChangedEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->activeFocusChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:366
// [-2] void activeFocusOnTabChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem23activeFocusOnTabChangedEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->activeFocusOnTabChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:367
// [-2] void parentChanged(QQuickItem *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem13parentChangedEPS_(void *this_, QQuickItem * arg0) {
  ((QQuickItem*)this_)->parentChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:368
// [-2] void transformOriginChanged(QQuickItem::TransformOrigin)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(void *this_, QQuickItem::TransformOrigin arg0) {
  ((QQuickItem*)this_)->transformOriginChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:369
// [-2] void smoothChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem13smoothChangedEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->smoothChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:370
// [-2] void antialiasingChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem19antialiasingChangedEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->antialiasingChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:371
// [-2] void clipChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem11clipChangedEb(void *this_, bool arg0) {
  ((QQuickItem*)this_)->clipChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:372
// [-2] void windowChanged(QQuickWindow *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem13windowChangedEP12QQuickWindow(void *this_, QQuickWindow * window) {
  ((QQuickItem*)this_)->windowChanged(window);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:374
// [-2] void childrenChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15childrenChangedEv(void *this_) {
  ((QQuickItem*)this_)->childrenChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:375
// [-2] void opacityChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem14opacityChangedEv(void *this_) {
  ((QQuickItem*)this_)->opacityChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:376
// [-2] void enabledChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem14enabledChangedEv(void *this_) {
  ((QQuickItem*)this_)->enabledChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:377
// [-2] void visibleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem14visibleChangedEv(void *this_) {
  ((QQuickItem*)this_)->visibleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:378
// [-2] void visibleChildrenChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem22visibleChildrenChangedEv(void *this_) {
  ((QQuickItem*)this_)->visibleChildrenChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:379
// [-2] void rotationChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem15rotationChangedEv(void *this_) {
  ((QQuickItem*)this_)->rotationChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:380
// [-2] void scaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem12scaleChangedEv(void *this_) {
  ((QQuickItem*)this_)->scaleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:382
// [-2] void xChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8xChangedEv(void *this_) {
  ((QQuickItem*)this_)->xChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:383
// [-2] void yChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8yChangedEv(void *this_) {
  ((QQuickItem*)this_)->yChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:384
// [-2] void widthChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem12widthChangedEv(void *this_) {
  ((QQuickItem*)this_)->widthChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:385
// [-2] void heightChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem13heightChangedEv(void *this_) {
  ((QQuickItem*)this_)->heightChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:386
// [-2] void zChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem8zChangedEv(void *this_) {
  ((QQuickItem*)this_)->zChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:387
// [-2] void implicitWidthChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem20implicitWidthChangedEv(void *this_) {
  ((QQuickItem*)this_)->implicitWidthChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:388
// [-2] void implicitHeightChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickItem21implicitHeightChangedEv(void *this_) {
  ((QQuickItem*)this_)->implicitHeightChanged();
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
