//  header block begin
// /usr/include/qt/QtMultimedia/qmediaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaobject.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaObject is pure virtual: false
// QMediaObject has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaObject_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaObject_t qt_meta_stringdata_MyQMediaObject = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQMediaObject"
  },
  "MyQMediaObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaObject[] = {
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
class Q_DECL_EXPORT MyQMediaObject : public QMediaObject {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaObject::staticMetaObject,
  qt_meta_stringdata_MyQMediaObject.data,
  qt_meta_data_MyQMediaObject,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaObject.stringdata0))
      return static_cast<void*>(this);
  return QMediaObject::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaObject::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaObject() {}
};

extern "C" Q_DECL_EXPORT
void* C_QMediaObject_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaObject* qo = (MyQMediaObject*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaObject10metaObjectEv(void *this_) {
  return (void*)((QMediaObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QMediaObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:61
// [-2] void ~QMediaObject()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObjectD2Ev(void *this_) {
  delete (QMediaObject*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:63
// [1] bool isAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaObject11isAvailableEv(void *this_) {
  return (bool)((QMediaObject*)this_)->isAvailable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:64
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK12QMediaObject12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QMediaObject*)this_)->availability();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:66
// [8] QMediaService * service()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaObject7serviceEv(void *this_) {
  return (void*)((QMediaObject*)this_)->service();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:68
// [4] int notifyInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK12QMediaObject14notifyIntervalEv(void *this_) {
  return (int)((QMediaObject*)this_)->notifyInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:69
// [-2] void setNotifyInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject17setNotifyIntervalEi(void *this_, int milliSeconds) {
  ((QMediaObject*)this_)->setNotifyInterval(milliSeconds);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:71
// [1] bool bind(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QMediaObject4bindEP7QObject(void *this_, QObject * arg0) {
  return (bool)((QMediaObject*)this_)->bind(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:72
// [-2] void unbind(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject6unbindEP7QObject(void *this_, QObject * arg0) {
  ((QMediaObject*)this_)->unbind(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:74
// [1] bool isMetaDataAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaObject19isMetaDataAvailableEv(void *this_) {
  return (bool)((QMediaObject*)this_)->isMetaDataAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:76
// [16] QVariant metaData(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaObject8metaDataERK7QString(void *this_, QString* key) {
  auto rv = ((QMediaObject*)this_)->metaData(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:77
// [8] QStringList availableMetaData()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaObject17availableMetaDataEv(void *this_) {
  auto rv = ((QMediaObject*)this_)->availableMetaData();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:80
// [-2] void notifyIntervalChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject21notifyIntervalChangedEi(void *this_, int milliSeconds) {
  ((QMediaObject*)this_)->notifyIntervalChanged(milliSeconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:82
// [-2] void metaDataAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject24metaDataAvailableChangedEb(void *this_, bool available) {
  ((QMediaObject*)this_)->metaDataAvailableChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:83
// [-2] void metaDataChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject15metaDataChangedEv(void *this_) {
  ((QMediaObject*)this_)->metaDataChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:84
// [-2] void metaDataChanged(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject15metaDataChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMediaObject*)this_)->metaDataChanged(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:86
// [-2] void availabilityChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject19availabilityChangedEb(void *this_, bool available) {
  ((QMediaObject*)this_)->availabilityChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:87
// [-2] void availabilityChanged(QMultimedia::AvailabilityStatus)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject19availabilityChangedEN11QMultimedia18AvailabilityStatusE(void *this_, QMultimedia::AvailabilityStatus availability) {
  ((QMediaObject*)this_)->availabilityChanged(availability);
}

//  main block end
