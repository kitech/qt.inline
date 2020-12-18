//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsscene.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsscene.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsScene is pure virtual: false false
// QGraphicsScene has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsScene_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsScene_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsScene_t qt_meta_stringdata_MyQGraphicsScene = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQGraphicsScene"
  },
  "MyQGraphicsScene"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsScene[] = {
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
class Q_DECL_EXPORT MyQGraphicsScene : public QGraphicsScene {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsScene::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsScene.data,
  qt_meta_data_MyQGraphicsScene,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsScene.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsScene::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsScene() {}
// void QGraphicsScene(QObject *)
MyQGraphicsScene(QObject * parent) : QGraphicsScene(parent) {}
// void QGraphicsScene(const QRectF &, QObject *)
MyQGraphicsScene(const QRectF & sceneRect, QObject * parent) : QGraphicsScene(sceneRect, parent) {}
// void QGraphicsScene(qreal, qreal, qreal, qreal, QObject *)
MyQGraphicsScene(qreal x, qreal y, qreal width, qreal height, QObject * parent) : QGraphicsScene(x, y, width, height, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsScene::event(event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * watched, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsScene::eventFilter(watched, event);
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
    QGraphicsScene::contextMenuEvent(event);
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
    QGraphicsScene::dragEnterEvent(event);
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
    QGraphicsScene::dragMoveEvent(event);
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
    QGraphicsScene::dragLeaveEvent(event);
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
    QGraphicsScene::dropEvent(event);
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
    QGraphicsScene::focusInEvent(event);
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
    QGraphicsScene::focusOutEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void helpEvent(QGraphicsSceneHelpEvent *)
  virtual void helpEvent(QGraphicsSceneHelpEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"helpEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::helpEvent(event);
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
    QGraphicsScene::keyPressEvent(event);
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
    QGraphicsScene::keyReleaseEvent(event);
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
    QGraphicsScene::mousePressEvent(event);
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
    QGraphicsScene::mouseMoveEvent(event);
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
    QGraphicsScene::mouseReleaseEvent(event);
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
    QGraphicsScene::mouseDoubleClickEvent(event);
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
    QGraphicsScene::wheelEvent(event);
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
    QGraphicsScene::inputMethodEvent(event);
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
    QGraphicsScene::drawBackground(painter, rect);
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
    QGraphicsScene::drawForeground(painter, rect);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void drawItems(QPainter *, int, QGraphicsItem **, const QStyleOptionGraphicsItem *, QWidget *)
  virtual void drawItems(QPainter * painter, int numItems, QGraphicsItem * items[], const QStyleOptionGraphicsItem options[], QWidget * widget)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawItems", &handled, 5, (uint64_t)painter, (uint64_t)numItems, (uint64_t)items, (uint64_t)options, (uint64_t)widget, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsScene::drawItems(painter, numItems, items, options, widget);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsScene_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsScene* qo = (MyQGraphicsScene*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscene(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:97
// [8] QString tr(const char *, const char *, int) 
// (12)qm3254793278 (30)_ZN14QGraphicsScene2trEPKcS1_i
//static
/*void qm3254793278(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsScene::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsScene::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:132
// [8] qreal width() const
// (11)qm480144008 (28)_ZNK14QGraphicsScene5widthEv
//static
/*void qm480144008()*/ {
  ;
  (void) ((QGraphicsScene*)this_)->width();
   auto xptr = (double (QGraphicsScene::*)() const ) &QGraphicsScene::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:133
// [8] qreal height() const
// (12)qm2578567121 (29)_ZNK14QGraphicsScene6heightEv
//static
/*void qm2578567121()*/ {
  ;
  (void) ((QGraphicsScene*)this_)->height();
   auto xptr = (double (QGraphicsScene::*)() const ) &QGraphicsScene::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:135
// [-2] void setSceneRect(qreal, qreal, qreal, qreal) 
// (12)qm3140925938 (38)_ZN14QGraphicsScene12setSceneRectEdddd
//static
/*void qm3140925938(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsScene*)this_)->setSceneRect(x, y, w, h);
   auto xptr = (void (QGraphicsScene::*)(double, double, double, double) ) &QGraphicsScene::setSceneRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:174
// [8] QList<QGraphicsItem *> items(qreal, qreal, qreal, qreal, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &) const
// (12)qm2388330129 (84)_ZNK14QGraphicsScene5itemsEddddN2Qt17ItemSelectionModeENS0_9SortOrderERK10QTransform
//static
/*void qm2388330129(double x, double y, double w, double h, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; Qt::ItemSelectionMode mode = *(Qt::ItemSelectionMode*)this_; Qt::SortOrder order = *(Qt::SortOrder*)this_; const QTransform & deviceTransform = *(const QTransform *)this_;
  (void) ((QGraphicsScene*)this_)->items(x, y, w, h, mode, order, deviceTransform);
   auto xptr = (QList<QGraphicsItem *> (QGraphicsScene::*)(double, double, double, double, Qt::ItemSelectionMode, Qt::SortOrder, QTransform const&) const ) &QGraphicsScene::items;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:183
// [8] QGraphicsItem * itemAt(qreal, qreal, const QTransform &) const
// (12)qm3681589976 (44)_ZNK14QGraphicsScene6itemAtEddRK10QTransform
//static
/*void qm3681589976(double x, double y, const QTransform & deviceTransform)*/ {
  double x = *(double*)this_; double y = *(double*)this_; const QTransform & deviceTransform = *(const QTransform *)this_;
  (void) ((QGraphicsScene*)this_)->itemAt(x, y, deviceTransform);
   auto xptr = (QGraphicsItem * (QGraphicsScene::*)(double, double, QTransform const&) const ) &QGraphicsScene::itemAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:206
// [8] QGraphicsEllipseItem * addEllipse(qreal, qreal, qreal, qreal, const QPen &, const QBrush &) 
// (12)qm2608072634 (52)_ZN14QGraphicsScene10addEllipseEddddRK4QPenRK6QBrush
//static
/*void qm2608072634(double x, double y, double w, double h, const QPen & pen, const QBrush & brush)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; const QPen & pen = *(const QPen *)this_; const QBrush & brush = *(const QBrush *)this_;
  (void) ((QGraphicsScene*)this_)->addEllipse(x, y, w, h, pen, brush);
   auto xptr = (QGraphicsEllipseItem * (QGraphicsScene::*)(double, double, double, double, QPen const&, QBrush const&) ) &QGraphicsScene::addEllipse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:208
// [8] QGraphicsLineItem * addLine(qreal, qreal, qreal, qreal, const QPen &) 
// (11)qm130791578 (39)_ZN14QGraphicsScene7addLineEddddRK4QPen
//static
/*void qm130791578(double x1, double y1, double x2, double y2, const QPen & pen)*/ {
  double x1 = *(double*)this_; double y1 = *(double*)this_; double x2 = *(double*)this_; double y2 = *(double*)this_; const QPen & pen = *(const QPen *)this_;
  (void) ((QGraphicsScene*)this_)->addLine(x1, y1, x2, y2, pen);
   auto xptr = (QGraphicsLineItem * (QGraphicsScene::*)(double, double, double, double, QPen const&) ) &QGraphicsScene::addLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:210
// [8] QGraphicsRectItem * addRect(qreal, qreal, qreal, qreal, const QPen &, const QBrush &) 
// (12)qm1011695616 (48)_ZN14QGraphicsScene7addRectEddddRK4QPenRK6QBrush
//static
/*void qm1011695616(double x, double y, double w, double h, const QPen & pen, const QBrush & brush)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; const QPen & pen = *(const QPen *)this_; const QBrush & brush = *(const QBrush *)this_;
  (void) ((QGraphicsScene*)this_)->addRect(x, y, w, h, pen, brush);
   auto xptr = (QGraphicsRectItem * (QGraphicsScene::*)(double, double, double, double, QPen const&, QBrush const&) ) &QGraphicsScene::addRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:235
// [-2] void update(qreal, qreal, qreal, qreal) 
// (12)qm1165982202 (31)_ZN14QGraphicsScene6updateEdddd
//static
/*void qm1165982202(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsScene*)this_)->update(x, y, w, h);
   auto xptr = (void (QGraphicsScene::*)(double, double, double, double) ) &QGraphicsScene::update;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:237
// [-2] void invalidate(qreal, qreal, qreal, qreal, QGraphicsScene::SceneLayers) 
// (11)qm837550686 (61)_ZN14QGraphicsScene10invalidateEdddd6QFlagsINS_10SceneLayerEE
//static
/*void qm837550686(double x, double y, double w, double h, QFlags<QGraphicsScene::SceneLayer> layers)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; QFlags<QGraphicsScene::SceneLayer> layers = *(QFlags<QGraphicsScene::SceneLayer>*)this_;
  (void) ((QGraphicsScene*)this_)->invalidate(x, y, w, h, layers);
   auto xptr = (void (QGraphicsScene::*)(double, double, double, double, QFlags<QGraphicsScene::SceneLayer>) ) &QGraphicsScene::invalidate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QGraphicsSceneD2Ev(void *this_)*/ {
  delete (QGraphicsScene*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscene
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
