//  header block begin
// /usr/include/qt/QtWidgets/qsplashscreen.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsplashscreen.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSplashScreen is pure virtual: false
// QSplashScreen has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSplashScreen_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSplashScreen_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSplashScreen_t qt_meta_stringdata_MyQSplashScreen = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQSplashScreen"
  },
  "MyQSplashScreen"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSplashScreen[] = {
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
class Q_DECL_EXPORT MyQSplashScreen : public QSplashScreen {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSplashScreen::staticMetaObject,
  qt_meta_stringdata_MyQSplashScreen.data,
  qt_meta_data_MyQSplashScreen,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSplashScreen.stringdata0))
      return static_cast<void*>(this);
  return QSplashScreen::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSplashScreen::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSplashScreen() {}
// void QSplashScreen(const QPixmap &, Qt::WindowFlags)
MyQSplashScreen(const QPixmap & pixmap, QFlags<Qt::WindowType> f) : QSplashScreen(pixmap, f) {}
// void QSplashScreen(QWidget *, const QPixmap &, Qt::WindowFlags)
MyQSplashScreen(QWidget * parent, const QPixmap & pixmap, QFlags<Qt::WindowType> f) : QSplashScreen(parent, pixmap, f) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSplashScreen::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawContents(QPainter *)
  virtual void drawContents(QPainter * painter)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawContents", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplashScreen::drawContents(painter);
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
    QSplashScreen::mousePressEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSplashScreen_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSplashScreen* qo = (MyQSplashScreen*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:76
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QSplashScreen5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QSplashScreen*)this_)->QSplashScreen::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:77
// [-2] void drawContents(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreen12drawContentsEP8QPainter(void *this_, QPainter * painter) {
  ((QSplashScreen*)this_)->QSplashScreen::drawContents(painter);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:78
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreen15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSplashScreen*)this_)->QSplashScreen::mousePressEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSplashScreen10metaObjectEv(void *this_) {
  return (void*)((QSplashScreen*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSplashScreen11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSplashScreen*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QSplashScreen11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSplashScreen*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSplashScreen2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSplashScreen::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSplashScreen6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSplashScreen::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:57
// [-2] void QSplashScreen(const QPixmap &, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSplashScreenC2ERK7QPixmap6QFlagsIN2Qt10WindowTypeEE(QPixmap* pixmap, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQSplashScreen*)(0);
  return  new MyQSplashScreen(*pixmap, f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:58
// [-2] void QSplashScreen(QWidget *, const QPixmap &, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSplashScreenC2EP7QWidgetRK7QPixmap6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QPixmap* pixmap, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQSplashScreen*)(0);
  return  new MyQSplashScreen(parent, *pixmap, f);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:59
// [-2] void ~QSplashScreen()
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreenD2Ev(void *this_) {
  delete (QSplashScreen*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:61
// [-2] void setPixmap(const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreen9setPixmapERK7QPixmap(void *this_, QPixmap* pixmap) {
  ((QSplashScreen*)this_)->setPixmap(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:62
// [32] const QPixmap pixmap()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSplashScreen6pixmapEv(void *this_) {
  auto rv = ((QSplashScreen*)this_)->pixmap();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:63
// [-2] void finish(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreen6finishEP7QWidget(void *this_, QWidget * w) {
  ((QSplashScreen*)this_)->finish(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:64
// [-2] void repaint()
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreen7repaintEv(void *this_) {
  ((QSplashScreen*)this_)->repaint();
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qsplashscreen.h:65
// [8] QString message()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSplashScreen7messageEv(void *this_) {
  auto rv = ((QSplashScreen*)this_)->message();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:68
// [-2] void showMessage(const QString &, int, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreen11showMessageERK7QStringiRK6QColor(void *this_, QString* message, int alignment, QColor* color) {
  ((QSplashScreen*)this_)->showMessage(*message, alignment, *color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:70
// [-2] void clearMessage()
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreen12clearMessageEv(void *this_) {
  ((QSplashScreen*)this_)->clearMessage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:73
// [-2] void messageChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSplashScreen14messageChangedERK7QString(void *this_, QString* message) {
  ((QSplashScreen*)this_)->messageChanged(*message);
}

//  main block end
