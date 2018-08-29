//  header block begin
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaavailabilitycontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaAvailabilityControl is pure virtual: true
// QMediaAvailabilityControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaAvailabilityControl_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaAvailabilityControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaAvailabilityControl_t qt_meta_stringdata_MyQMediaAvailabilityControl = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQMediaAvailabilityControl"
  },
  "MyQMediaAvailabilityControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaAvailabilityControl[] = {
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
class Q_DECL_EXPORT MyQMediaAvailabilityControl : public QMediaAvailabilityControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaAvailabilityControl::staticMetaObject,
  qt_meta_stringdata_MyQMediaAvailabilityControl.data,
  qt_meta_data_MyQMediaAvailabilityControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaAvailabilityControl.stringdata0))
      return static_cast<void*>(this);
  return QMediaAvailabilityControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaAvailabilityControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaAvailabilityControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QMultimedia::AvailabilityStatus availability()
  virtual QMultimedia::AvailabilityStatus availability() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availability", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMultimedia::AvailabilityStatus)(int)(irv);
      // Elaborated Enum QMultimedia::AvailabilityStatus
    } else {
    return (QMultimedia::AvailabilityStatus){};
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:59
// [4] QMultimedia::AvailabilityStatus availability()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QMediaAvailabilityControl10metaObjectEv(void *this_) {
  return (void*)((QMediaAvailabilityControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaAvailabilityControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaAvailabilityControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN25QMediaAvailabilityControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaAvailabilityControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaAvailabilityControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaAvailabilityControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaAvailabilityControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaAvailabilityControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:57
// [-2] void ~QMediaAvailabilityControl()
extern "C" Q_DECL_EXPORT
void C_ZN25QMediaAvailabilityControlD2Ev(void *this_) {
  delete (QMediaAvailabilityControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:59
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK25QMediaAvailabilityControl12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QMediaAvailabilityControl*)this_)->availability();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:62
// [-2] void availabilityChanged(QMultimedia::AvailabilityStatus)
extern "C" Q_DECL_EXPORT
void C_ZN25QMediaAvailabilityControl19availabilityChangedEN11QMultimedia18AvailabilityStatusE(void *this_, QMultimedia::AvailabilityStatus availability) {
  ((QMediaAvailabilityControl*)this_)->availabilityChanged(availability);
}

//  main block end
