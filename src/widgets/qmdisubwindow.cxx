//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(mdiarea)
// /usr/include/qt/QtWidgets/qmdisubwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmdisubwindow.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMdiSubWindow is pure virtual: false false
// QMdiSubWindow has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMdiSubWindow_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMdiSubWindow_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMdiSubWindow_t qt_meta_stringdata_MyQMdiSubWindow = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQMdiSubWindow"
  },
  "MyQMdiSubWindow"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMdiSubWindow[] = {
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
class Q_DECL_EXPORT MyQMdiSubWindow : public QMdiSubWindow {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMdiSubWindow::staticMetaObject,
  qt_meta_stringdata_MyQMdiSubWindow.data,
  qt_meta_data_MyQMdiSubWindow,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMdiSubWindow.stringdata0))
      return static_cast<void*>(this);
  return QMdiSubWindow::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMdiSubWindow::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMdiSubWindow() {}
// void QMdiSubWindow(QWidget *, Qt::WindowFlags)
MyQMdiSubWindow(QWidget * parent, QFlags<Qt::WindowType> flags) : QMdiSubWindow(parent, flags) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMdiSubWindow::eventFilter(object, event);
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
    return QMdiSubWindow::event(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)showEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::showEvent(showEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * hideEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)hideEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::hideEvent(hideEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * changeEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)changeEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::changeEvent(changeEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * closeEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)closeEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::closeEvent(closeEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void leaveEvent(QEvent *)
  virtual void leaveEvent(QEvent * leaveEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveEvent", &handled, 1, (uint64_t)leaveEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::leaveEvent(leaveEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * resizeEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)resizeEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::resizeEvent(resizeEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * timerEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)timerEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::timerEvent(timerEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void moveEvent(QMoveEvent *)
  virtual void moveEvent(QMoveEvent * moveEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveEvent", &handled, 1, (uint64_t)moveEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::moveEvent(moveEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * paintEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)paintEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::paintEvent(paintEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * mouseEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::mousePressEvent(mouseEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * mouseEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * mouseEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::mouseReleaseEvent(mouseEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * mouseEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::mouseMoveEvent(mouseEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * keyEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)keyEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::keyPressEvent(keyEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * contextMenuEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)contextMenuEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::contextMenuEvent(contextMenuEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * focusInEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)focusInEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::focusInEvent(focusInEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * focusOutEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)focusOutEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::focusOutEvent(focusOutEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * childEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)childEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiSubWindow::childEvent(childEvent);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMdiSubWindow_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMdiSubWindow* qo = (MyQMdiSubWindow*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmdisubwindow(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm3555464208 (29)_ZN13QMdiSubWindow2trEPKcS1_i
//static
/*void qm3555464208(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMdiSubWindow::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMdiSubWindow::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:69
// [-2] void QMdiSubWindow(QWidget *, Qt::WindowFlags) 
// (12)qm1806920957 (56)_ZN13QMdiSubWindowC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE
/*void* qm1806920957(QWidget * parent, QFlags<Qt::WindowType> flags)*/{
  auto _nilp = (MyQMdiSubWindow*)(0);
  QWidget * parent = *(QWidget **)this_; QFlags<Qt::WindowType> flags = *(QFlags<Qt::WindowType>*)this_;
  this_ =  new QMdiSubWindow(parent, flags);
  this_ =  new MyQMdiSubWindow(parent, flags);
}


/*void C_ZN13QMdiSubWindowD2Ev(void *this_)*/ {
  delete (QMdiSubWindow*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmdisubwindow
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(mdiarea)
#endif // #ifndef QT_MINIMAL
//  footer block end
