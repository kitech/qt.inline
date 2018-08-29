//  header block begin
// since 0x050400
// /usr/include/qt/QtQuick/qquickrendercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickrendercontrol.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickRenderControl is pure virtual: false
// QQuickRenderControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQuickRenderControl_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickRenderControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickRenderControl_t qt_meta_stringdata_MyQQuickRenderControl = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQQuickRenderControl"
  },
  "MyQQuickRenderControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickRenderControl[] = {
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
class Q_DECL_EXPORT MyQQuickRenderControl : public QQuickRenderControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickRenderControl::staticMetaObject,
  qt_meta_stringdata_MyQQuickRenderControl.data,
  qt_meta_data_MyQQuickRenderControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickRenderControl.stringdata0))
      return static_cast<void*>(this);
  return QQuickRenderControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickRenderControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickRenderControl() {}
// void QQuickRenderControl(QObject *)
MyQQuickRenderControl(QObject * parent) : QQuickRenderControl(parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQuickRenderControl10metaObjectEv(void *this_) {
  return (void*)((QQuickRenderControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickRenderControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QQuickRenderControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickRenderControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickRenderControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickRenderControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:58
// [-2] void QQuickRenderControl(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControlC2EP7QObject(QObject * parent) {
  return  new MyQQuickRenderControl(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:59
// [-2] void ~QQuickRenderControl()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControlD2Ev(void *this_) {
  delete (QQuickRenderControl*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:61
// [-2] void prepareThread(QThread *)
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl13prepareThreadEP7QThread(void *this_, QThread * targetThread) {
  ((QQuickRenderControl*)this_)->prepareThread(targetThread);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:62
// [-2] void initialize(QOpenGLContext *)
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl10initializeEP14QOpenGLContext(void *this_, QOpenGLContext * gl) {
  ((QQuickRenderControl*)this_)->initialize(gl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:63
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl10invalidateEv(void *this_) {
  ((QQuickRenderControl*)this_)->invalidate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:65
// [-2] void polishItems()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl11polishItemsEv(void *this_) {
  ((QQuickRenderControl*)this_)->polishItems();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:66
// [-2] void render()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl6renderEv(void *this_) {
  ((QQuickRenderControl*)this_)->render();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:67
// [1] bool sync()
extern "C" Q_DECL_EXPORT
bool C_ZN19QQuickRenderControl4syncEv(void *this_) {
  return (bool)((QQuickRenderControl*)this_)->sync();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:69
// [32] QImage grab()
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl4grabEv(void *this_) {
  auto rv = ((QQuickRenderControl*)this_)->grab();
return new QImage(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:71
// [8] QWindow * renderWindowFor(QQuickWindow *, QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl15renderWindowForEP12QQuickWindowP6QPoint(QQuickWindow * win, QPoint * offset) {
  return (void*)QQuickRenderControl::renderWindowFor(win, offset);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:72
// [8] QWindow * renderWindow(QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl12renderWindowEP6QPoint(void *this_, QPoint * offset) {
  return (void*)((QQuickRenderControl*)this_)->renderWindow(offset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:75
// [-2] void renderRequested()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl15renderRequestedEv(void *this_) {
  ((QQuickRenderControl*)this_)->renderRequested();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:76
// [-2] void sceneChanged()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl12sceneChangedEv(void *this_) {
  ((QQuickRenderControl*)this_)->sceneChanged();
}

//  main block end
