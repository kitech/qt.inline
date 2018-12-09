//  header block begin

#ifndef QT_MINIMAL
// since 0x040300
// /usr/include/qt/QtWidgets/qmdisubwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmdisubwindow.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMdiSubWindow is pure virtual: false
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:110
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QMdiSubWindow11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QMdiSubWindow*)this_)->QMdiSubWindow::eventFilter(object, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:111
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QMdiSubWindow5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QMdiSubWindow*)this_)->QMdiSubWindow::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:112
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow9showEventEP10QShowEvent(void *this_, QShowEvent * showEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::showEvent(showEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:113
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow9hideEventEP10QHideEvent(void *this_, QHideEvent * hideEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::hideEvent(hideEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:114
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow11changeEventEP6QEvent(void *this_, QEvent * changeEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::changeEvent(changeEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:115
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow10closeEventEP11QCloseEvent(void *this_, QCloseEvent * closeEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::closeEvent(closeEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:116
// [-2] void leaveEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow10leaveEventEP6QEvent(void *this_, QEvent * leaveEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::leaveEvent(leaveEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:117
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * resizeEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::resizeEvent(resizeEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:118
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow10timerEventEP11QTimerEvent(void *this_, QTimerEvent * timerEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::timerEvent(timerEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:119
// [-2] void moveEvent(QMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow9moveEventEP10QMoveEvent(void *this_, QMoveEvent * moveEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::moveEvent(moveEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:120
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow10paintEventEP11QPaintEvent(void *this_, QPaintEvent * paintEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::paintEvent(paintEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:121
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * mouseEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::mousePressEvent(mouseEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:122
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * mouseEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:123
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * mouseEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::mouseReleaseEvent(mouseEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:124
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * mouseEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::mouseMoveEvent(mouseEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:125
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * keyEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::keyPressEvent(keyEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:127
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * contextMenuEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::contextMenuEvent(contextMenuEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:129
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * focusInEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::focusInEvent(focusInEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:130
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * focusOutEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::focusOutEvent(focusOutEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:131
// [-2] void childEvent(QChildEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow10childEventEP11QChildEvent(void *this_, QChildEvent * childEvent) {
  ((QMdiSubWindow*)this_)->QMdiSubWindow::childEvent(childEvent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMdiSubWindow10metaObjectEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMdiSubWindow11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMdiSubWindow*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QMdiSubWindow11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMdiSubWindow*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMdiSubWindow2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMdiSubWindow::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMdiSubWindow6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMdiSubWindow::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:69
// [-2] void QMdiSubWindow(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMdiSubWindowC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQMdiSubWindow*)(0);
  return  new MyQMdiSubWindow(parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:70
// [-2] void ~QMdiSubWindow()
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindowD2Ev(void *this_) {
  delete (QMdiSubWindow*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:72
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMdiSubWindow8sizeHintEv(void *this_) {
  auto rv = ((QMdiSubWindow*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:73
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMdiSubWindow15minimumSizeHintEv(void *this_) {
  auto rv = ((QMdiSubWindow*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:75
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QMdiSubWindow*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:76
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMdiSubWindow6widgetEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:78
// [8] QWidget * maximizedButtonsWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMdiSubWindow22maximizedButtonsWidgetEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->maximizedButtonsWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:79
// [8] QWidget * maximizedSystemMenuIconWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMdiSubWindow29maximizedSystemMenuIconWidgetEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->maximizedSystemMenuIconWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:81
// [1] bool isShaded()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMdiSubWindow8isShadedEv(void *this_) {
  return (bool)((QMdiSubWindow*)this_)->isShaded();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:83
// [-2] void setOption(QMdiSubWindow::SubWindowOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow9setOptionENS_15SubWindowOptionEb(void *this_, QMdiSubWindow::SubWindowOption option, bool on) {
  ((QMdiSubWindow*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:84
// [1] bool testOption(QMdiSubWindow::SubWindowOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMdiSubWindow10testOptionENS_15SubWindowOptionE(void *this_, QMdiSubWindow::SubWindowOption arg0) {
  return (bool)((QMdiSubWindow*)this_)->testOption(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:86
// [-2] void setKeyboardSingleStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow21setKeyboardSingleStepEi(void *this_, int step) {
  ((QMdiSubWindow*)this_)->setKeyboardSingleStep(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:87
// [4] int keyboardSingleStep()
extern "C" Q_DECL_EXPORT
int C_ZNK13QMdiSubWindow18keyboardSingleStepEv(void *this_) {
  return (int)((QMdiSubWindow*)this_)->keyboardSingleStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:89
// [-2] void setKeyboardPageStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow19setKeyboardPageStepEi(void *this_, int step) {
  ((QMdiSubWindow*)this_)->setKeyboardPageStep(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:90
// [4] int keyboardPageStep()
extern "C" Q_DECL_EXPORT
int C_ZNK13QMdiSubWindow16keyboardPageStepEv(void *this_) {
  return (int)((QMdiSubWindow*)this_)->keyboardPageStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:93
// [-2] void setSystemMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow13setSystemMenuEP5QMenu(void *this_, QMenu * systemMenu) {
  ((QMdiSubWindow*)this_)->setSystemMenu(systemMenu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:94
// [8] QMenu * systemMenu()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMdiSubWindow10systemMenuEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->systemMenu();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qmdisubwindow.h:97
// [8] QMdiArea * mdiArea()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMdiSubWindow7mdiAreaEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->mdiArea();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:100
// [-2] void windowStateChanged(Qt::WindowStates, Qt::WindowStates)
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(void *this_, QFlags<Qt::WindowState> oldState, QFlags<Qt::WindowState> newState) {
  ((QMdiSubWindow*)this_)->windowStateChanged(oldState, newState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:101
// [-2] void aboutToActivate()
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow15aboutToActivateEv(void *this_) {
  ((QMdiSubWindow*)this_)->aboutToActivate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:105
// [-2] void showSystemMenu()
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow14showSystemMenuEv(void *this_) {
  ((QMdiSubWindow*)this_)->showSystemMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:107
// [-2] void showShaded()
extern "C" Q_DECL_EXPORT
void C_ZN13QMdiSubWindow10showShadedEv(void *this_) {
  ((QMdiSubWindow*)this_)->showShaded();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
