//  header block begin

// /usr/include/qt/QtWidgets/qwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidget is pure virtual: false false
// QWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWidget_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWidget_t qt_meta_stringdata_MyQWidget = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQWidget"
  },
  "MyQWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWidget[] = {
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
class Q_DECL_EXPORT MyQWidget : public QWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWidget::staticMetaObject,
  qt_meta_stringdata_MyQWidget.data,
  qt_meta_data_MyQWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWidget.stringdata0))
      return static_cast<void*>(this);
  return QWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWidget() {}
// void QWidget(QWidget *, Qt::WindowFlags)
MyQWidget(QWidget * parent, QFlags<Qt::WindowType> f) : QWidget(parent, f) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWidget::event(event);
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
    QWidget::mousePressEvent(event);
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
    QWidget::mouseReleaseEvent(event);
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
    QWidget::mouseDoubleClickEvent(event);
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
    QWidget::mouseMoveEvent(event);
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
    QWidget::wheelEvent(event);
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
    QWidget::keyPressEvent(event);
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
    QWidget::keyReleaseEvent(event);
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
    QWidget::focusInEvent(event);
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
    QWidget::focusOutEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void enterEvent(QEvent *)
  virtual void enterEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"enterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::enterEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void leaveEvent(QEvent *)
  virtual void leaveEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::leaveEvent(event);
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
    QStyleOption opt; opt.init(this); QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void moveEvent(QMoveEvent *)
  virtual void moveEvent(QMoveEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::moveEvent(event);
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
    QWidget::resizeEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::closeEvent(event);
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
    QWidget::contextMenuEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void tabletEvent(QTabletEvent *)
  virtual void tabletEvent(QTabletEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"tabletEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::tabletEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void actionEvent(QActionEvent *)
  virtual void actionEvent(QActionEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actionEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::actionEvent(event);
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
    QWidget::dragEnterEvent(event);
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
    QWidget::dragMoveEvent(event);
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
    QWidget::dragLeaveEvent(event);
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
    QWidget::dropEvent(event);
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
    QWidget::showEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::hideEvent(event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool nativeEvent(const QByteArray &, void *, long *)
  virtual bool nativeEvent(const QByteArray & eventType, void * message, long * result)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nativeEvent", &handled, 3, (uint64_t)&eventType, (uint64_t)message, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWidget::nativeEvent(eventType, message, result);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::changeEvent(arg0);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QWidget::metric(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void initPainter(QPainter *)
  virtual void initPainter(QPainter * painter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initPainter", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::initPainter(painter);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] QPaintDevice * redirected(QPoint *)
  virtual QPaintDevice * redirected(QPoint * offset) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"redirected", &handled, 1, (uint64_t)offset, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintDevice *)(irv);
      // Pointer Pointer QPaintDevice *
    } else {
    return QWidget::redirected(offset);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] QPainter * sharedPainter()
  virtual QPainter * sharedPainter() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sharedPainter", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPainter *)(irv);
      // Pointer Pointer QPainter *
    } else {
    return QWidget::sharedPainter();
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidget::inputMethodEvent(arg0);
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
    return QWidget::focusNextPrevChild(next);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWidget* qo = (MyQWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:131
// [8] QString tr(const char *, const char *, int) 
// (12)qm2278075477 (22)_ZN7QWidget2trEPKcS1_i
//static
/*void qm2278075477(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWidget::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWidget::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:215
// [-2] void QWidget(QWidget *, Qt::WindowFlags) 
// (11)qm606334740 (43)_ZN7QWidgetC2EPS_6QFlagsIN2Qt10WindowTypeEE
/*void* qm606334740(QWidget * parent, QFlags<Qt::WindowType> f)*/{
  auto _nilp = (MyQWidget*)(0);
  QWidget * parent = *(QWidget **)this_; QFlags<Qt::WindowType> f = *(QFlags<Qt::WindowType>*)this_;
  this_ =  new QWidget(parent, f);
  this_ =  new MyQWidget(parent, f);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:222
// [8] WId internalWinId() const
// (11)qm546760316 (29)_ZNK7QWidget13internalWinIdEv
//static
/*void qm546760316()*/ {
  ;
  (void) ((QWidget*)this_)->internalWinId();
   auto xptr = (unsigned long long (QWidget::*)() const ) &QWidget::internalWinId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:230
// [1] bool isTopLevel() const
// (11)qm434601045 (26)_ZNK7QWidget10isTopLevelEv
//static
/*void qm434601045()*/ {
  ;
  (void) ((QWidget*)this_)->isTopLevel();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::isTopLevel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:231
// [1] bool isWindow() const
// (11)qm612947221 (23)_ZNK7QWidget8isWindowEv
//static
/*void qm612947221()*/ {
  ;
  (void) ((QWidget*)this_)->isWindow();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::isWindow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:233
// [1] bool isModal() const
// (12)qm4201175838 (22)_ZNK7QWidget7isModalEv
//static
/*void qm4201175838()*/ {
  ;
  (void) ((QWidget*)this_)->isModal();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::isModal;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:237
// [1] bool isEnabled() const
// (12)qm1166952428 (24)_ZNK7QWidget9isEnabledEv
//static
/*void qm1166952428()*/ {
  ;
  (void) ((QWidget*)this_)->isEnabled();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::isEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:253
// [16] const QRect & geometry() const
// (12)qm3845552015 (23)_ZNK7QWidget8geometryEv
//static
/*void qm3845552015()*/ {
  ;
  (void) ((QWidget*)this_)->geometry();
   auto xptr = (const QRect & (QWidget::*)() const ) &QWidget::geometry;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:260
// [8] QSize size() const
// (12)qm3548884635 (19)_ZNK7QWidget4sizeEv
//static
/*void qm3548884635()*/ {
  ;
  (void) ((QWidget*)this_)->size();
   auto xptr = (QSize (QWidget::*)() const ) &QWidget::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:261
// [4] int width() const
// (12)qm3338959857 (20)_ZNK7QWidget5widthEv
//static
/*void qm3338959857()*/ {
  ;
  (void) ((QWidget*)this_)->width();
   auto xptr = (int (QWidget::*)() const ) &QWidget::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:262
// [4] int height() const
// (12)qm2964560984 (21)_ZNK7QWidget6heightEv
//static
/*void qm2964560984()*/ {
  ;
  (void) ((QWidget*)this_)->height();
   auto xptr = (int (QWidget::*)() const ) &QWidget::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:263
// [16] QRect rect() const
// (12)qm3990765933 (19)_ZNK7QWidget4rectEv
//static
/*void qm3990765933()*/ {
  ;
  (void) ((QWidget*)this_)->rect();
   auto xptr = (QRect (QWidget::*)() const ) &QWidget::rect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:269
// [4] int minimumWidth() const
// (11)qm828888399 (28)_ZNK7QWidget12minimumWidthEv
//static
/*void qm828888399()*/ {
  ;
  (void) ((QWidget*)this_)->minimumWidth();
   auto xptr = (int (QWidget::*)() const ) &QWidget::minimumWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:270
// [4] int minimumHeight() const
// (11)qm192531497 (29)_ZNK7QWidget13minimumHeightEv
//static
/*void qm192531497()*/ {
  ;
  (void) ((QWidget*)this_)->minimumHeight();
   auto xptr = (int (QWidget::*)() const ) &QWidget::minimumHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:271
// [4] int maximumWidth() const
// (12)qm2285981246 (28)_ZNK7QWidget12maximumWidthEv
//static
/*void qm2285981246()*/ {
  ;
  (void) ((QWidget*)this_)->maximumWidth();
   auto xptr = (int (QWidget::*)() const ) &QWidget::maximumWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:272
// [4] int maximumHeight() const
// (11)qm750955288 (29)_ZNK7QWidget13maximumHeightEv
//static
/*void qm750955288()*/ {
  ;
  (void) ((QWidget*)this_)->maximumHeight();
   auto xptr = (int (QWidget::*)() const ) &QWidget::maximumHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:273
// [-2] void setMinimumSize(const QSize &) 
// (11)qm668227674 (36)_ZN7QWidget14setMinimumSizeERK5QSize
//static
/*void qm668227674(const QSize & arg0)*/ {
  const QSize & arg0 = *(const QSize *)this_;
  (void) ((QWidget*)this_)->setMinimumSize(arg0);
   auto xptr = (void (QWidget::*)(QSize const&) ) &QWidget::setMinimumSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:275
// [-2] void setMaximumSize(const QSize &) 
// (11)qm246064450 (36)_ZN7QWidget14setMaximumSizeERK5QSize
//static
/*void qm246064450(const QSize & arg0)*/ {
  const QSize & arg0 = *(const QSize *)this_;
  (void) ((QWidget*)this_)->setMaximumSize(arg0);
   auto xptr = (void (QWidget::*)(QSize const&) ) &QWidget::setMaximumSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:287
// [-2] void setSizeIncrement(const QSize &) 
// (11)qm514882666 (38)_ZN7QWidget16setSizeIncrementERK5QSize
//static
/*void qm514882666(const QSize & arg0)*/ {
  const QSize & arg0 = *(const QSize *)this_;
  (void) ((QWidget*)this_)->setSizeIncrement(arg0);
   auto xptr = (void (QWidget::*)(QSize const&) ) &QWidget::setSizeIncrement;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:290
// [-2] void setBaseSize(const QSize &) 
// (12)qm3718861557 (33)_ZN7QWidget11setBaseSizeERK5QSize
//static
/*void qm3718861557(const QSize & arg0)*/ {
  const QSize & arg0 = *(const QSize *)this_;
  (void) ((QWidget*)this_)->setBaseSize(arg0);
   auto xptr = (void (QWidget::*)(QSize const&) ) &QWidget::setBaseSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:309
// [8] QWidget * topLevelWidget() const
// (12)qm3137223521 (30)_ZNK7QWidget14topLevelWidgetEv
//static
/*void qm3137223521()*/ {
  ;
  (void) ((QWidget*)this_)->topLevelWidget();
   auto xptr = (QWidget * (QWidget::*)() const ) &QWidget::topLevelWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:321
// [16] const QFont & font() const
// (12)qm3443769756 (19)_ZNK7QWidget4fontEv
//static
/*void qm3443769756()*/ {
  ;
  (void) ((QWidget*)this_)->font();
   auto xptr = (const QFont & (QWidget::*)() const ) &QWidget::font;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:323
// [8] QFontMetrics fontMetrics() const
// (12)qm4244311787 (27)_ZNK7QWidget11fontMetricsEv
//static
/*void qm4244311787()*/ {
  ;
  (void) ((QWidget*)this_)->fontMetrics();
   auto xptr = (QFontMetrics (QWidget::*)() const ) &QWidget::fontMetrics;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:324
// [8] QFontInfo fontInfo() const
// (12)qm1020795592 (23)_ZNK7QWidget8fontInfoEv
//static
/*void qm1020795592()*/ {
  ;
  (void) ((QWidget*)this_)->fontInfo();
   auto xptr = (QFontInfo (QWidget::*)() const ) &QWidget::fontInfo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:332
// [-2] void setMouseTracking(bool) 
// (12)qm3977244840 (31)_ZN7QWidget16setMouseTrackingEb
//static
/*void qm3977244840(bool enable)*/ {
  bool enable = *(bool*)this_;
  (void) ((QWidget*)this_)->setMouseTracking(enable);
   auto xptr = (void (QWidget::*)(bool) ) &QWidget::setMouseTracking;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:333
// [1] bool hasMouseTracking() const
// (12)qm1771085514 (32)_ZNK7QWidget16hasMouseTrackingEv
//static
/*void qm1771085514()*/ {
  ;
  (void) ((QWidget*)this_)->hasMouseTracking();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::hasMouseTracking;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:334
// [1] bool underMouse() const
// (12)qm4034935793 (26)_ZNK7QWidget10underMouseEv
//static
/*void qm4034935793()*/ {
  ;
  (void) ((QWidget*)this_)->underMouse();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::underMouse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:336
// [-2] void setTabletTracking(bool) 
// (12)qm3383420023 (32)_ZN7QWidget17setTabletTrackingEb
//static
/*void qm3383420023(bool enable)*/ {
  bool enable = *(bool*)this_;
  (void) ((QWidget*)this_)->setTabletTracking(enable);
   auto xptr = (void (QWidget::*)(bool) ) &QWidget::setTabletTracking;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:337
// [1] bool hasTabletTracking() const
// (12)qm1592162373 (33)_ZNK7QWidget17hasTabletTrackingEv
//static
/*void qm1592162373()*/ {
  ;
  (void) ((QWidget*)this_)->hasTabletTracking();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::hasTabletTracking;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:416
// [1] bool isRightToLeft() const
// (12)qm3670373987 (29)_ZNK7QWidget13isRightToLeftEv
//static
/*void qm3670373987()*/ {
  ;
  (void) ((QWidget*)this_)->isRightToLeft();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::isRightToLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:417
// [1] bool isLeftToRight() const
// (11)qm867079906 (29)_ZNK7QWidget13isLeftToRightEv
//static
/*void qm867079906()*/ {
  ;
  (void) ((QWidget*)this_)->isLeftToRight();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::isLeftToRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:420
// [-2] void setFocus() 
// (12)qm1428955973 (22)_ZN7QWidget8setFocusEv
//static
/*void qm1428955973()*/ {
  ;
  (void) ((QWidget*)this_)->setFocus();
   auto xptr = (void (QWidget::*)() ) &QWidget::setFocus;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:455
// [1] bool updatesEnabled() const
// (12)qm1069146013 (30)_ZNK7QWidget14updatesEnabledEv
//static
/*void qm1069146013()*/ {
  ;
  (void) ((QWidget*)this_)->updatesEnabled();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::updatesEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:467
// [-2] void update(int, int, int, int) 
// (12)qm2935439564 (23)_ZN7QWidget6updateEiiii
//static
/*void qm2935439564(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QWidget*)this_)->update(x, y, w, h);
   auto xptr = (void (QWidget::*)(int, int, int, int) ) &QWidget::update;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:494
// [-2] void move(int, int) 
// (12)qm4213432282 (19)_ZN7QWidget4moveEii
//static
/*void qm4213432282(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QWidget*)this_)->move(x, y);
   auto xptr = (void (QWidget::*)(int, int) ) &QWidget::move;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:496
// [-2] void resize(int, int) 
// (11)qm930448380 (21)_ZN7QWidget6resizeEii
//static
/*void qm930448380(int w, int h)*/ {
  int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QWidget*)this_)->resize(w, h);
   auto xptr = (void (QWidget::*)(int, int) ) &QWidget::resize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:498
// [-2] void setGeometry(int, int, int, int) 
// (12)qm1953574659 (29)_ZN7QWidget11setGeometryEiiii
//static
/*void qm1953574659(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QWidget*)this_)->setGeometry(x, y, w, h);
   auto xptr = (void (QWidget::*)(int, int, int, int) ) &QWidget::setGeometry;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:503
// [1] bool isVisible() const
// (12)qm2205865657 (24)_ZNK7QWidget9isVisibleEv
//static
/*void qm2205865657()*/ {
  ;
  (void) ((QWidget*)this_)->isVisible();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::isVisible;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:505
// [1] bool isHidden() const
// (12)qm1556262255 (23)_ZNK7QWidget8isHiddenEv
//static
/*void qm1556262255()*/ {
  ;
  (void) ((QWidget*)this_)->isHidden();
   auto xptr = (bool (QWidget::*)() const ) &QWidget::isHidden;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:520
// [-2] void setSizePolicy(QSizePolicy::Policy, QSizePolicy::Policy) 
// (12)qm1224033387 (52)_ZN7QWidget13setSizePolicyEN11QSizePolicy6PolicyES1_
//static
/*void qm1224033387(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)*/ {
  QSizePolicy::Policy horizontal = *(QSizePolicy::Policy*)this_; QSizePolicy::Policy vertical = *(QSizePolicy::Policy*)this_;
  (void) ((QWidget*)this_)->setSizePolicy(horizontal, vertical);
   auto xptr = (void (QWidget::*)(QSizePolicy::Policy, QSizePolicy::Policy) ) &QWidget::setSizePolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:572
// [8] QWidget * parentWidget() const
// (12)qm2946385333 (28)_ZNK7QWidget12parentWidgetEv
//static
/*void qm2946385333()*/ {
  ;
  (void) ((QWidget*)this_)->parentWidget();
   auto xptr = (QWidget * (QWidget::*)() const ) &QWidget::parentWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:575
// [4] Qt::WindowFlags windowFlags() const
// (12)qm1985135305 (27)_ZNK7QWidget11windowFlagsEv
//static
/*void qm1985135305()*/ {
  ;
  (void) ((QWidget*)this_)->windowFlags();
   auto xptr = (QFlags<Qt::WindowType> (QWidget::*)() const ) &QWidget::windowFlags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:579
// [4] Qt::WindowType windowType() const
// (12)qm1737252608 (26)_ZNK7QWidget10windowTypeEv
//static
/*void qm1737252608()*/ {
  ;
  (void) ((QWidget*)this_)->windowType();
   auto xptr = (Qt::WindowType (QWidget::*)() const ) &QWidget::windowType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:582
// [8] QWidget * childAt(int, int) const
// (12)qm4039903095 (23)_ZNK7QWidget7childAtEii
//static
/*void qm4039903095(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QWidget*)this_)->childAt(x, y);
   auto xptr = (QWidget * (QWidget::*)(int, int) const ) &QWidget::childAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:586
// [1] bool testAttribute(Qt::WidgetAttribute) const
// (11)qm232936776 (50)_ZNK7QWidget13testAttributeEN2Qt15WidgetAttributeE
//static
/*void qm232936776(Qt::WidgetAttribute arg0)*/ {
  Qt::WidgetAttribute arg0 = *(Qt::WidgetAttribute*)this_;
  (void) ((QWidget*)this_)->testAttribute(arg0);
   auto xptr = (bool (QWidget::*)(Qt::WidgetAttribute) const ) &QWidget::testAttribute;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QWidgetD2Ev(void *this_)*/ {
  delete (QWidget*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwidget
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
