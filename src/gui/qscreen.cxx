//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qscreen.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscreen.h>
#include <QtGui>
#include "callback_inherit.h"

// QScreen is pure virtual: false
// QScreen has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQScreen_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScreen_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScreen_t qt_meta_stringdata_MyQScreen = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQScreen"
  },
  "MyQScreen"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScreen[] = {
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
class Q_DECL_EXPORT MyQScreen : public QScreen {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QScreen::staticMetaObject,
  qt_meta_stringdata_MyQScreen.data,
  qt_meta_data_MyQScreen,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQScreen.stringdata0))
      return static_cast<void*>(this);
  return QScreen::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QScreen::qt_metacall(_c, _id, _a);
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
  virtual ~MyQScreen() {}
};

extern "C" Q_DECL_EXPORT
void* C_QScreen_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQScreen* qo = (MyQScreen*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:68
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen10metaObjectEv(void *this_) {
  return (void*)((QScreen*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:68
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QScreen11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QScreen*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:68
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QScreen11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QScreen*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:68
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QScreen2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QScreen::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:68
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QScreen6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QScreen::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:98
// [-2] void ~QScreen()
extern "C" Q_DECL_EXPORT
void C_ZN7QScreenD2Ev(void *this_) {
  delete (QScreen*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:99
// [8] QPlatformScreen * handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen6handleEv(void *this_) {
  return (void*)((QScreen*)this_)->handle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:101
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen4nameEv(void *this_) {
  auto rv = ((QScreen*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:103
// [8] QString manufacturer()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen12manufacturerEv(void *this_) {
  auto rv = ((QScreen*)this_)->manufacturer();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:104
// [8] QString model()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen5modelEv(void *this_) {
  auto rv = ((QScreen*)this_)->model();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:105
// [8] QString serialNumber()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen12serialNumberEv(void *this_) {
  auto rv = ((QScreen*)this_)->serialNumber();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:107
// [4] int depth()
extern "C" Q_DECL_EXPORT
int C_ZNK7QScreen5depthEv(void *this_) {
  return (int)((QScreen*)this_)->depth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:109
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen4sizeEv(void *this_) {
  auto rv = ((QScreen*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:110
// [16] QRect geometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen8geometryEv(void *this_) {
  auto rv = ((QScreen*)this_)->geometry();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:112
// [16] QSizeF physicalSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen12physicalSizeEv(void *this_) {
  auto rv = ((QScreen*)this_)->physicalSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:114
// [8] qreal physicalDotsPerInchX()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QScreen20physicalDotsPerInchXEv(void *this_) {
  return (qreal)((QScreen*)this_)->physicalDotsPerInchX();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:115
// [8] qreal physicalDotsPerInchY()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QScreen20physicalDotsPerInchYEv(void *this_) {
  return (qreal)((QScreen*)this_)->physicalDotsPerInchY();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:116
// [8] qreal physicalDotsPerInch()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QScreen19physicalDotsPerInchEv(void *this_) {
  return (qreal)((QScreen*)this_)->physicalDotsPerInch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:118
// [8] qreal logicalDotsPerInchX()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QScreen19logicalDotsPerInchXEv(void *this_) {
  return (qreal)((QScreen*)this_)->logicalDotsPerInchX();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:119
// [8] qreal logicalDotsPerInchY()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QScreen19logicalDotsPerInchYEv(void *this_) {
  return (qreal)((QScreen*)this_)->logicalDotsPerInchY();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:120
// [8] qreal logicalDotsPerInch()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QScreen18logicalDotsPerInchEv(void *this_) {
  return (qreal)((QScreen*)this_)->logicalDotsPerInch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:122
// [8] qreal devicePixelRatio()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QScreen16devicePixelRatioEv(void *this_) {
  return (qreal)((QScreen*)this_)->devicePixelRatio();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:124
// [8] QSize availableSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen13availableSizeEv(void *this_) {
  auto rv = ((QScreen*)this_)->availableSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:125
// [16] QRect availableGeometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen17availableGeometryEv(void *this_) {
  auto rv = ((QScreen*)this_)->availableGeometry();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:127
// [-2] QList<QScreen *> virtualSiblings()
extern "C" Q_DECL_EXPORT
QList<QScreen *>* C_ZNK7QScreen15virtualSiblingsEv(void *this_) {
  auto rv = ((QScreen*)this_)->virtualSiblings();
return new QList<QScreen *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:129
// [8] QSize virtualSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen11virtualSizeEv(void *this_) {
  auto rv = ((QScreen*)this_)->virtualSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:130
// [16] QRect virtualGeometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen15virtualGeometryEv(void *this_) {
  auto rv = ((QScreen*)this_)->virtualGeometry();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:132
// [8] QSize availableVirtualSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen20availableVirtualSizeEv(void *this_) {
  auto rv = ((QScreen*)this_)->availableVirtualSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:133
// [16] QRect availableVirtualGeometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen24availableVirtualGeometryEv(void *this_) {
  auto rv = ((QScreen*)this_)->availableVirtualGeometry();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:135
// [4] Qt::ScreenOrientation primaryOrientation()
extern "C" Q_DECL_EXPORT
Qt::ScreenOrientation C_ZNK7QScreen18primaryOrientationEv(void *this_) {
  return (Qt::ScreenOrientation)((QScreen*)this_)->primaryOrientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:136
// [4] Qt::ScreenOrientation orientation()
extern "C" Q_DECL_EXPORT
Qt::ScreenOrientation C_ZNK7QScreen11orientationEv(void *this_) {
  return (Qt::ScreenOrientation)((QScreen*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:137
// [4] Qt::ScreenOrientation nativeOrientation()
extern "C" Q_DECL_EXPORT
Qt::ScreenOrientation C_ZNK7QScreen17nativeOrientationEv(void *this_) {
  return (Qt::ScreenOrientation)((QScreen*)this_)->nativeOrientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:139
// [4] Qt::ScreenOrientations orientationUpdateMask()
extern "C" Q_DECL_EXPORT
Qt::ScreenOrientations C_ZNK7QScreen21orientationUpdateMaskEv(void *this_) {
  return (Qt::ScreenOrientations)((QScreen*)this_)->orientationUpdateMask();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:140
// [-2] void setOrientationUpdateMask(Qt::ScreenOrientations)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen24setOrientationUpdateMaskE6QFlagsIN2Qt17ScreenOrientationEE(void *this_, QFlags<Qt::ScreenOrientation> mask) {
  ((QScreen*)this_)->setOrientationUpdateMask(mask);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:142
// [4] int angleBetween(Qt::ScreenOrientation, Qt::ScreenOrientation)
extern "C" Q_DECL_EXPORT
int C_ZNK7QScreen12angleBetweenEN2Qt17ScreenOrientationES1_(void *this_, Qt::ScreenOrientation a, Qt::ScreenOrientation b) {
  return (int)((QScreen*)this_)->angleBetween(a, b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:143
// [88] QTransform transformBetween(Qt::ScreenOrientation, Qt::ScreenOrientation, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen16transformBetweenEN2Qt17ScreenOrientationES1_RK5QRect(void *this_, Qt::ScreenOrientation a, Qt::ScreenOrientation b, QRect* target) {
  auto rv = ((QScreen*)this_)->transformBetween(a, b, *target);
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:144
// [16] QRect mapBetween(Qt::ScreenOrientation, Qt::ScreenOrientation, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QScreen10mapBetweenEN2Qt17ScreenOrientationES1_RK5QRect(void *this_, Qt::ScreenOrientation a, Qt::ScreenOrientation b, QRect* rect) {
  auto rv = ((QScreen*)this_)->mapBetween(a, b, *rect);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:146
// [1] bool isPortrait(Qt::ScreenOrientation)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QScreen10isPortraitEN2Qt17ScreenOrientationE(void *this_, Qt::ScreenOrientation orientation) {
  return (bool)((QScreen*)this_)->isPortrait(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:147
// [1] bool isLandscape(Qt::ScreenOrientation)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QScreen11isLandscapeEN2Qt17ScreenOrientationE(void *this_, Qt::ScreenOrientation orientation) {
  return (bool)((QScreen*)this_)->isLandscape(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:149
// [32] QPixmap grabWindow(WId, int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QScreen10grabWindowEyiiii(void *this_, WId window, int x, int y, int w, int h) {
  auto rv = ((QScreen*)this_)->grabWindow(window, x, y, w, h);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:151
// [8] qreal refreshRate()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QScreen11refreshRateEv(void *this_) {
  return (qreal)((QScreen*)this_)->refreshRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:154
// [-2] void geometryChanged(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen15geometryChangedERK5QRect(void *this_, QRect* geometry) {
  ((QScreen*)this_)->geometryChanged(*geometry);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:155
// [-2] void availableGeometryChanged(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen24availableGeometryChangedERK5QRect(void *this_, QRect* geometry) {
  ((QScreen*)this_)->availableGeometryChanged(*geometry);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:156
// [-2] void physicalSizeChanged(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen19physicalSizeChangedERK6QSizeF(void *this_, QSizeF* size) {
  ((QScreen*)this_)->physicalSizeChanged(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:157
// [-2] void physicalDotsPerInchChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen26physicalDotsPerInchChangedEd(void *this_, qreal dpi) {
  ((QScreen*)this_)->physicalDotsPerInchChanged(dpi);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:158
// [-2] void logicalDotsPerInchChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen25logicalDotsPerInchChangedEd(void *this_, qreal dpi) {
  ((QScreen*)this_)->logicalDotsPerInchChanged(dpi);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:159
// [-2] void virtualGeometryChanged(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen22virtualGeometryChangedERK5QRect(void *this_, QRect* rect) {
  ((QScreen*)this_)->virtualGeometryChanged(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:160
// [-2] void primaryOrientationChanged(Qt::ScreenOrientation)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(void *this_, Qt::ScreenOrientation orientation) {
  ((QScreen*)this_)->primaryOrientationChanged(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:161
// [-2] void orientationChanged(Qt::ScreenOrientation)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(void *this_, Qt::ScreenOrientation orientation) {
  ((QScreen*)this_)->orientationChanged(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:162
// [-2] void refreshRateChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN7QScreen18refreshRateChangedEd(void *this_, qreal refreshRate) {
  ((QScreen*)this_)->refreshRateChanged(refreshRate);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
