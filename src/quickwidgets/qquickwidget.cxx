//  header block begin
// since 0x050300
// /usr/include/qt/QtQuickWidgets/qquickwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickwidget.h>
#include <QtQuickWidgets>
#include "callback_inherit.h"

// QQuickWidget is pure virtual: false
// QQuickWidget has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQuickWidget_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickWidget_t qt_meta_stringdata_MyQQuickWidget = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQQuickWidget"
  },
  "MyQQuickWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickWidget[] = {
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
class Q_DECL_EXPORT MyQQuickWidget : public QQuickWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickWidget::staticMetaObject,
  qt_meta_stringdata_MyQQuickWidget.data,
  qt_meta_data_MyQQuickWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickWidget.stringdata0))
      return static_cast<void*>(this);
  return QQuickWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickWidget() {}
// void QQuickWidget(QWidget *)
MyQQuickWidget(QWidget * parent) : QQuickWidget(parent) {}
// void QQuickWidget(QQmlEngine *, QWidget *)
MyQQuickWidget(QQmlEngine * engine, QWidget * parent) : QQuickWidget(engine, parent) {}
// void QQuickWidget(const QUrl &, QWidget *)
MyQQuickWidget(const QUrl & source, QWidget * parent) : QQuickWidget(source, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::timerEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::keyReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::mouseDoubleClickEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::hideEvent(arg0);
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
    QQuickWidget::focusInEvent(event);
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
    QQuickWidget::focusOutEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWidget::wheelEvent(arg0);
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
    QQuickWidget::dragEnterEvent(arg0);
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
    QQuickWidget::dragMoveEvent(arg0);
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
    QQuickWidget::dragLeaveEvent(arg0);
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
    QQuickWidget::dropEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QQuickWidget::event(arg0);
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
    QQuickWidget::paintEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QQuickWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQuickWidget* qo = (MyQQuickWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:118
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:119
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::timerEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:121
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:122
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::keyReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:123
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:124
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:125
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:126
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::mouseDoubleClickEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:128
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:129
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget9hideEventEP10QHideEvent(void *this_, QHideEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::hideEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:131
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QQuickWidget*)this_)->QQuickWidget::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:132
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QQuickWidget*)this_)->QQuickWidget::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:135
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::wheelEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:139
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::dragEnterEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:140
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::dragMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:141
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::dragLeaveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:142
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget9dropEventEP10QDropEvent(void *this_, QDropEvent * arg0) {
  ((QQuickWidget*)this_)->QQuickWidget::dropEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:145
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QQuickWidget5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QQuickWidget*)this_)->QQuickWidget::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:146
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QQuickWidget*)this_)->QQuickWidget::paintEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget10metaObjectEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QQuickWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:67
// [-2] void QQuickWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQQuickWidget*)(0);
  return  new MyQQuickWidget(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:68
// [-2] void QQuickWidget(QQmlEngine *, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWidgetC2EP10QQmlEngineP7QWidget(QQmlEngine * engine, QWidget * parent) {
  auto _nilp = (MyQQuickWidget*)(0);
  return  new MyQQuickWidget(engine, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:69
// [-2] void QQuickWidget(const QUrl &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWidgetC2ERK4QUrlP7QWidget(QUrl* source, QWidget * parent) {
  auto _nilp = (MyQQuickWidget*)(0);
  return  new MyQQuickWidget(*source, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:70
// [-2] void ~QQuickWidget()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidgetD2Ev(void *this_) {
  delete (QQuickWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:72
// [8] QUrl source()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget6sourceEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->source();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:74
// [8] QQmlEngine * engine()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget6engineEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->engine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:75
// [8] QQmlContext * rootContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget11rootContextEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->rootContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:77
// [8] QQuickItem * rootObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget10rootObjectEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->rootObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:81
// [4] QQuickWidget::ResizeMode resizeMode()
extern "C" Q_DECL_EXPORT
QQuickWidget::ResizeMode C_ZNK12QQuickWidget10resizeModeEv(void *this_) {
  return (QQuickWidget::ResizeMode)((QQuickWidget*)this_)->resizeMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:82
// [-2] void setResizeMode(QQuickWidget::ResizeMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget13setResizeModeENS_10ResizeModeE(void *this_, QQuickWidget::ResizeMode arg0) {
  ((QQuickWidget*)this_)->setResizeMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:86
// [4] QQuickWidget::Status status()
extern "C" Q_DECL_EXPORT
QQuickWidget::Status C_ZNK12QQuickWidget6statusEv(void *this_) {
  return (QQuickWidget::Status)((QQuickWidget*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:88
// [-2] QList<QQmlError> errors()
extern "C" Q_DECL_EXPORT
QList<QQmlError>* C_ZNK12QQuickWidget6errorsEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->errors();
return new QList<QQmlError>(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:90
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget8sizeHintEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:91
// [8] QSize initialSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget11initialSizeEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->initialSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:93
// [-2] void setFormat(const QSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget9setFormatERK14QSurfaceFormat(void *this_, QSurfaceFormat* format) {
  ((QQuickWidget*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:94
// [8] QSurfaceFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget6formatEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->format();
return new QSurfaceFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:96
// [32] QImage grabFramebuffer()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget15grabFramebufferEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->grabFramebuffer();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:98
// [-2] void setClearColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget13setClearColorERK6QColor(void *this_, QColor* color) {
  ((QQuickWidget*)this_)->setClearColor(*color);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:100
// [8] QQuickWindow * quickWindow()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWidget11quickWindowEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->quickWindow();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:103
// [-2] void setSource(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget9setSourceERK4QUrl(void *this_, QUrl* arg0) {
  ((QQuickWidget*)this_)->setSource(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:104
// [-2] void setContent(const QUrl &, QQmlComponent *, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget10setContentERK4QUrlP13QQmlComponentP7QObject(void *this_, QUrl* url, QQmlComponent * component, QObject * item) {
  ((QQuickWidget*)this_)->setContent(*url, component, item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:107
// [-2] void statusChanged(QQuickWidget::Status)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget13statusChangedENS_6StatusE(void *this_, QQuickWidget::Status arg0) {
  ((QQuickWidget*)this_)->statusChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:108
// [-2] void sceneGraphError(QQuickWindow::SceneGraphError, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWidget15sceneGraphErrorEN12QQuickWindow15SceneGraphErrorERK7QString(void *this_, QQuickWindow::SceneGraphError error, QString* message) {
  ((QQuickWidget*)this_)->sceneGraphError(error, *message);
}

//  main block end
