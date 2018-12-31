//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(menubar)
// /usr/include/qt/QtWidgets/qmenubar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmenubar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMenuBar is pure virtual: false
// QMenuBar has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMenuBar_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMenuBar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMenuBar_t qt_meta_stringdata_MyQMenuBar = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQMenuBar"
  },
  "MyQMenuBar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMenuBar[] = {
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
class Q_DECL_EXPORT MyQMenuBar : public QMenuBar {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMenuBar::staticMetaObject,
  qt_meta_stringdata_MyQMenuBar.data,
  qt_meta_data_MyQMenuBar,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMenuBar.stringdata0))
      return static_cast<void*>(this);
  return QMenuBar::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMenuBar::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMenuBar() {}
// void QMenuBar(QWidget *)
MyQMenuBar(QWidget * parent) : QMenuBar(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMenuBar::changeEvent(arg0);
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
    QMenuBar::keyPressEvent(arg0);
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
    QMenuBar::mouseReleaseEvent(arg0);
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
    QMenuBar::mousePressEvent(arg0);
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
    QMenuBar::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void leaveEvent(QEvent *)
  virtual void leaveEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMenuBar::leaveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMenuBar::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMenuBar::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void actionEvent(QActionEvent *)
  virtual void actionEvent(QActionEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actionEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMenuBar::actionEvent(arg0);
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
    QMenuBar::focusOutEvent(arg0);
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
    QMenuBar::focusInEvent(arg0);
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
    QMenuBar::timerEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMenuBar::eventFilter(arg0, arg1);
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
    return QMenuBar::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMenuBar_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMenuBar* qo = (MyQMenuBar*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:139
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:140
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:141
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:142
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:143
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:144
// [-2] void leaveEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar10leaveEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::leaveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:145
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:146
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:147
// [-2] void actionEvent(QActionEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar11actionEventEP12QActionEvent(void *this_, QActionEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::actionEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:148
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::focusOutEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:149
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::focusInEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:150
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QMenuBar*)this_)->QMenuBar::timerEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:151
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QMenuBar11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QMenuBar*)this_)->QMenuBar::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:152
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QMenuBar5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QMenuBar*)this_)->QMenuBar::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMenuBar10metaObjectEv(void *this_) {
  return (void*)((QMenuBar*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMenuBar*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN8QMenuBar11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMenuBar*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMenuBar::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMenuBar::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:63
// [-2] void QMenuBar(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQMenuBar*)(0);
  return  new MyQMenuBar(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:64
// [-2] void ~QMenuBar()
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBarD2Ev(void *this_) {
  delete (QMenuBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:67
// [8] QAction * addAction(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar9addActionERK7QString(void *this_, QString* text) {
  return (void*)((QMenuBar*)this_)->addAction(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:68
// [8] QAction * addAction(const QString &, const QObject *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar9addActionERK7QStringPK7QObjectPKc(void *this_, QString* text, const QObject * receiver, const char * member) {
  return (void*)((QMenuBar*)this_)->addAction(*text, receiver, member);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:96
// [8] QAction * addMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar7addMenuEP5QMenu(void *this_, QMenu * menu) {
  return (void*)((QMenuBar*)this_)->addMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:97
// [8] QMenu * addMenu(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar7addMenuERK7QString(void *this_, QString* title) {
  return (void*)((QMenuBar*)this_)->addMenu(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:98
// [8] QMenu * addMenu(const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar7addMenuERK5QIconRK7QString(void *this_, QIcon* icon, QString* title) {
  return (void*)((QMenuBar*)this_)->addMenu(*icon, *title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:101
// [8] QAction * addSeparator()
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar12addSeparatorEv(void *this_) {
  return (void*)((QMenuBar*)this_)->addSeparator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:102
// [8] QAction * insertSeparator(QAction *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar15insertSeparatorEP7QAction(void *this_, QAction * before) {
  return (void*)((QMenuBar*)this_)->insertSeparator(before);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:104
// [8] QAction * insertMenu(QAction *, QMenu *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar10insertMenuEP7QActionP5QMenu(void *this_, QAction * before, QMenu * menu) {
  return (void*)((QMenuBar*)this_)->insertMenu(before, menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:106
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar5clearEv(void *this_) {
  ((QMenuBar*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:108
// [8] QAction * activeAction()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMenuBar12activeActionEv(void *this_) {
  return (void*)((QMenuBar*)this_)->activeAction();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qmenubar.h:109
// [-2] void setActiveAction(QAction *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar15setActiveActionEP7QAction(void *this_, QAction * action) {
  ((QMenuBar*)this_)->setActiveAction(action);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:111
// [-2] void setDefaultUp(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar12setDefaultUpEb(void *this_, bool arg0) {
  ((QMenuBar*)this_)->setDefaultUp(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:112
// [1] bool isDefaultUp()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QMenuBar11isDefaultUpEv(void *this_) {
  return (bool)((QMenuBar*)this_)->isDefaultUp();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:114
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMenuBar8sizeHintEv(void *this_) {
  auto rv = ((QMenuBar*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:115
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMenuBar15minimumSizeHintEv(void *this_) {
  auto rv = ((QMenuBar*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:116
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK8QMenuBar14heightForWidthEi(void *this_, int arg0) {
  return (int)((QMenuBar*)this_)->heightForWidth(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:118
// [16] QRect actionGeometry(QAction *)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMenuBar14actionGeometryEP7QAction(void *this_, QAction * arg0) {
  auto rv = ((QMenuBar*)this_)->actionGeometry(arg0);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:119
// [8] QAction * actionAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMenuBar8actionAtERK6QPoint(void *this_, QPoint* arg0) {
  return (void*)((QMenuBar*)this_)->actionAt(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:121
// [-2] void setCornerWidget(QWidget *, Qt::Corner)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar15setCornerWidgetEP7QWidgetN2Qt6CornerE(void *this_, QWidget * w, Qt::Corner corner) {
  ((QMenuBar*)this_)->setCornerWidget(w, corner);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:122
// [8] QWidget * cornerWidget(Qt::Corner)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMenuBar12cornerWidgetEN2Qt6CornerE(void *this_, Qt::Corner corner) {
  return (void*)((QMenuBar*)this_)->cornerWidget(corner);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:128
// [1] bool isNativeMenuBar()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QMenuBar15isNativeMenuBarEv(void *this_) {
  return (bool)((QMenuBar*)this_)->isNativeMenuBar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:129
// [-2] void setNativeMenuBar(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar16setNativeMenuBarEb(void *this_, bool nativeMenuBar) {
  ((QMenuBar*)this_)->setNativeMenuBar(nativeMenuBar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:130
// [8] QPlatformMenuBar * platformMenuBar()
extern "C" Q_DECL_EXPORT
void* C_ZN8QMenuBar15platformMenuBarEv(void *this_) {
  return (void*)((QMenuBar*)this_)->platformMenuBar();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:132
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar10setVisibleEb(void *this_, bool visible) {
  ((QMenuBar*)this_)->setVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:135
// [-2] void triggered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar9triggeredEP7QAction(void *this_, QAction * action) {
  ((QMenuBar*)this_)->triggered(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenubar.h:136
// [-2] void hovered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMenuBar7hoveredEP7QAction(void *this_, QAction * action) {
  ((QMenuBar*)this_)->hovered(action);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(menubar)
#endif // #ifndef QT_MINIMAL
//  footer block end
