//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsView is pure virtual: false false
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
// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Extend Visibility=Default Availability=Available
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

// Protected virtual Extend Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Extend Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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
void* C_QGraphicsView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsView* qo = (MyQGraphicsView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsview(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm2050566947 (29)_ZN13QGraphicsView2trEPKcS1_i
//static
/*void qm2050566947(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsView::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsView::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:166
// [-2] void setSceneRect(qreal, qreal, qreal, qreal) 
// (12)qm3470550175 (37)_ZN13QGraphicsView12setSceneRectEdddd
//static
/*void qm3470550175(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsView*)this_)->setSceneRect(x, y, w, h);
   auto xptr = (void (QGraphicsView::*)(double, double, double, double) ) &QGraphicsView::setSceneRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:184
// [-2] void centerOn(qreal, qreal) 
// (11)qm716799900 (30)_ZN13QGraphicsView8centerOnEdd
//static
/*void qm716799900(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsView*)this_)->centerOn(x, y);
   auto xptr = (void (QGraphicsView::*)(double, double) ) &QGraphicsView::centerOn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:187
// [-2] void ensureVisible(qreal, qreal, qreal, qreal, int, int) 
// (12)qm3667283832 (40)_ZN13QGraphicsView13ensureVisibleEddddii
//static
/*void qm3667283832(double x, double y, double w, double h, int xmargin, int ymargin)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; int xmargin = *(int*)this_; int ymargin = *(int*)this_;
  (void) ((QGraphicsView*)this_)->ensureVisible(x, y, w, h, xmargin, ymargin);
   auto xptr = (void (QGraphicsView::*)(double, double, double, double, int, int) ) &QGraphicsView::ensureVisible;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:190
// [-2] void fitInView(qreal, qreal, qreal, qreal, Qt::AspectRatioMode) 
// (12)qm2637894538 (55)_ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE
//static
/*void qm2637894538(double x, double y, double w, double h, Qt::AspectRatioMode aspectRadioMode)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; Qt::AspectRatioMode aspectRadioMode = *(Qt::AspectRatioMode*)this_;
  (void) ((QGraphicsView*)this_)->fitInView(x, y, w, h, aspectRadioMode);
   auto xptr = (void (QGraphicsView::*)(double, double, double, double, Qt::AspectRatioMode) ) &QGraphicsView::fitInView;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:200
// [8] QList<QGraphicsItem *> items(int, int) const
// (12)qm1679726415 (28)_ZNK13QGraphicsView5itemsEii
//static
/*void qm1679726415(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QGraphicsView*)this_)->items(x, y);
   auto xptr = (QList<QGraphicsItem *> (QGraphicsView::*)(int, int) const ) &QGraphicsView::items;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:202
// [8] QList<QGraphicsItem *> items(int, int, int, int, Qt::ItemSelectionMode) const
// (12)qm3510926935 (54)_ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE
//static
/*void qm3510926935(int x, int y, int w, int h, Qt::ItemSelectionMode mode)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; Qt::ItemSelectionMode mode = *(Qt::ItemSelectionMode*)this_;
  (void) ((QGraphicsView*)this_)->items(x, y, w, h, mode);
   auto xptr = (QList<QGraphicsItem *> (QGraphicsView::*)(int, int, int, int, Qt::ItemSelectionMode) const ) &QGraphicsView::items;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:206
// [8] QGraphicsItem * itemAt(int, int) const
// (12)qm1232929858 (29)_ZNK13QGraphicsView6itemAtEii
//static
/*void qm1232929858(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QGraphicsView*)this_)->itemAt(x, y);
   auto xptr = (QGraphicsItem * (QGraphicsView::*)(int, int) const ) &QGraphicsView::itemAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:216
// [16] QPointF mapToScene(int, int) const
// (11)qm197523671 (34)_ZNK13QGraphicsView10mapToSceneEii
//static
/*void qm197523671(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QGraphicsView*)this_)->mapToScene(x, y);
   auto xptr = (QPointF (QGraphicsView::*)(int, int) const ) &QGraphicsView::mapToScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:217
// [8] QPolygonF mapToScene(int, int, int, int) const
// (12)qm3164027358 (36)_ZNK13QGraphicsView10mapToSceneEiiii
//static
/*void qm3164027358(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QGraphicsView*)this_)->mapToScene(x, y, w, h);
   auto xptr = (QPolygonF (QGraphicsView::*)(int, int, int, int) const ) &QGraphicsView::mapToScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:218
// [8] QPoint mapFromScene(qreal, qreal) const
// (11)qm545355989 (36)_ZNK13QGraphicsView12mapFromSceneEdd
//static
/*void qm545355989(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QGraphicsView*)this_)->mapFromScene(x, y);
   auto xptr = (QPoint (QGraphicsView::*)(double, double) const ) &QGraphicsView::mapFromScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:219
// [8] QPolygon mapFromScene(qreal, qreal, qreal, qreal) const
// (12)qm2819027400 (38)_ZNK13QGraphicsView12mapFromSceneEdddd
//static
/*void qm2819027400(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsView*)this_)->mapFromScene(x, y, w, h);
   auto xptr = (QPolygon (QGraphicsView::*)(double, double, double, double) const ) &QGraphicsView::mapFromScene;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QGraphicsViewD2Ev(void *this_)*/ {
  delete (QGraphicsView*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsview
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
