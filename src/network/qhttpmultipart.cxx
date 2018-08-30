//  header block begin
// since 0x040800
// /usr/include/qt/QtNetwork/qhttpmultipart.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhttpmultipart.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHttpMultiPart is pure virtual: false
// QHttpMultiPart has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQHttpMultiPart_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHttpMultiPart_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHttpMultiPart_t qt_meta_stringdata_MyQHttpMultiPart = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQHttpMultiPart"
  },
  "MyQHttpMultiPart"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHttpMultiPart[] = {
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
class Q_DECL_EXPORT MyQHttpMultiPart : public QHttpMultiPart {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QHttpMultiPart::staticMetaObject,
  qt_meta_stringdata_MyQHttpMultiPart.data,
  qt_meta_data_MyQHttpMultiPart,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQHttpMultiPart.stringdata0))
      return static_cast<void*>(this);
  return QHttpMultiPart::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QHttpMultiPart::qt_metacall(_c, _id, _a);
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
  virtual ~MyQHttpMultiPart() {}
// void QHttpMultiPart(QObject *)
MyQHttpMultiPart(QObject * parent) : QHttpMultiPart(parent) {}
// void QHttpMultiPart(QHttpMultiPart::ContentType, QObject *)
MyQHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject * parent) : QHttpMultiPart(contentType, parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QHttpMultiPart_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQHttpMultiPart* qo = (MyQHttpMultiPart*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:90
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QHttpMultiPart10metaObjectEv(void *this_) {
  return (void*)((QHttpMultiPart*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:90
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QHttpMultiPart11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QHttpMultiPart*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:90
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QHttpMultiPart11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QHttpMultiPart*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:90
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QHttpMultiPart2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QHttpMultiPart::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:90
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QHttpMultiPart6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QHttpMultiPart::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:101
// [-2] void QHttpMultiPart(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QHttpMultiPartC2EP7QObject(QObject * parent) {
  return  new MyQHttpMultiPart(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:102
// [-2] void QHttpMultiPart(QHttpMultiPart::ContentType, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QHttpMultiPartC2ENS_11ContentTypeEP7QObject(QHttpMultiPart::ContentType contentType, QObject * parent) {
  return  new MyQHttpMultiPart(contentType, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:103
// [-2] void ~QHttpMultiPart()
extern "C" Q_DECL_EXPORT
void C_ZN14QHttpMultiPartD2Ev(void *this_) {
  delete (QHttpMultiPart*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:105
// [-2] void append(const QHttpPart &)
extern "C" Q_DECL_EXPORT
void C_ZN14QHttpMultiPart6appendERK9QHttpPart(void *this_, QHttpPart* httpPart) {
  ((QHttpMultiPart*)this_)->append(*httpPart);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:107
// [-2] void setContentType(QHttpMultiPart::ContentType)
extern "C" Q_DECL_EXPORT
void C_ZN14QHttpMultiPart14setContentTypeENS_11ContentTypeE(void *this_, QHttpMultiPart::ContentType contentType) {
  ((QHttpMultiPart*)this_)->setContentType(contentType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:109
// [8] QByteArray boundary()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QHttpMultiPart8boundaryEv(void *this_) {
  auto rv = ((QHttpMultiPart*)this_)->boundary();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:110
// [-2] void setBoundary(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN14QHttpMultiPart11setBoundaryERK10QByteArray(void *this_, QByteArray* boundary) {
  ((QHttpMultiPart*)this_)->setBoundary(*boundary);
}

//  main block end
