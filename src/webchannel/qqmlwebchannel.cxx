//  header block begin
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlwebchannel.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QQmlWebChannel is pure virtual: false
// QQmlWebChannel has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlWebChannel_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlWebChannel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlWebChannel_t qt_meta_stringdata_MyQQmlWebChannel = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQQmlWebChannel"
  },
  "MyQQmlWebChannel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlWebChannel[] = {
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
class Q_DECL_EXPORT MyQQmlWebChannel : public QQmlWebChannel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlWebChannel::staticMetaObject,
  qt_meta_stringdata_MyQQmlWebChannel.data,
  qt_meta_data_MyQQmlWebChannel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlWebChannel.stringdata0))
      return static_cast<void*>(this);
  return QQmlWebChannel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlWebChannel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlWebChannel() {}
// void QQmlWebChannel(QObject *)
MyQQmlWebChannel(QObject * parent) : QQmlWebChannel(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QQmlWebChannel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlWebChannel* qo = (MyQQmlWebChannel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlWebChannel10metaObjectEv(void *this_) {
  return (void*)((QQmlWebChannel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlWebChannel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QQmlWebChannel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlWebChannel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlWebChannel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlWebChannel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:62
// [-2] void QQmlWebChannel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannelC2EP7QObject(QObject * parent) {
  return  new MyQQmlWebChannel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:63
// [-2] void ~QQmlWebChannel()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannelD2Ev(void *this_) {
  delete (QQmlWebChannel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:65
// [-2] void registerObjects(const QVariantMap &)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel15registerObjectsERK4QMapI7QString8QVariantE(void *this_, const QVariantMap & objects) {
  ((QQmlWebChannel*)this_)->registerObjects(objects);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:66
// [64] QQmlListProperty<QObject> registeredObjects()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel17registeredObjectsEv(void *this_) {
  auto rv = ((QQmlWebChannel*)this_)->registeredObjects();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:68
// [64] QQmlListProperty<QObject> transports()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel10transportsEv(void *this_) {
  auto rv = ((QQmlWebChannel*)this_)->transports();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:70
// [8] QQmlWebChannelAttached * qmlAttachedProperties(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannel21qmlAttachedPropertiesEP7QObject(QObject * obj) {
  return (void*)QQmlWebChannel::qmlAttachedProperties(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:72
// [-2] void connectTo(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel9connectToEP7QObject(void *this_, QObject * transport) {
  ((QQmlWebChannel*)this_)->connectTo(transport);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:73
// [-2] void disconnectFrom(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel14disconnectFromEP7QObject(void *this_, QObject * transport) {
  ((QQmlWebChannel*)this_)->disconnectFrom(transport);
}

//  main block end
