//  header block begin

// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetadatawritercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMetaDataWriterControl is pure virtual: true
// QMetaDataWriterControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMetaDataWriterControl_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMetaDataWriterControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMetaDataWriterControl_t qt_meta_stringdata_MyQMetaDataWriterControl = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQMetaDataWriterControl"
  },
  "MyQMetaDataWriterControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMetaDataWriterControl[] = {
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
class Q_DECL_EXPORT MyQMetaDataWriterControl : public QMetaDataWriterControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMetaDataWriterControl::staticMetaObject,
  qt_meta_stringdata_MyQMetaDataWriterControl.data,
  qt_meta_data_MyQMetaDataWriterControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMetaDataWriterControl.stringdata0))
      return static_cast<void*>(this);
  return QMetaDataWriterControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMetaDataWriterControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMetaDataWriterControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isWritable()
  virtual bool isWritable() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isWritable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isMetaDataAvailable()
  virtual bool isMetaDataAvailable() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isMetaDataAvailable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant metaData(const QString &)
  virtual QVariant metaData(const QString & key) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaData", &handled, 1, (uint64_t)&key, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setMetaData(const QString &, const QVariant &)
  virtual void setMetaData(const QString & key, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMetaData", &handled, 2, (uint64_t)&key, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMetaDataWriterControl::setMetaData(key, value);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList availableMetaData()
  virtual QStringList availableMetaData() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availableMetaData", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMetaDataWriterControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMetaDataWriterControl* qo = (MyQMetaDataWriterControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:62
// [1] bool isWritable()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:63
// [1] bool isMetaDataAvailable()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:65
// [16] QVariant metaData(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:66
// [-2] void setMetaData(const QString &, const QVariant &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:67
// [8] QStringList availableMetaData()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataWriterControl10metaObjectEv(void *this_) {
  return (void*)((QMetaDataWriterControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMetaDataWriterControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMetaDataWriterControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QMetaDataWriterControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMetaDataWriterControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMetaDataWriterControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMetaDataWriterControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMetaDataWriterControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMetaDataWriterControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:60
// [-2] void ~QMetaDataWriterControl()
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControlD2Ev(void *this_) {
  delete (QMetaDataWriterControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:62
// [1] bool isWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QMetaDataWriterControl10isWritableEv(void *this_) {
  return (bool)((QMetaDataWriterControl*)this_)->isWritable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:63
// [1] bool isMetaDataAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QMetaDataWriterControl19isMetaDataAvailableEv(void *this_) {
  return (bool)((QMetaDataWriterControl*)this_)->isMetaDataAvailable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:65
// [16] QVariant metaData(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataWriterControl8metaDataERK7QString(void *this_, QString* key) {
  auto rv = ((QMetaDataWriterControl*)this_)->metaData(*key);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:66
// [-2] void setMetaData(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl11setMetaDataERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMetaDataWriterControl*)this_)->setMetaData(*key, *value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:67
// [8] QStringList availableMetaData()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMetaDataWriterControl17availableMetaDataEv(void *this_) {
  auto rv = ((QMetaDataWriterControl*)this_)->availableMetaData();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:70
// [-2] void metaDataChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl15metaDataChangedEv(void *this_) {
  ((QMetaDataWriterControl*)this_)->metaDataChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:71
// [-2] void metaDataChanged(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl15metaDataChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMetaDataWriterControl*)this_)->metaDataChanged(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:73
// [-2] void writableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl15writableChangedEb(void *this_, bool writable) {
  ((QMetaDataWriterControl*)this_)->writableChanged(writable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatawritercontrol.h:74
// [-2] void metaDataAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN22QMetaDataWriterControl24metaDataAvailableChangedEb(void *this_, bool available) {
  ((QMetaDataWriterControl*)this_)->metaDataAvailableChanged(available);
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
