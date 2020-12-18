//  header block begin

// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediastreamscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaStreamsControl is pure virtual: true true
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
  virtual ~MyQMediaStreamsControl() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" Q_DECL_EXPORT
void* C_QMediaStreamsControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaStreamsControl* qo = (MyQMediaStreamsControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediastreamscontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm1259491142 (36)_ZN20QMediaStreamsControl2trEPKcS1_i
//static
/*void qm1259491142(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaStreamsControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaStreamsControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QMediaStreamsControlD2Ev(void *this_)*/ {
  delete (QMediaStreamsControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediastreamscontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
