//  header block begin

#ifndef QT_MINIMAL
// since 0x050c00
// /usr/include/qt/QtNetwork/qdtls.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdtls.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDtlsClientVerifier is pure virtual: false
// QDtlsClientVerifier has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDtlsClientVerifier_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDtlsClientVerifier_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDtlsClientVerifier_t qt_meta_stringdata_MyQDtlsClientVerifier = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQDtlsClientVerifier"
  },
  "MyQDtlsClientVerifier"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDtlsClientVerifier[] = {
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
class Q_DECL_EXPORT MyQDtlsClientVerifier : public QDtlsClientVerifier {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDtlsClientVerifier::staticMetaObject,
  qt_meta_stringdata_MyQDtlsClientVerifier.data,
  qt_meta_data_MyQDtlsClientVerifier,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDtlsClientVerifier.stringdata0))
      return static_cast<void*>(this);
  return QDtlsClientVerifier::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDtlsClientVerifier::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDtlsClientVerifier() {}
// void QDtlsClientVerifier(QObject *)
MyQDtlsClientVerifier(QObject * parent) : QDtlsClientVerifier(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QDtlsClientVerifier_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDtlsClientVerifier* qo = (MyQDtlsClientVerifier*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:76
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QDtlsClientVerifier10metaObjectEv(void *this_) {
  return (void*)((QDtlsClientVerifier*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:76
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QDtlsClientVerifier11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDtlsClientVerifier*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:76
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QDtlsClientVerifier11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDtlsClientVerifier*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:76
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QDtlsClientVerifier2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDtlsClientVerifier::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:76
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QDtlsClientVerifier6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDtlsClientVerifier::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:80
// [-2] void QDtlsClientVerifier(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QDtlsClientVerifierC2EP7QObject(QObject * parent) {
  return  new MyQDtlsClientVerifier(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:81
// [-2] void ~QDtlsClientVerifier()
extern "C" Q_DECL_EXPORT
void C_ZN19QDtlsClientVerifierD2Ev(void *this_) {
  delete (QDtlsClientVerifier*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:91
// [1] bool setCookieGeneratorParameters(const QDtlsClientVerifier::GeneratorParameters &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QDtlsClientVerifier28setCookieGeneratorParametersERKNS_19GeneratorParametersE(void *this_, QDtlsClientVerifier::GeneratorParameters* params) {
  return (bool)((QDtlsClientVerifier*)this_)->setCookieGeneratorParameters(*params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:92
// [16] QDtlsClientVerifier::GeneratorParameters cookieGeneratorParameters()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QDtlsClientVerifier25cookieGeneratorParametersEv(void *this_) {
  auto rv = ((QDtlsClientVerifier*)this_)->cookieGeneratorParameters();
return new QDtlsClientVerifier::GeneratorParameters(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:94
// [1] bool verifyClient(QUdpSocket *, const QByteArray &, const QHostAddress &, quint16)
extern "C" Q_DECL_EXPORT
bool C_ZN19QDtlsClientVerifier12verifyClientEP10QUdpSocketRK10QByteArrayRK12QHostAddresst(void *this_, QUdpSocket * socket, QByteArray* dgram, QHostAddress* address, quint16 port) {
  return (bool)((QDtlsClientVerifier*)this_)->verifyClient(socket, *dgram, *address, port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:96
// [8] QByteArray verifiedHello()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QDtlsClientVerifier13verifiedHelloEv(void *this_) {
  auto rv = ((QDtlsClientVerifier*)this_)->verifiedHello();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:98
// [1] QDtlsError dtlsError()
extern "C" Q_DECL_EXPORT
QDtlsError C_ZNK19QDtlsClientVerifier9dtlsErrorEv(void *this_) {
  return (QDtlsError)((QDtlsClientVerifier*)this_)->dtlsError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:99
// [8] QString dtlsErrorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QDtlsClientVerifier15dtlsErrorStringEv(void *this_) {
  auto rv = ((QDtlsClientVerifier*)this_)->dtlsErrorString();
return new QString(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
