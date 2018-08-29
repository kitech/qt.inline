//  header block begin
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediastreamscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaStreamsControl is pure virtual: true
// QMediaStreamsControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaStreamsControl_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaStreamsControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaStreamsControl_t qt_meta_stringdata_MyQMediaStreamsControl = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQMediaStreamsControl"
  },
  "MyQMediaStreamsControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaStreamsControl[] = {
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
class Q_DECL_EXPORT MyQMediaStreamsControl : public QMediaStreamsControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaStreamsControl::staticMetaObject,
  qt_meta_stringdata_MyQMediaStreamsControl.data,
  qt_meta_data_MyQMediaStreamsControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaStreamsControl.stringdata0))
      return static_cast<void*>(this);
  return QMediaStreamsControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaStreamsControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaStreamsControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int streamCount()
  virtual int streamCount()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"streamCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QMediaStreamsControl::StreamType streamType(int)
  virtual QMediaStreamsControl::StreamType streamType(int streamNumber)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"streamType", &handled, 1, (uint64_t)streamNumber, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaStreamsControl::StreamType)(int)(irv);
      // Enum Enum QMediaStreamsControl::StreamType
    } else {
    return (QMediaStreamsControl::StreamType){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant metaData(int, const QString &)
  virtual QVariant metaData(int streamNumber, const QString & key)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaData", &handled, 2, (uint64_t)streamNumber, (uint64_t)&key, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isActive(int)
  virtual bool isActive(int streamNumber)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isActive", &handled, 1, (uint64_t)streamNumber, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setActive(int, bool)
  virtual void setActive(int streamNumber, bool state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setActive", &handled, 2, (uint64_t)streamNumber, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaStreamsControl::setActive(streamNumber, state);
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:63
// [4] int streamCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:64
// [4] QMediaStreamsControl::StreamType streamType(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:66
// [16] QVariant metaData(int, const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:68
// [1] bool isActive(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:69
// [-2] void setActive(int, bool)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QMediaStreamsControl10metaObjectEv(void *this_) {
  return (void*)((QMediaStreamsControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QMediaStreamsControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaStreamsControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QMediaStreamsControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaStreamsControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QMediaStreamsControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaStreamsControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QMediaStreamsControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaStreamsControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:61
// [-2] void ~QMediaStreamsControl()
extern "C" Q_DECL_EXPORT
void C_ZN20QMediaStreamsControlD2Ev(void *this_) {
  delete (QMediaStreamsControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:63
// [4] int streamCount()
extern "C" Q_DECL_EXPORT
int C_ZN20QMediaStreamsControl11streamCountEv(void *this_) {
  return (int)((QMediaStreamsControl*)this_)->streamCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:64
// [4] QMediaStreamsControl::StreamType streamType(int)
extern "C" Q_DECL_EXPORT
QMediaStreamsControl::StreamType C_ZN20QMediaStreamsControl10streamTypeEi(void *this_, int streamNumber) {
  return (QMediaStreamsControl::StreamType)((QMediaStreamsControl*)this_)->streamType(streamNumber);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:66
// [16] QVariant metaData(int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QMediaStreamsControl8metaDataEiRK7QString(void *this_, int streamNumber, QString* key) {
  auto rv = ((QMediaStreamsControl*)this_)->metaData(streamNumber, *key);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:68
// [1] bool isActive(int)
extern "C" Q_DECL_EXPORT
bool C_ZN20QMediaStreamsControl8isActiveEi(void *this_, int streamNumber) {
  return (bool)((QMediaStreamsControl*)this_)->isActive(streamNumber);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:69
// [-2] void setActive(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QMediaStreamsControl9setActiveEib(void *this_, int streamNumber, bool state) {
  ((QMediaStreamsControl*)this_)->setActive(streamNumber, state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:72
// [-2] void streamsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN20QMediaStreamsControl14streamsChangedEv(void *this_) {
  ((QMediaStreamsControl*)this_)->streamsChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:73
// [-2] void activeStreamsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN20QMediaStreamsControl20activeStreamsChangedEv(void *this_) {
  ((QMediaStreamsControl*)this_)->activeStreamsChanged();
}

//  main block end
