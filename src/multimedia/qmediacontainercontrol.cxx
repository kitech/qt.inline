//  header block begin
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediacontainercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaContainerControl is pure virtual: true
// QMediaContainerControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaContainerControl_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaContainerControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaContainerControl_t qt_meta_stringdata_MyQMediaContainerControl = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQMediaContainerControl"
  },
  "MyQMediaContainerControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaContainerControl[] = {
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
class Q_DECL_EXPORT MyQMediaContainerControl : public QMediaContainerControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaContainerControl::staticMetaObject,
  qt_meta_stringdata_MyQMediaContainerControl.data,
  qt_meta_data_MyQMediaContainerControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaContainerControl.stringdata0))
      return static_cast<void*>(this);
  return QMediaContainerControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaContainerControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaContainerControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList supportedContainers()
  virtual QStringList supportedContainers() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedContainers", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString containerFormat()
  virtual QString containerFormat() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"containerFormat", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setContainerFormat(const QString &)
  virtual void setContainerFormat(const QString & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setContainerFormat", &handled, 1, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaContainerControl::setContainerFormat(format);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString containerDescription(const QString &)
  virtual QString containerDescription(const QString & formatMimeType) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"containerDescription", &handled, 1, (uint64_t)&formatMimeType, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMediaContainerControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaContainerControl* qo = (MyQMediaContainerControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:58
// [8] QStringList supportedContainers()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:59
// [8] QString containerFormat()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:60
// [-2] void setContainerFormat(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:62
// [8] QString containerDescription(const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMediaContainerControl10metaObjectEv(void *this_) {
  return (void*)((QMediaContainerControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMediaContainerControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaContainerControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QMediaContainerControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaContainerControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMediaContainerControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaContainerControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QMediaContainerControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaContainerControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:56
// [-2] void ~QMediaContainerControl()
extern "C" Q_DECL_EXPORT
void C_ZN22QMediaContainerControlD2Ev(void *this_) {
  delete (QMediaContainerControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:58
// [8] QStringList supportedContainers()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMediaContainerControl19supportedContainersEv(void *this_) {
  auto rv = ((QMediaContainerControl*)this_)->supportedContainers();
return new QStringList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:59
// [8] QString containerFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMediaContainerControl15containerFormatEv(void *this_) {
  auto rv = ((QMediaContainerControl*)this_)->containerFormat();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:60
// [-2] void setContainerFormat(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN22QMediaContainerControl18setContainerFormatERK7QString(void *this_, QString* format) {
  ((QMediaContainerControl*)this_)->setContainerFormat(*format);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontainercontrol.h:62
// [8] QString containerDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QMediaContainerControl20containerDescriptionERK7QString(void *this_, QString* formatMimeType) {
  auto rv = ((QMediaContainerControl*)this_)->containerDescription(*formatMimeType);
return new QString(rv);
}

//  main block end
