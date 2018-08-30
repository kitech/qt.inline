//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsView is pure virtual: false
// QGraphicsView has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsView_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsView_t qt_meta_stringdata_MyQGraphicsView = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQGraphicsView"
  },
  "MyQGraphicsView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsView[] = {
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
class Q_DECL_EXPORT MyQGraphicsView : public QGraphicsView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsView::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsView.data,
  qt_meta_data_MyQGraphicsView,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsView.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsView() {}
// void QGraphicsView(QWidget *)
MyQGraphicsView(QWidget * parent) : QGraphicsView(parent) {}
// void QGraphicsView(QGraphicsScene *, QWidget *)
MyQGraphicsView(QGraphicsScene * scene, QWidget * parent) : QGraphicsView(scene, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void setupViewport(QWidget *)
  virtual void setupViewport(QWidget * widget)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setupViewport", &handled, 1, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::setupViewport(widget);
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
    return QGraphicsView::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsView::viewportEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::contextMenuEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::dragEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::dragLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::dragMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::dropEvent(event);
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
    QGraphicsView::focusInEvent(event);
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
    return QGraphicsView::focusNextPrevChild(next);
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
    QGraphicsView::focusOutEvent(event);
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
    QGraphicsView::keyPressEvent(event);
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
    QGraphicsView::keyReleaseEvent(event);
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
    QGraphicsView::mouseDoubleClickEvent(event);
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
    QGraphicsView::mousePressEvent(event);
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
    QGraphicsView::mouseMoveEvent(event);
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
    QGraphicsView::mouseReleaseEvent(event);
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
    QGraphicsView::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::scrollContentsBy(dx, dy);
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
    QGraphicsView::showEvent(event);
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
    QGraphicsView::inputMethodEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawBackground(QPainter *, const QRectF &)
  virtual void drawBackground(QPainter * painter, const QRectF & rect)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawBackground", &handled, 2, (uint64_t)painter, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::drawBackground(painter, rect);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawForeground(QPainter *, const QRectF &)
  virtual void drawForeground(QPainter * painter, const QRectF & rect)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawForeground", &handled, 2, (uint64_t)painter, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::drawForeground(painter, rect);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawItems(QPainter *, int, QGraphicsItem **, const QStyleOptionGraphicsItem *)
  virtual void drawItems(QPainter * painter, int numItems, QGraphicsItem * items[], const QStyleOptionGraphicsItem options[])  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawItems", &handled, 4, (uint64_t)painter, (uint64_t)numItems, (uint64_t)items, (uint64_t)options, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsView::drawItems(painter, numItems, items, options);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QGraphicsView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsView* qo = (MyQGraphicsView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:236
// [-2] void setupViewport(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView13setupViewportEP7QWidget(void *this_, QWidget * widget) {
  ((QGraphicsView*)this_)->QGraphicsView::setupViewport(widget);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:240
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QGraphicsView5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsView*)this_)->QGraphicsView::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:241
// [1] bool viewportEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QGraphicsView13viewportEventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsView*)this_)->QGraphicsView::viewportEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:244
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:247
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:248
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:249
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:250
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:252
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:253
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN13QGraphicsView18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QGraphicsView*)this_)->QGraphicsView::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:254
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:255
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:256
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:257
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:258
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:259
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:260
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:262
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:264
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:265
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:266
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QGraphicsView*)this_)->QGraphicsView::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:267
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::showEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:268
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * event) {
  ((QGraphicsView*)this_)->QGraphicsView::inputMethodEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:270
// [-2] void drawBackground(QPainter *, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView14drawBackgroundEP8QPainterRK6QRectF(void *this_, QPainter * painter, QRectF* rect) {
  ((QGraphicsView*)this_)->QGraphicsView::drawBackground(painter, *rect);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:271
// [-2] void drawForeground(QPainter *, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView14drawForegroundEP8QPainterRK6QRectF(void *this_, QPainter * painter, QRectF* rect) {
  ((QGraphicsView*)this_)->QGraphicsView::drawForeground(painter, *rect);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:272
// [-2] void drawItems(QPainter *, int, QGraphicsItem **, const QStyleOptionGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView9drawItemsEP8QPainteriPP13QGraphicsItemPK24QStyleOptionGraphicsItem(void *this_, QPainter * painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) {
  ((QGraphicsView*)this_)->QGraphicsView::drawItems(painter, numItems, items, options);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView10metaObjectEv(void *this_) {
  return (void*)((QGraphicsView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGraphicsView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QGraphicsView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGraphicsView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGraphicsView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:117
// [-2] void QGraphicsView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGraphicsViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQGraphicsView*)(0);
  return  new MyQGraphicsView(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:118
// [-2] void QGraphicsView(QGraphicsScene *, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGraphicsViewC2EP14QGraphicsSceneP7QWidget(QGraphicsScene * scene, QWidget * parent) {
  auto _nilp = (MyQGraphicsView*)(0);
  return  new MyQGraphicsView(scene, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:119
// [-2] void ~QGraphicsView()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsViewD2Ev(void *this_) {
  delete (QGraphicsView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:121
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView8sizeHintEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:123
// [4] QPainter::RenderHints renderHints()
extern "C" Q_DECL_EXPORT
QPainter::RenderHints C_ZNK13QGraphicsView11renderHintsEv(void *this_) {
  return (QPainter::RenderHints)((QGraphicsView*)this_)->renderHints();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:124
// [-2] void setRenderHint(QPainter::RenderHint, bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView13setRenderHintEN8QPainter10RenderHintEb(void *this_, QPainter::RenderHint hint, bool enabled) {
  ((QGraphicsView*)this_)->setRenderHint(hint, enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:125
// [-2] void setRenderHints(QPainter::RenderHints)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView14setRenderHintsE6QFlagsIN8QPainter10RenderHintEE(void *this_, QFlags<QPainter::RenderHint> hints) {
  ((QGraphicsView*)this_)->setRenderHints(hints);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:127
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK13QGraphicsView9alignmentEv(void *this_) {
  return (Qt::Alignment)((QGraphicsView*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:128
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsView*)this_)->setAlignment(alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:130
// [4] QGraphicsView::ViewportAnchor transformationAnchor()
extern "C" Q_DECL_EXPORT
QGraphicsView::ViewportAnchor C_ZNK13QGraphicsView20transformationAnchorEv(void *this_) {
  return (QGraphicsView::ViewportAnchor)((QGraphicsView*)this_)->transformationAnchor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:131
// [-2] void setTransformationAnchor(QGraphicsView::ViewportAnchor)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView23setTransformationAnchorENS_14ViewportAnchorE(void *this_, QGraphicsView::ViewportAnchor anchor) {
  ((QGraphicsView*)this_)->setTransformationAnchor(anchor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:133
// [4] QGraphicsView::ViewportAnchor resizeAnchor()
extern "C" Q_DECL_EXPORT
QGraphicsView::ViewportAnchor C_ZNK13QGraphicsView12resizeAnchorEv(void *this_) {
  return (QGraphicsView::ViewportAnchor)((QGraphicsView*)this_)->resizeAnchor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:134
// [-2] void setResizeAnchor(QGraphicsView::ViewportAnchor)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView15setResizeAnchorENS_14ViewportAnchorE(void *this_, QGraphicsView::ViewportAnchor anchor) {
  ((QGraphicsView*)this_)->setResizeAnchor(anchor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:136
// [4] QGraphicsView::ViewportUpdateMode viewportUpdateMode()
extern "C" Q_DECL_EXPORT
QGraphicsView::ViewportUpdateMode C_ZNK13QGraphicsView18viewportUpdateModeEv(void *this_) {
  return (QGraphicsView::ViewportUpdateMode)((QGraphicsView*)this_)->viewportUpdateMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:137
// [-2] void setViewportUpdateMode(QGraphicsView::ViewportUpdateMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView21setViewportUpdateModeENS_18ViewportUpdateModeE(void *this_, QGraphicsView::ViewportUpdateMode mode) {
  ((QGraphicsView*)this_)->setViewportUpdateMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:139
// [4] QGraphicsView::OptimizationFlags optimizationFlags()
extern "C" Q_DECL_EXPORT
QGraphicsView::OptimizationFlags* C_ZNK13QGraphicsView17optimizationFlagsEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->optimizationFlags();
return new QGraphicsView::OptimizationFlags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:140
// [-2] void setOptimizationFlag(QGraphicsView::OptimizationFlag, bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView19setOptimizationFlagENS_16OptimizationFlagEb(void *this_, QGraphicsView::OptimizationFlag flag, bool enabled) {
  ((QGraphicsView*)this_)->setOptimizationFlag(flag, enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:141
// [-2] void setOptimizationFlags(QGraphicsView::OptimizationFlags)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView20setOptimizationFlagsE6QFlagsINS_16OptimizationFlagEE(void *this_, QFlags<QGraphicsView::OptimizationFlag> flags) {
  ((QGraphicsView*)this_)->setOptimizationFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:143
// [4] QGraphicsView::DragMode dragMode()
extern "C" Q_DECL_EXPORT
QGraphicsView::DragMode C_ZNK13QGraphicsView8dragModeEv(void *this_) {
  return (QGraphicsView::DragMode)((QGraphicsView*)this_)->dragMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:144
// [-2] void setDragMode(QGraphicsView::DragMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView11setDragModeENS_8DragModeE(void *this_, QGraphicsView::DragMode mode) {
  ((QGraphicsView*)this_)->setDragMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:147
// [4] Qt::ItemSelectionMode rubberBandSelectionMode()
extern "C" Q_DECL_EXPORT
Qt::ItemSelectionMode C_ZNK13QGraphicsView23rubberBandSelectionModeEv(void *this_) {
  return (Qt::ItemSelectionMode)((QGraphicsView*)this_)->rubberBandSelectionMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:148
// [-2] void setRubberBandSelectionMode(Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView26setRubberBandSelectionModeEN2Qt17ItemSelectionModeE(void *this_, Qt::ItemSelectionMode mode) {
  ((QGraphicsView*)this_)->setRubberBandSelectionMode(mode);
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtWidgets/qgraphicsview.h:149
// [16] QRect rubberBandRect()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView14rubberBandRectEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->rubberBandRect();
return new QRect(rv);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:152
// [4] QGraphicsView::CacheMode cacheMode()
extern "C" Q_DECL_EXPORT
QGraphicsView::CacheMode* C_ZNK13QGraphicsView9cacheModeEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->cacheMode();
return new QGraphicsView::CacheMode(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:153
// [-2] void setCacheMode(QGraphicsView::CacheMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView12setCacheModeE6QFlagsINS_13CacheModeFlagEE(void *this_, QFlags<QGraphicsView::CacheModeFlag> mode) {
  ((QGraphicsView*)this_)->setCacheMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:154
// [-2] void resetCachedContent()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView18resetCachedContentEv(void *this_) {
  ((QGraphicsView*)this_)->resetCachedContent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:156
// [1] bool isInteractive()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsView13isInteractiveEv(void *this_) {
  return (bool)((QGraphicsView*)this_)->isInteractive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:157
// [-2] void setInteractive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView14setInteractiveEb(void *this_, bool allowed) {
  ((QGraphicsView*)this_)->setInteractive(allowed);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:159
// [8] QGraphicsScene * scene()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView5sceneEv(void *this_) {
  return (void*)((QGraphicsView*)this_)->scene();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:160
// [-2] void setScene(QGraphicsScene *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView8setSceneEP14QGraphicsScene(void *this_, QGraphicsScene * scene) {
  ((QGraphicsView*)this_)->setScene(scene);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:162
// [32] QRectF sceneRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView9sceneRectEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->sceneRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:163
// [-2] void setSceneRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView12setSceneRectERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsView*)this_)->setSceneRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:164
// [-2] void setSceneRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView12setSceneRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsView*)this_)->setSceneRect(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:166
// [48] QMatrix matrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView6matrixEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->matrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:167
// [-2] void setMatrix(const QMatrix &, bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView9setMatrixERK7QMatrixb(void *this_, QMatrix* matrix, bool combine) {
  ((QGraphicsView*)this_)->setMatrix(*matrix, combine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:168
// [-2] void resetMatrix()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView11resetMatrixEv(void *this_) {
  ((QGraphicsView*)this_)->resetMatrix();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:169
// [88] QTransform transform()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView9transformEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->transform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:170
// [88] QTransform viewportTransform()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView17viewportTransformEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->viewportTransform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicsview.h:171
// [1] bool isTransformed()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGraphicsView13isTransformedEv(void *this_) {
  return (bool)((QGraphicsView*)this_)->isTransformed();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:172
// [-2] void setTransform(const QTransform &, bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView12setTransformERK10QTransformb(void *this_, QTransform* matrix, bool combine) {
  ((QGraphicsView*)this_)->setTransform(*matrix, combine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:173
// [-2] void resetTransform()
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView14resetTransformEv(void *this_) {
  ((QGraphicsView*)this_)->resetTransform();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:174
// [-2] void rotate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView6rotateEd(void *this_, qreal angle) {
  ((QGraphicsView*)this_)->rotate(angle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:175
// [-2] void scale(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView5scaleEdd(void *this_, qreal sx, qreal sy) {
  ((QGraphicsView*)this_)->scale(sx, sy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:176
// [-2] void shear(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView5shearEdd(void *this_, qreal sh, qreal sv) {
  ((QGraphicsView*)this_)->shear(sh, sv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:177
// [-2] void translate(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QGraphicsView*)this_)->translate(dx, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:179
// [-2] void centerOn(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView8centerOnERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsView*)this_)->centerOn(*pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:180
// [-2] void centerOn(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView8centerOnEdd(void *this_, qreal x, qreal y) {
  ((QGraphicsView*)this_)->centerOn(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:181
// [-2] void centerOn(const QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView8centerOnEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  ((QGraphicsView*)this_)->centerOn(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:182
// [-2] void ensureVisible(const QRectF &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView13ensureVisibleERK6QRectFii(void *this_, QRectF* rect, int xmargin, int ymargin) {
  ((QGraphicsView*)this_)->ensureVisible(*rect, xmargin, ymargin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:183
// [-2] void ensureVisible(qreal, qreal, qreal, qreal, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView13ensureVisibleEddddii(void *this_, qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin) {
  ((QGraphicsView*)this_)->ensureVisible(x, y, w, h, xmargin, ymargin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:184
// [-2] void ensureVisible(const QGraphicsItem *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView13ensureVisibleEPK13QGraphicsItemii(void *this_, const QGraphicsItem * item, int xmargin, int ymargin) {
  ((QGraphicsView*)this_)->ensureVisible(item, xmargin, ymargin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:185
// [-2] void fitInView(const QRectF &, Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView9fitInViewERK6QRectFN2Qt15AspectRatioModeE(void *this_, QRectF* rect, Qt::AspectRatioMode aspectRadioMode) {
  ((QGraphicsView*)this_)->fitInView(*rect, aspectRadioMode);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:186
// [-2] void fitInView(qreal, qreal, qreal, qreal, Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE(void *this_, qreal x, qreal y, qreal w, qreal h, Qt::AspectRatioMode aspectRadioMode) {
  ((QGraphicsView*)this_)->fitInView(x, y, w, h, aspectRadioMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:188
// [-2] void fitInView(const QGraphicsItem *, Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView9fitInViewEPK13QGraphicsItemN2Qt15AspectRatioModeE(void *this_, const QGraphicsItem * item, Qt::AspectRatioMode aspectRadioMode) {
  ((QGraphicsView*)this_)->fitInView(item, aspectRadioMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:191
// [-2] void render(QPainter *, const QRectF &, const QRect &, Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView6renderEP8QPainterRK6QRectFRK5QRectN2Qt15AspectRatioModeE(void *this_, QPainter * painter, QRectF* target, QRect* source, Qt::AspectRatioMode aspectRatioMode) {
  ((QGraphicsView*)this_)->render(painter, *target, *source, aspectRatioMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:194
// [8] QList<QGraphicsItem *> items()
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK13QGraphicsView5itemsEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->items();
return new QList<QGraphicsItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:195
// [8] QList<QGraphicsItem *> items(const QPoint &)
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK13QGraphicsView5itemsERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QGraphicsView*)this_)->items(*pos);
return new QList<QGraphicsItem *>(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:196
// [8] QList<QGraphicsItem *> items(int, int)
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK13QGraphicsView5itemsEii(void *this_, int x, int y) {
  auto rv = ((QGraphicsView*)this_)->items(x, y);
return new QList<QGraphicsItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:197
// [8] QList<QGraphicsItem *> items(const QRect &, Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK13QGraphicsView5itemsERK5QRectN2Qt17ItemSelectionModeE(void *this_, QRect* rect, Qt::ItemSelectionMode mode) {
  auto rv = ((QGraphicsView*)this_)->items(*rect, mode);
return new QList<QGraphicsItem *>(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qgraphicsview.h:198
// [8] QList<QGraphicsItem *> items(int, int, int, int, Qt::ItemSelectionMode)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE(void *this_, int x, int y, int w, int h, Qt::ItemSelectionMode mode) {
  auto rv = ((QGraphicsView*)this_)->items(x, y, w, h, mode);
return new QList<QGraphicsItem *>(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:199
// [8] QList<QGraphicsItem *> items(const QPolygon &, Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK13QGraphicsView5itemsERK8QPolygonN2Qt17ItemSelectionModeE(void *this_, QPolygon* polygon, Qt::ItemSelectionMode mode) {
  auto rv = ((QGraphicsView*)this_)->items(*polygon, mode);
return new QList<QGraphicsItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:200
// [8] QList<QGraphicsItem *> items(const QPainterPath &, Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
QList<QGraphicsItem *>* C_ZNK13QGraphicsView5itemsERK12QPainterPathN2Qt17ItemSelectionModeE(void *this_, QPainterPath* path, Qt::ItemSelectionMode mode) {
  auto rv = ((QGraphicsView*)this_)->items(*path, mode);
return new QList<QGraphicsItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:201
// [8] QGraphicsItem * itemAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView6itemAtERK6QPoint(void *this_, QPoint* pos) {
  return (void*)((QGraphicsView*)this_)->itemAt(*pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:202
// [8] QGraphicsItem * itemAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView6itemAtEii(void *this_, int x, int y) {
  return (void*)((QGraphicsView*)this_)->itemAt(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:204
// [16] QPointF mapToScene(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView10mapToSceneERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QGraphicsView*)this_)->mapToScene(*point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:205
// [8] QPolygonF mapToScene(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView10mapToSceneERK5QRect(void *this_, QRect* rect) {
  auto rv = ((QGraphicsView*)this_)->mapToScene(*rect);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:206
// [8] QPolygonF mapToScene(const QPolygon &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView10mapToSceneERK8QPolygon(void *this_, QPolygon* polygon) {
  auto rv = ((QGraphicsView*)this_)->mapToScene(*polygon);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:207
// [8] QPainterPath mapToScene(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView10mapToSceneERK12QPainterPath(void *this_, QPainterPath* path) {
  auto rv = ((QGraphicsView*)this_)->mapToScene(*path);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:208
// [8] QPoint mapFromScene(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView12mapFromSceneERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QGraphicsView*)this_)->mapFromScene(*point);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:209
// [8] QPolygon mapFromScene(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView12mapFromSceneERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsView*)this_)->mapFromScene(*rect);
return new QPolygon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:210
// [8] QPolygon mapFromScene(const QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView12mapFromSceneERK9QPolygonF(void *this_, QPolygonF* polygon) {
  auto rv = ((QGraphicsView*)this_)->mapFromScene(*polygon);
return new QPolygon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:211
// [8] QPainterPath mapFromScene(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView12mapFromSceneERK12QPainterPath(void *this_, QPainterPath* path) {
  auto rv = ((QGraphicsView*)this_)->mapFromScene(*path);
return new QPainterPath(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:212
// [16] QPointF mapToScene(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView10mapToSceneEii(void *this_, int x, int y) {
  auto rv = ((QGraphicsView*)this_)->mapToScene(x, y);
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:213
// [8] QPolygonF mapToScene(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView10mapToSceneEiiii(void *this_, int x, int y, int w, int h) {
  auto rv = ((QGraphicsView*)this_)->mapToScene(x, y, w, h);
return new QPolygonF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:214
// [8] QPoint mapFromScene(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView12mapFromSceneEdd(void *this_, qreal x, qreal y) {
  auto rv = ((QGraphicsView*)this_)->mapFromScene(x, y);
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:215
// [8] QPolygon mapFromScene(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView12mapFromSceneEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  auto rv = ((QGraphicsView*)this_)->mapFromScene(x, y, w, h);
return new QPolygon(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:217
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QGraphicsView*)this_)->inputMethodQuery(query);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:219
// [8] QBrush backgroundBrush()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView15backgroundBrushEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->backgroundBrush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:220
// [-2] void setBackgroundBrush(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView18setBackgroundBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QGraphicsView*)this_)->setBackgroundBrush(*brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:222
// [8] QBrush foregroundBrush()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGraphicsView15foregroundBrushEv(void *this_) {
  auto rv = ((QGraphicsView*)this_)->foregroundBrush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:223
// [-2] void setForegroundBrush(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView18setForegroundBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QGraphicsView*)this_)->setForegroundBrush(*brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:226
// [-2] void updateScene(const QList<QRectF> &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView11updateSceneERK5QListI6QRectFE(void *this_, QList<QRectF>* rects) {
  ((QGraphicsView*)this_)->updateScene(*rects);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:227
// [-2] void invalidateScene(const QRectF &, QGraphicsScene::SceneLayers)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView15invalidateSceneERK6QRectF6QFlagsIN14QGraphicsScene10SceneLayerEE(void *this_, QRectF* rect, QFlags<QGraphicsScene::SceneLayer> layers) {
  ((QGraphicsView*)this_)->invalidateScene(*rect, layers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:228
// [-2] void updateSceneRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView15updateSceneRectERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsView*)this_)->updateSceneRect(*rect);
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtWidgets/qgraphicsview.h:232
// [-2] void rubberBandChanged(QRect, QPointF, QPointF)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(void *this_, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint) {
  ((QGraphicsView*)this_)->rubberBandChanged(*viewportRect, *fromScenePoint, *toScenePoint);
}
#endif // QT_VERSION >= 0x050100

//  main block end
