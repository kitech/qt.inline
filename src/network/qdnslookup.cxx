//  header block begin
// since 0x050000
// /usr/include/qt/QtNetwork/qdnslookup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsLookup is pure virtual: false
// QDnsLookup has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQDnsLookup_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDnsLookup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDnsLookup_t qt_meta_stringdata_MyQDnsLookup = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQDnsLookup"
  },
  "MyQDnsLookup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDnsLookup[] = {
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
class Q_DECL_EXPORT MyQDnsLookup : public QDnsLookup {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDnsLookup::staticMetaObject,
  qt_meta_stringdata_MyQDnsLookup.data,
  qt_meta_data_MyQDnsLookup,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDnsLookup.stringdata0))
      return static_cast<void*>(this);
  return QDnsLookup::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDnsLookup::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDnsLookup() {}
// void QDnsLookup(QObject *)
MyQDnsLookup(QObject * parent) : QDnsLookup(parent) {}
// void QDnsLookup(QDnsLookup::Type, const QString &, QObject *)
MyQDnsLookup(QDnsLookup::Type type_, const QString & name, QObject * parent) : QDnsLookup(type_, name, parent) {}
// void QDnsLookup(QDnsLookup::Type, const QString &, const QHostAddress &, QObject *)
MyQDnsLookup(QDnsLookup::Type type_, const QString & name, const QHostAddress & nameserver, QObject * parent) : QDnsLookup(type_, name, nameserver, parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:186
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QDnsLookup10metaObjectEv(void *this_) {
  return (void*)((QDnsLookup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:186
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QDnsLookup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDnsLookup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:186
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QDnsLookup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDnsLookup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:186
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QDnsLookup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDnsLookup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:186
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QDnsLookup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDnsLookup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:221
// [-2] void QDnsLookup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QDnsLookupC2EP7QObject(QObject * parent) {
  return  new MyQDnsLookup(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:222
// [-2] void QDnsLookup(QDnsLookup::Type, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QDnsLookupC2ENS_4TypeERK7QStringP7QObject(QDnsLookup::Type type_, QString* name, QObject * parent) {
  return  new MyQDnsLookup(type_, *name, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:223
// [-2] void QDnsLookup(QDnsLookup::Type, const QString &, const QHostAddress &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QDnsLookupC2ENS_4TypeERK7QStringRK12QHostAddressP7QObject(QDnsLookup::Type type_, QString* name, QHostAddress* nameserver, QObject * parent) {
  return  new MyQDnsLookup(type_, *name, *nameserver, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:224
// [-2] void ~QDnsLookup()
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookupD2Ev(void *this_) {
  delete (QDnsLookup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:226
// [4] QDnsLookup::Error error()
extern "C" Q_DECL_EXPORT
QDnsLookup::Error C_ZNK10QDnsLookup5errorEv(void *this_) {
  return (QDnsLookup::Error)((QDnsLookup*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:227
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QDnsLookup11errorStringEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:228
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QDnsLookup10isFinishedEv(void *this_) {
  return (bool)((QDnsLookup*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:230
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QDnsLookup4nameEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:231
// [-2] void setName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup7setNameERK7QString(void *this_, QString* name) {
  ((QDnsLookup*)this_)->setName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:233
// [4] QDnsLookup::Type type()
extern "C" Q_DECL_EXPORT
QDnsLookup::Type C_ZNK10QDnsLookup4typeEv(void *this_) {
  return (QDnsLookup::Type)((QDnsLookup*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:234
// [-2] void setType(QDnsLookup::Type)
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup7setTypeENS_4TypeE(void *this_, QDnsLookup::Type arg0) {
  ((QDnsLookup*)this_)->setType(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:236
// [8] QHostAddress nameserver()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QDnsLookup10nameserverEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->nameserver();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:237
// [-2] void setNameserver(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup13setNameserverERK12QHostAddress(void *this_, QHostAddress* nameserver) {
  ((QDnsLookup*)this_)->setNameserver(*nameserver);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:239
// [-2] QList<QDnsDomainNameRecord> canonicalNameRecords()
extern "C" Q_DECL_EXPORT
QList<QDnsDomainNameRecord>* C_ZNK10QDnsLookup20canonicalNameRecordsEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->canonicalNameRecords();
return new QList<QDnsDomainNameRecord>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:240
// [-2] QList<QDnsHostAddressRecord> hostAddressRecords()
extern "C" Q_DECL_EXPORT
QList<QDnsHostAddressRecord>* C_ZNK10QDnsLookup18hostAddressRecordsEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->hostAddressRecords();
return new QList<QDnsHostAddressRecord>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:241
// [-2] QList<QDnsMailExchangeRecord> mailExchangeRecords()
extern "C" Q_DECL_EXPORT
QList<QDnsMailExchangeRecord>* C_ZNK10QDnsLookup19mailExchangeRecordsEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->mailExchangeRecords();
return new QList<QDnsMailExchangeRecord>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:242
// [-2] QList<QDnsDomainNameRecord> nameServerRecords()
extern "C" Q_DECL_EXPORT
QList<QDnsDomainNameRecord>* C_ZNK10QDnsLookup17nameServerRecordsEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->nameServerRecords();
return new QList<QDnsDomainNameRecord>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:243
// [-2] QList<QDnsDomainNameRecord> pointerRecords()
extern "C" Q_DECL_EXPORT
QList<QDnsDomainNameRecord>* C_ZNK10QDnsLookup14pointerRecordsEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->pointerRecords();
return new QList<QDnsDomainNameRecord>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:244
// [-2] QList<QDnsServiceRecord> serviceRecords()
extern "C" Q_DECL_EXPORT
QList<QDnsServiceRecord>* C_ZNK10QDnsLookup14serviceRecordsEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->serviceRecords();
return new QList<QDnsServiceRecord>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:245
// [-2] QList<QDnsTextRecord> textRecords()
extern "C" Q_DECL_EXPORT
QList<QDnsTextRecord>* C_ZNK10QDnsLookup11textRecordsEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->textRecords();
return new QList<QDnsTextRecord>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:249
// [-2] void abort()
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup5abortEv(void *this_) {
  ((QDnsLookup*)this_)->abort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:250
// [-2] void lookup()
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup6lookupEv(void *this_) {
  ((QDnsLookup*)this_)->lookup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:253
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup8finishedEv(void *this_) {
  ((QDnsLookup*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:254
// [-2] void nameChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup11nameChangedERK7QString(void *this_, QString* name) {
  ((QDnsLookup*)this_)->nameChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:255
// [-2] void typeChanged(QDnsLookup::Type)
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup11typeChangedENS_4TypeE(void *this_, QDnsLookup::Type type_) {
  ((QDnsLookup*)this_)->typeChanged(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:256
// [-2] void nameserverChanged(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN10QDnsLookup17nameserverChangedERK12QHostAddress(void *this_, QHostAddress* nameserver) {
  ((QDnsLookup*)this_)->nameserverChanged(*nameserver);
}

//  main block end
