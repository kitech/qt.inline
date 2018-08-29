//  header block begin
// /usr/include/qt/QtQuick/qquickitemgrabresult.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickitemgrabresult.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickItemGrabResult is pure virtual: false
// QQuickItemGrabResult has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQuickItemGrabResult_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickItemGrabResult_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickItemGrabResult_t qt_meta_stringdata_MyQQuickItemGrabResult = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQQuickItemGrabResult"
  },
  "MyQQuickItemGrabResult"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickItemGrabResult[] = {
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
class Q_DECL_EXPORT MyQQuickItemGrabResult : public QQuickItemGrabResult {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickItemGrabResult::staticMetaObject,
  qt_meta_stringdata_MyQQuickItemGrabResult.data,
  qt_meta_data_MyQQuickItemGrabResult,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickItemGrabResult.stringdata0))
      return static_cast<void*>(this);
  return QQuickItemGrabResult::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickItemGrabResult::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickItemGrabResult() {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QQuickItemGrabResult::event(arg0);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:73
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQuickItemGrabResult5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QQuickItemGrabResult*)this_)->QQuickItemGrabResult::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickItemGrabResult10metaObjectEv(void *this_) {
  return (void*)((QQuickItemGrabResult*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QQuickItemGrabResult11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickItemGrabResult*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QQuickItemGrabResult11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickItemGrabResult*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QQuickItemGrabResult2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickItemGrabResult::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QQuickItemGrabResult6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickItemGrabResult::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:64
// [32] QImage image()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickItemGrabResult5imageEv(void *this_) {
  auto rv = ((QQuickItemGrabResult*)this_)->image();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:65
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickItemGrabResult3urlEv(void *this_) {
  auto rv = ((QQuickItemGrabResult*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:68
// [1] bool saveToFile(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQuickItemGrabResult10saveToFileERK7QString(void *this_, QString* fileName) {
  return (bool)((QQuickItemGrabResult*)this_)->saveToFile(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:70
// [1] bool saveToFile(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QQuickItemGrabResult10saveToFileERK7QString(void *this_, QString* fileName) {
  return (bool)((QQuickItemGrabResult*)this_)->saveToFile(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:76
// [-2] void ready()
extern "C" Q_DECL_EXPORT
void C_ZN20QQuickItemGrabResult5readyEv(void *this_) {
  ((QQuickItemGrabResult*)this_)->ready();
}


extern "C" Q_DECL_EXPORT
void C_ZN20QQuickItemGrabResultD2Ev(void *this_) {
  delete (QQuickItemGrabResult*)(this_);
}
//  main block end
