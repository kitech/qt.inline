//  header block begin

// since 0x040700
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkconfigmanager.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkConfigurationManager is pure virtual: false
// QNetworkConfigurationManager has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkConfigurationManager_t {
  QByteArrayData data[1];
  char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkConfigurationManager_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkConfigurationManager_t qt_meta_stringdata_MyQNetworkConfigurationManager = {
   {
  QT_MOC_LITERAL(0, 0, 30), // "MyQNetworkConfigurationManager"
  },
  "MyQNetworkConfigurationManager"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkConfigurationManager[] = {
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
class Q_DECL_EXPORT MyQNetworkConfigurationManager : public QNetworkConfigurationManager {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QNetworkConfigurationManager::staticMetaObject,
  qt_meta_stringdata_MyQNetworkConfigurationManager.data,
  qt_meta_data_MyQNetworkConfigurationManager,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQNetworkConfigurationManager.stringdata0))
      return static_cast<void*>(this);
  return QNetworkConfigurationManager::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QNetworkConfigurationManager::qt_metacall(_c, _id, _a);
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
  virtual ~MyQNetworkConfigurationManager() {}
// void QNetworkConfigurationManager(QObject *)
MyQNetworkConfigurationManager(QObject * parent) : QNetworkConfigurationManager(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QNetworkConfigurationManager_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQNetworkConfigurationManager* qo = (MyQNetworkConfigurationManager*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QNetworkConfigurationManager10metaObjectEv(void *this_) {
  return (void*)((QNetworkConfigurationManager*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QNetworkConfigurationManager11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QNetworkConfigurationManager*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN28QNetworkConfigurationManager11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QNetworkConfigurationManager*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QNetworkConfigurationManager2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkConfigurationManager::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QNetworkConfigurationManager6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkConfigurationManager::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:69
// [-2] void QNetworkConfigurationManager(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QNetworkConfigurationManagerC2EP7QObject(QObject * parent) {
  return  new MyQNetworkConfigurationManager(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:70
// [-2] void ~QNetworkConfigurationManager()
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManagerD2Ev(void *this_) {
  delete (QNetworkConfigurationManager*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:72
// [4] QNetworkConfigurationManager::Capabilities capabilities()
extern "C" Q_DECL_EXPORT
QNetworkConfigurationManager::Capabilities C_ZNK28QNetworkConfigurationManager12capabilitiesEv(void *this_) {
  return (QNetworkConfigurationManager::Capabilities)((QNetworkConfigurationManager*)this_)->capabilities();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:74
// [8] QNetworkConfiguration defaultConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QNetworkConfigurationManager20defaultConfigurationEv(void *this_) {
  auto rv = ((QNetworkConfigurationManager*)this_)->defaultConfiguration();
return new QNetworkConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:75
// [-2] QList<QNetworkConfiguration> allConfigurations(QNetworkConfiguration::StateFlags)
extern "C" Q_DECL_EXPORT
QList<QNetworkConfiguration>* C_ZNK28QNetworkConfigurationManager17allConfigurationsE6QFlagsIN21QNetworkConfiguration9StateFlagEE(void *this_, QFlags<QNetworkConfiguration::StateFlag> flags) {
  auto rv = ((QNetworkConfigurationManager*)this_)->allConfigurations(flags);
return new QList<QNetworkConfiguration>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:76
// [8] QNetworkConfiguration configurationFromIdentifier(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK28QNetworkConfigurationManager27configurationFromIdentifierERK7QString(void *this_, QString* identifier) {
  auto rv = ((QNetworkConfigurationManager*)this_)->configurationFromIdentifier(*identifier);
return new QNetworkConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:78
// [1] bool isOnline()
extern "C" Q_DECL_EXPORT
bool C_ZNK28QNetworkConfigurationManager8isOnlineEv(void *this_) {
  return (bool)((QNetworkConfigurationManager*)this_)->isOnline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:81
// [-2] void updateConfigurations()
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager20updateConfigurationsEv(void *this_) {
  ((QNetworkConfigurationManager*)this_)->updateConfigurations();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:84
// [-2] void configurationAdded(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* config) {
  ((QNetworkConfigurationManager*)this_)->configurationAdded(*config);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:85
// [-2] void configurationRemoved(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* config) {
  ((QNetworkConfigurationManager*)this_)->configurationRemoved(*config);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:86
// [-2] void configurationChanged(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* config) {
  ((QNetworkConfigurationManager*)this_)->configurationChanged(*config);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:87
// [-2] void onlineStateChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager18onlineStateChangedEb(void *this_, bool isOnline) {
  ((QNetworkConfigurationManager*)this_)->onlineStateChanged(isOnline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:88
// [-2] void updateCompleted()
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager15updateCompletedEv(void *this_) {
  ((QNetworkConfigurationManager*)this_)->updateCompleted();
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
