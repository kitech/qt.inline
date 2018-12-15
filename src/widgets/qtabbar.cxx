//  header block begin

// /usr/include/qt/QtWidgets/qtabbar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtabbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTabBar is pure virtual: false
// QTabBar has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTabBar_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTabBar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTabBar_t qt_meta_stringdata_MyQTabBar = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQTabBar"
  },
  "MyQTabBar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTabBar[] = {
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
class Q_DECL_EXPORT MyQTabBar : public QTabBar {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTabBar::staticMetaObject,
  qt_meta_stringdata_MyQTabBar.data,
  qt_meta_data_MyQTabBar,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTabBar.stringdata0))
      return static_cast<void*>(this);
  return QTabBar::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTabBar::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTabBar() {}
// void QTabBar(QWidget *)
MyQTabBar(QWidget * parent) : QTabBar(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] QSize tabSizeHint(int)
  virtual QSize tabSizeHint(int index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"tabSizeHint", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QTabBar::tabSizeHint(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSize minimumTabSizeHint(int)
  virtual QSize minimumTabSizeHint(int index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"minimumTabSizeHint", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QTabBar::minimumTabSizeHint(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void tabInserted(int)
  virtual void tabInserted(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"tabInserted", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabBar::tabInserted(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void tabRemoved(int)
  virtual void tabRemoved(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"tabRemoved", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabBar::tabRemoved(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void tabLayoutChange()
  virtual void tabLayoutChange()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"tabLayoutChange", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabBar::tabLayoutChange();
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
    return QTabBar::event(arg0);
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
    QTabBar::resizeEvent(arg0);
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
    QTabBar::showEvent(arg0);
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
    QTabBar::hideEvent(arg0);
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
    QTabBar::paintEvent(arg0);
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
    QTabBar::mousePressEvent(arg0);
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
    QTabBar::mouseMoveEvent(arg0);
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
    QTabBar::mouseReleaseEvent(arg0);
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
    QTabBar::wheelEvent(event);
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
    QTabBar::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabBar::changeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabBar::timerEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTabBar_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTabBar* qo = (MyQTabBar*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:192
// [8] QSize tabSizeHint(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar11tabSizeHintEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->QTabBar::tabSizeHint(index);
return new QSize(rv);
}

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qtabbar.h:193
// [8] QSize minimumTabSizeHint(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar18minimumTabSizeHintEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->QTabBar::minimumTabSizeHint(index);
return new QSize(rv);
}
#endif // QT_VERSION >= 0x050000

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:194
// [-2] void tabInserted(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar11tabInsertedEi(void *this_, int index) {
  ((QTabBar*)this_)->QTabBar::tabInserted(index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:195
// [-2] void tabRemoved(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar10tabRemovedEi(void *this_, int index) {
  ((QTabBar*)this_)->QTabBar::tabRemoved(index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:196
// [-2] void tabLayoutChange()
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar15tabLayoutChangeEv(void *this_) {
  ((QTabBar*)this_)->QTabBar::tabLayoutChange();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:198
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QTabBar5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QTabBar*)this_)->QTabBar::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:199
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:200
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:201
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar9hideEventEP10QHideEvent(void *this_, QHideEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::hideEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:202
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:203
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:204
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:205
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:207
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * event) {
  ((QTabBar*)this_)->QTabBar::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:209
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:210
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QTabBar*)this_)->QTabBar::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:211
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QTabBar*)this_)->QTabBar::timerEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar10metaObjectEv(void *this_) {
  return (void*)((QTabBar*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QTabBar11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTabBar*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QTabBar11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTabBar*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QTabBar2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTabBar::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QTabBar6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTabBar::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:75
// [-2] void QTabBar(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QTabBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTabBar*)(0);
  return  new MyQTabBar(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:76
// [-2] void ~QTabBar()
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBarD2Ev(void *this_) {
  delete (QTabBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:94
// [4] QTabBar::Shape shape()
extern "C" Q_DECL_EXPORT
QTabBar::Shape C_ZNK7QTabBar5shapeEv(void *this_) {
  return (QTabBar::Shape)((QTabBar*)this_)->shape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:95
// [-2] void setShape(QTabBar::Shape)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar8setShapeENS_5ShapeE(void *this_, QTabBar::Shape shape) {
  ((QTabBar*)this_)->setShape(shape);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:97
// [4] int addTab(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN7QTabBar6addTabERK7QString(void *this_, QString* text) {
  return (int)((QTabBar*)this_)->addTab(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:98
// [4] int addTab(const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN7QTabBar6addTabERK5QIconRK7QString(void *this_, QIcon* icon, QString* text) {
  return (int)((QTabBar*)this_)->addTab(*icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:100
// [4] int insertTab(int, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN7QTabBar9insertTabEiRK7QString(void *this_, int index, QString* text) {
  return (int)((QTabBar*)this_)->insertTab(index, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:101
// [4] int insertTab(int, const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN7QTabBar9insertTabEiRK5QIconRK7QString(void *this_, int index, QIcon* icon, QString* text) {
  return (int)((QTabBar*)this_)->insertTab(index, *icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:103
// [-2] void removeTab(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar9removeTabEi(void *this_, int index) {
  ((QTabBar*)this_)->removeTab(index);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qtabbar.h:104
// [-2] void moveTab(int, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar7moveTabEii(void *this_, int from, int to) {
  ((QTabBar*)this_)->moveTab(from, to);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:106
// [1] bool isTabEnabled(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar12isTabEnabledEi(void *this_, int index) {
  return (bool)((QTabBar*)this_)->isTabEnabled(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:107
// [-2] void setTabEnabled(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar13setTabEnabledEib(void *this_, int index, bool arg1) {
  ((QTabBar*)this_)->setTabEnabled(index, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:109
// [8] QString tabText(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar7tabTextEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabText(index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:110
// [-2] void setTabText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar10setTabTextEiRK7QString(void *this_, int index, QString* text) {
  ((QTabBar*)this_)->setTabText(index, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:112
// [16] QColor tabTextColor(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar12tabTextColorEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabTextColor(index);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:113
// [-2] void setTabTextColor(int, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar15setTabTextColorEiRK6QColor(void *this_, int index, QColor* color) {
  ((QTabBar*)this_)->setTabTextColor(index, *color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:115
// [8] QIcon tabIcon(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar7tabIconEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabIcon(index);
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:116
// [-2] void setTabIcon(int, const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar10setTabIconEiRK5QIcon(void *this_, int index, QIcon* icon) {
  ((QTabBar*)this_)->setTabIcon(index, *icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:118
// [4] Qt::TextElideMode elideMode()
extern "C" Q_DECL_EXPORT
Qt::TextElideMode C_ZNK7QTabBar9elideModeEv(void *this_) {
  return (Qt::TextElideMode)((QTabBar*)this_)->elideMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:119
// [-2] void setElideMode(Qt::TextElideMode)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar12setElideModeEN2Qt13TextElideModeE(void *this_, Qt::TextElideMode arg0) {
  ((QTabBar*)this_)->setElideMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:122
// [-2] void setTabToolTip(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar13setTabToolTipEiRK7QString(void *this_, int index, QString* tip) {
  ((QTabBar*)this_)->setTabToolTip(index, *tip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:123
// [8] QString tabToolTip(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar10tabToolTipEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabToolTip(index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtabbar.h:127
// [-2] void setTabWhatsThis(int, const QString &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar15setTabWhatsThisEiRK7QString(void *this_, int index, QString* text) {
  ((QTabBar*)this_)->setTabWhatsThis(index, *text);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtabbar.h:128
// [8] QString tabWhatsThis(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar12tabWhatsThisEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabWhatsThis(index);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:131
// [-2] void setTabData(int, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar10setTabDataEiRK8QVariant(void *this_, int index, QVariant* data) {
  ((QTabBar*)this_)->setTabData(index, *data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:132
// [16] QVariant tabData(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar7tabDataEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabData(index);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:134
// [16] QRect tabRect(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar7tabRectEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabRect(index);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtabbar.h:135
// [4] int tabAt(const QPoint &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
int C_ZNK7QTabBar5tabAtERK6QPoint(void *this_, QPoint* pos) {
  return (int)((QTabBar*)this_)->tabAt(*pos);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:137
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK7QTabBar12currentIndexEv(void *this_) {
  return (int)((QTabBar*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:138
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK7QTabBar5countEv(void *this_) {
  return (int)((QTabBar*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:140
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar8sizeHintEv(void *this_) {
  auto rv = ((QTabBar*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:141
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar15minimumSizeHintEv(void *this_) {
  auto rv = ((QTabBar*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:143
// [-2] void setDrawBase(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar11setDrawBaseEb(void *this_, bool drawTheBase) {
  ((QTabBar*)this_)->setDrawBase(drawTheBase);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:144
// [1] bool drawBase()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar8drawBaseEv(void *this_) {
  return (bool)((QTabBar*)this_)->drawBase();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:146
// [8] QSize iconSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar8iconSizeEv(void *this_) {
  auto rv = ((QTabBar*)this_)->iconSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:147
// [-2] void setIconSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QTabBar*)this_)->setIconSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:149
// [1] bool usesScrollButtons()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar17usesScrollButtonsEv(void *this_) {
  return (bool)((QTabBar*)this_)->usesScrollButtons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:150
// [-2] void setUsesScrollButtons(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar20setUsesScrollButtonsEb(void *this_, bool useButtons) {
  ((QTabBar*)this_)->setUsesScrollButtons(useButtons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:152
// [1] bool tabsClosable()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar12tabsClosableEv(void *this_) {
  return (bool)((QTabBar*)this_)->tabsClosable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:153
// [-2] void setTabsClosable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar15setTabsClosableEb(void *this_, bool closable) {
  ((QTabBar*)this_)->setTabsClosable(closable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:155
// [-2] void setTabButton(int, QTabBar::ButtonPosition, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar12setTabButtonEiNS_14ButtonPositionEP7QWidget(void *this_, int index, QTabBar::ButtonPosition position, QWidget * widget) {
  ((QTabBar*)this_)->setTabButton(index, position, widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:156
// [8] QWidget * tabButton(int, QTabBar::ButtonPosition)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar9tabButtonEiNS_14ButtonPositionE(void *this_, int index, QTabBar::ButtonPosition position) {
  return (void*)((QTabBar*)this_)->tabButton(index, position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:158
// [4] QTabBar::SelectionBehavior selectionBehaviorOnRemove()
extern "C" Q_DECL_EXPORT
QTabBar::SelectionBehavior C_ZNK7QTabBar25selectionBehaviorOnRemoveEv(void *this_) {
  return (QTabBar::SelectionBehavior)((QTabBar*)this_)->selectionBehaviorOnRemove();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:159
// [-2] void setSelectionBehaviorOnRemove(QTabBar::SelectionBehavior)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar28setSelectionBehaviorOnRemoveENS_17SelectionBehaviorE(void *this_, QTabBar::SelectionBehavior behavior) {
  ((QTabBar*)this_)->setSelectionBehaviorOnRemove(behavior);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:161
// [1] bool expanding()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar9expandingEv(void *this_) {
  return (bool)((QTabBar*)this_)->expanding();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:162
// [-2] void setExpanding(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar12setExpandingEb(void *this_, bool enabled) {
  ((QTabBar*)this_)->setExpanding(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:164
// [1] bool isMovable()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar9isMovableEv(void *this_) {
  return (bool)((QTabBar*)this_)->isMovable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:165
// [-2] void setMovable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar10setMovableEb(void *this_, bool movable) {
  ((QTabBar*)this_)->setMovable(movable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:167
// [1] bool documentMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar12documentModeEv(void *this_) {
  return (bool)((QTabBar*)this_)->documentMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:168
// [-2] void setDocumentMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar15setDocumentModeEb(void *this_, bool set) {
  ((QTabBar*)this_)->setDocumentMode(set);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:170
// [1] bool autoHide()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar8autoHideEv(void *this_) {
  return (bool)((QTabBar*)this_)->autoHide();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:171
// [-2] void setAutoHide(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar11setAutoHideEb(void *this_, bool hide) {
  ((QTabBar*)this_)->setAutoHide(hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:173
// [1] bool changeCurrentOnDrag()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QTabBar19changeCurrentOnDragEv(void *this_) {
  return (bool)((QTabBar*)this_)->changeCurrentOnDrag();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:174
// [-2] void setChangeCurrentOnDrag(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar22setChangeCurrentOnDragEb(void *this_, bool change) {
  ((QTabBar*)this_)->setChangeCurrentOnDrag(change);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:177
// [8] QString accessibleTabName(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QTabBar17accessibleTabNameEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->accessibleTabName(index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:178
// [-2] void setAccessibleTabName(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar20setAccessibleTabNameEiRK7QString(void *this_, int index, QString* name) {
  ((QTabBar*)this_)->setAccessibleTabName(index, *name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:182
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar15setCurrentIndexEi(void *this_, int index) {
  ((QTabBar*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:185
// [-2] void currentChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar14currentChangedEi(void *this_, int index) {
  ((QTabBar*)this_)->currentChanged(index);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qtabbar.h:186
// [-2] void tabCloseRequested(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar17tabCloseRequestedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabCloseRequested(index);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qtabbar.h:187
// [-2] void tabMoved(int, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar8tabMovedEii(void *this_, int from, int to) {
  ((QTabBar*)this_)->tabMoved(from, to);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qtabbar.h:188
// [-2] void tabBarClicked(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar13tabBarClickedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabBarClicked(index);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qtabbar.h:189
// [-2] void tabBarDoubleClicked(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN7QTabBar19tabBarDoubleClickedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabBarDoubleClicked(index);
}
#endif // QT_VERSION >= 0x050200

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
