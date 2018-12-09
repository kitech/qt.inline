//  header block begin

// since 0x050400
// /usr/include/qt/QtWebChannel/qwebchannel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebchannel.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QWebChannel is pure virtual: false
// QWebChannel has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebChannel_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebChannel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebChannel_t qt_meta_stringdata_MyQWebChannel = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQWebChannel"
  },
  "MyQWebChannel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebChannel[] = {
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
class Q_DECL_EXPORT MyQWebChannel : public QWebChannel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWebChannel::staticMetaObject,
  qt_meta_stringdata_MyQWebChannel.data,
  qt_meta_data_MyQWebChannel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWebChannel.stringdata0))
      return static_cast<void*>(this);
  return QWebChannel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWebChannel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWebChannel() {}
// void QWebChannel(QObject *)
MyQWebChannel(QObject * parent) : QWebChannel(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QWebChannel_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWebChannel* qo = (MyQWebChannel*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWebChannel10metaObjectEv(void *this_) {
  return (void*)((QWebChannel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWebChannel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebChannel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QWebChannel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebChannel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWebChannel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebChannel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWebChannel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebChannel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:60
// [-2] void QWebChannel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWebChannelC2EP7QObject(QObject * parent) {
  return  new MyQWebChannel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:61
// [-2] void ~QWebChannel()
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannelD2Ev(void *this_) {
  delete (QWebChannel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:63
// [-2] void registerObjects(const QHash<QString, QObject *> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel15registerObjectsERK5QHashI7QStringP7QObjectE(void *this_, QHash<QString, QObject *>* objects) {
  ((QWebChannel*)this_)->registerObjects(*objects);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:64
// [-2] QHash<QString, QObject *> registeredObjects()
extern "C" Q_DECL_EXPORT
void C_ZNK11QWebChannel17registeredObjectsEv(void *this_) {
  auto rv = ((QWebChannel*)this_)->registeredObjects();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:65
// [-2] void registerObject(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel14registerObjectERK7QStringP7QObject(void *this_, QString* id, QObject * object) {
  ((QWebChannel*)this_)->registerObject(*id, object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:66
// [-2] void deregisterObject(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel16deregisterObjectEP7QObject(void *this_, QObject * object) {
  ((QWebChannel*)this_)->deregisterObject(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:68
// [1] bool blockUpdates()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWebChannel12blockUpdatesEv(void *this_) {
  return (bool)((QWebChannel*)this_)->blockUpdates();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:70
// [-2] void setBlockUpdates(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel15setBlockUpdatesEb(void *this_, bool block) {
  ((QWebChannel*)this_)->setBlockUpdates(block);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:73
// [-2] void blockUpdatesChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel19blockUpdatesChangedEb(void *this_, bool block) {
  ((QWebChannel*)this_)->blockUpdatesChanged(block);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:76
// [-2] void connectTo(QWebChannelAbstractTransport *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel9connectToEP28QWebChannelAbstractTransport(void *this_, QWebChannelAbstractTransport * transport) {
  ((QWebChannel*)this_)->connectTo(transport);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:77
// [-2] void disconnectFrom(QWebChannelAbstractTransport *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel14disconnectFromEP28QWebChannelAbstractTransport(void *this_, QWebChannelAbstractTransport * transport) {
  ((QWebChannel*)this_)->disconnectFrom(transport);
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
