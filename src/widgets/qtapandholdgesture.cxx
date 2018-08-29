//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTapAndHoldGesture is pure virtual: false
// QTapAndHoldGesture has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTapAndHoldGesture_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTapAndHoldGesture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTapAndHoldGesture_t qt_meta_stringdata_MyQTapAndHoldGesture = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQTapAndHoldGesture"
  },
  "MyQTapAndHoldGesture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTapAndHoldGesture[] = {
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
class Q_DECL_EXPORT MyQTapAndHoldGesture : public QTapAndHoldGesture {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTapAndHoldGesture::staticMetaObject,
  qt_meta_stringdata_MyQTapAndHoldGesture.data,
  qt_meta_data_MyQTapAndHoldGesture,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTapAndHoldGesture.stringdata0))
      return static_cast<void*>(this);
  return QTapAndHoldGesture::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTapAndHoldGesture::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTapAndHoldGesture() {}
// void QTapAndHoldGesture(QObject *)
MyQTapAndHoldGesture(QObject * parent) : QTapAndHoldGesture(parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QTapAndHoldGesture10metaObjectEv(void *this_) {
  return (void*)((QTapAndHoldGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QTapAndHoldGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTapAndHoldGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QTapAndHoldGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTapAndHoldGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QTapAndHoldGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTapAndHoldGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QTapAndHoldGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTapAndHoldGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:260
// [-2] void QTapAndHoldGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QTapAndHoldGestureC2EP7QObject(QObject * parent) {
  return  new MyQTapAndHoldGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:261
// [-2] void ~QTapAndHoldGesture()
extern "C" Q_DECL_EXPORT
void C_ZN18QTapAndHoldGestureD2Ev(void *this_) {
  delete (QTapAndHoldGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:263
// [16] QPointF position()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QTapAndHoldGesture8positionEv(void *this_) {
  auto rv = ((QTapAndHoldGesture*)this_)->position();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:264
// [-2] void setPosition(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN18QTapAndHoldGesture11setPositionERK7QPointF(void *this_, QPointF* pos) {
  ((QTapAndHoldGesture*)this_)->setPosition(*pos);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:266
// [-2] void setTimeout(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QTapAndHoldGesture10setTimeoutEi(int msecs) {
  QTapAndHoldGesture::setTimeout(msecs);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:267
// [4] int timeout()
extern "C" Q_DECL_EXPORT
int C_ZN18QTapAndHoldGesture7timeoutEv() {
  return (int)QTapAndHoldGesture::timeout();
}

//  main block end
