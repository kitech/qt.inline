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

// QSwipeGesture is pure virtual: false
// QSwipeGesture has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSwipeGesture_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSwipeGesture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSwipeGesture_t qt_meta_stringdata_MyQSwipeGesture = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQSwipeGesture"
  },
  "MyQSwipeGesture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSwipeGesture[] = {
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
class Q_DECL_EXPORT MyQSwipeGesture : public QSwipeGesture {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSwipeGesture::staticMetaObject,
  qt_meta_stringdata_MyQSwipeGesture.data,
  qt_meta_data_MyQSwipeGesture,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSwipeGesture.stringdata0))
      return static_cast<void*>(this);
  return QSwipeGesture::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSwipeGesture::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSwipeGesture() {}
// void QSwipeGesture(QObject *)
MyQSwipeGesture(QObject * parent) : QSwipeGesture(parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSwipeGesture10metaObjectEv(void *this_) {
  return (void*)((QSwipeGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSwipeGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSwipeGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QSwipeGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSwipeGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSwipeGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSwipeGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSwipeGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSwipeGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:221
// [-2] void QSwipeGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSwipeGestureC2EP7QObject(QObject * parent) {
  return  new MyQSwipeGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:222
// [-2] void ~QSwipeGesture()
extern "C" Q_DECL_EXPORT
void C_ZN13QSwipeGestureD2Ev(void *this_) {
  delete (QSwipeGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:224
// [4] QSwipeGesture::SwipeDirection horizontalDirection()
extern "C" Q_DECL_EXPORT
QSwipeGesture::SwipeDirection C_ZNK13QSwipeGesture19horizontalDirectionEv(void *this_) {
  return (QSwipeGesture::SwipeDirection)((QSwipeGesture*)this_)->horizontalDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:225
// [4] QSwipeGesture::SwipeDirection verticalDirection()
extern "C" Q_DECL_EXPORT
QSwipeGesture::SwipeDirection C_ZNK13QSwipeGesture17verticalDirectionEv(void *this_) {
  return (QSwipeGesture::SwipeDirection)((QSwipeGesture*)this_)->verticalDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:227
// [8] qreal swipeAngle()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QSwipeGesture10swipeAngleEv(void *this_) {
  return (qreal)((QSwipeGesture*)this_)->swipeAngle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:228
// [-2] void setSwipeAngle(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QSwipeGesture13setSwipeAngleEd(void *this_, qreal value) {
  ((QSwipeGesture*)this_)->setSwipeAngle(value);
}

//  main block end
