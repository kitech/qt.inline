//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(settings)
// /usr/include/qt/QtCore/qsettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsettings.h>
#include <QtCore>
#include "callback_inherit.h"

// QSettings is pure virtual: false false
// QSettings has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSettings_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSettings_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSettings_t qt_meta_stringdata_MyQSettings = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQSettings"
  },
  "MyQSettings"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSettings[] = {
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
class Q_DECL_EXPORT MyQSettings : public QSettings {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSettings::staticMetaObject,
  qt_meta_stringdata_MyQSettings.data,
  qt_meta_data_MyQSettings,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSettings.stringdata0))
      return static_cast<void*>(this);
  return QSettings::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSettings::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSettings() {}
// void QSettings(const QString &, const QString &, QObject *)
MyQSettings(const QString & organization, const QString & application, QObject * parent) : QSettings(organization, application, parent) {}
// void QSettings(QSettings::Scope, const QString &, const QString &, QObject *)
MyQSettings(QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) : QSettings(scope, organization, application, parent) {}
// void QSettings(QSettings::Format, QSettings::Scope, const QString &, const QString &, QObject *)
MyQSettings(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) : QSettings(format, scope, organization, application, parent) {}
// void QSettings(const QString &, QSettings::Format, QObject *)
MyQSettings(const QString & fileName, QSettings::Format format, QObject * parent) : QSettings(fileName, format, parent) {}
// void QSettings(QObject *)
MyQSettings(QObject * parent) : QSettings(parent) {}
// void QSettings(QSettings::Scope, QObject *)
MyQSettings(QSettings::Scope scope, QObject * parent) : QSettings(scope, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSettings::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSettings_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSettings* qo = (MyQSettings*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsettings(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:68
// [8] QString tr(const char *, const char *, int) 
// (12)qm3418696169 (24)_ZN9QSettings2trEPKcS1_i
//static
/*void qm3418696169(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSettings::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSettings::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:124
// [-2] void QSettings(const QString &, const QString &, QObject *) 
// (11)qm155933828 (38)_ZN9QSettingsC2ERK7QStringS2_P7QObject
/*void* qm155933828(const QString & organization, const QString & application, QObject * parent)*/{
  auto _nilp = (MyQSettings*)(0);
  const QString & organization = *(const QString *)this_; const QString & application = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSettings(organization, application, parent);
  this_ =  new MyQSettings(organization, application, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:126
// [-2] void QSettings(QSettings::Scope, const QString &, const QString &, QObject *) 
// (11)qm531173260 (48)_ZN9QSettingsC2ENS_5ScopeERK7QStringS3_P7QObject
/*void* qm531173260(QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent)*/{
  auto _nilp = (MyQSettings*)(0);
  QSettings::Scope scope = *(QSettings::Scope*)this_; const QString & organization = *(const QString *)this_; const QString & application = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSettings(scope, organization, application, parent);
  this_ =  new MyQSettings(scope, organization, application, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:128
// [-2] void QSettings(QSettings::Format, QSettings::Scope, const QString &, const QString &, QObject *) 
// (12)qm2633384120 (59)_ZN9QSettingsC2ENS_6FormatENS_5ScopeERK7QStringS4_P7QObject
/*void* qm2633384120(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent)*/{
  auto _nilp = (MyQSettings*)(0);
  QSettings::Format format = *(QSettings::Format*)this_; QSettings::Scope scope = *(QSettings::Scope*)this_; const QString & organization = *(const QString *)this_; const QString & application = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSettings(format, scope, organization, application, parent);
  this_ =  new MyQSettings(format, scope, organization, application, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:130
// [-2] void QSettings(const QString &, QSettings::Format, QObject *) 
// (12)qm4242197099 (46)_ZN9QSettingsC2ERK7QStringNS_6FormatEP7QObject
/*void* qm4242197099(const QString & fileName, QSettings::Format format, QObject * parent)*/{
  auto _nilp = (MyQSettings*)(0);
  const QString & fileName = *(const QString *)this_; QSettings::Format format = *(QSettings::Format*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSettings(fileName, format, parent);
  this_ =  new MyQSettings(fileName, format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:131
// [-2] void QSettings(QObject *) 
// (12)qm2343402275 (25)_ZN9QSettingsC2EP7QObject
/*void* qm2343402275(QObject * parent)*/{
  auto _nilp = (MyQSettings*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QSettings(parent);
  this_ =  new MyQSettings(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:132
// [-2] void QSettings(QSettings::Scope, QObject *) 
// (12)qm1692532549 (35)_ZN9QSettingsC2ENS_5ScopeEP7QObject
/*void* qm1692532549(QSettings::Scope scope, QObject * parent)*/{
  auto _nilp = (MyQSettings*)(0);
  QSettings::Scope scope = *(QSettings::Scope*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSettings(scope, parent);
  this_ =  new MyQSettings(scope, parent);
}


/*void C_ZN9QSettingsD2Ev(void *this_)*/ {
  delete (QSettings*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsettings
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(settings)
#endif // #ifndef QT_MINIMAL
//  footer block end
