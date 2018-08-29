//  header block begin
// since 0x050400
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebchannelabstracttransport.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QWebChannelAbstractTransport is pure virtual: true
// QWebChannelAbstractTransport has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWebChannelAbstractTransport_t {
  QByteArrayData data[1];
  char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebChannelAbstractTransport_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebChannelAbstractTransport_t qt_meta_stringdata_MyQWebChannelAbstractTransport = {
   {
  QT_MOC_LITERAL(0, 0, 30), // "MyQWebChannelAbstractTransport"
  },
  "MyQWebChannelAbstractTransport"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebChannelAbstractTransport[] = {
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
class Q_DECL_EXPORT MyQWebChannelAbstractTransport : public QWebChannelAbstractTransport {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWebChannelAbstractTransport::staticMetaObject,
  qt_meta_stringdata_MyQWebChannelAbstractTransport.data,
  qt_meta_data_MyQWebChannelAbstractTransport,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWebChannelAbstractTransport.stringdata0))
      return static_cast<void*>(this);
  return QWebChannelAbstractTransport::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWebChannelAbstractTransport::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWebChannelAbstractTransport() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void sendMessage(const QJsonObject &)
  virtual void sendMessage(const QJsonObject & message)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sendMessage", &handled, 1, (uint64_t)&message, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QWebChannelAbstractTransport::sendMessage(message);
  }
  }

// void QWebChannelAbstractTransport(QObject *)
MyQWebChannelAbstractTransport(QObject * parent) : QWebChannelAbstractTransport(parent) {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:57
// [-2] void sendMessage(const QJsonObject &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QWebChannelAbstractTransport10metaObjectEv(void *this_) {
  return (void*)((QWebChannelAbstractTransport*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QWebChannelAbstractTransport11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebChannelAbstractTransport*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN28QWebChannelAbstractTransport11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebChannelAbstractTransport*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QWebChannelAbstractTransport2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebChannelAbstractTransport::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QWebChannelAbstractTransport6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebChannelAbstractTransport::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:53
// [-2] void QWebChannelAbstractTransport(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QWebChannelAbstractTransportC2EP7QObject(QObject * parent) {
  return  new MyQWebChannelAbstractTransport(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:54
// [-2] void ~QWebChannelAbstractTransport()
extern "C" Q_DECL_EXPORT
void C_ZN28QWebChannelAbstractTransportD2Ev(void *this_) {
  delete (QWebChannelAbstractTransport*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:57
// [-2] void sendMessage(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void C_ZN28QWebChannelAbstractTransport11sendMessageERK11QJsonObject(void *this_, QJsonObject* message) {
  ((QWebChannelAbstractTransport*)this_)->sendMessage(*message);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:60
// [-2] void messageReceived(const QJsonObject &, QWebChannelAbstractTransport *)
extern "C" Q_DECL_EXPORT
void C_ZN28QWebChannelAbstractTransport15messageReceivedERK11QJsonObjectPS_(void *this_, QJsonObject* message, QWebChannelAbstractTransport * transport) {
  ((QWebChannelAbstractTransport*)this_)->messageReceived(*message, transport);
}

//  main block end
