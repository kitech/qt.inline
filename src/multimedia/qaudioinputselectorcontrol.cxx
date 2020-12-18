//  header block begin

// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioinputselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioInputSelectorControl is pure virtual: true true
// QAudioInputSelectorControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAudioInputSelectorControl_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioInputSelectorControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioInputSelectorControl_t qt_meta_stringdata_MyQAudioInputSelectorControl = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAudioInputSelectorControl"
  },
  "MyQAudioInputSelectorControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioInputSelectorControl[] = {
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
class Q_DECL_EXPORT MyQAudioInputSelectorControl : public QAudioInputSelectorControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioInputSelectorControl::staticMetaObject,
  qt_meta_stringdata_MyQAudioInputSelectorControl.data,
  qt_meta_data_MyQAudioInputSelectorControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioInputSelectorControl.stringdata0))
      return static_cast<void*>(this);
  return QAudioInputSelectorControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioInputSelectorControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioInputSelectorControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QList<QString> availableInputs()
  virtual QList<QString> availableInputs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availableInputs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QString>){};}
    auto prv = (QList<QString>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QString>
    } else {
    return (QList<QString>){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString inputDescription(const QString &)
  virtual QString inputDescription(const QString & name) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputDescription", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString defaultInput()
  virtual QString defaultInput() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"defaultInput", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString activeInput()
  virtual QString activeInput() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"activeInput", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setActiveInput(const QString &)
  virtual void setActiveInput(const QString & name)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setActiveInput", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioInputSelectorControl::setActiveInput(name);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAudioInputSelectorControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioInputSelectorControl* qo = (MyQAudioInputSelectorControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioinputselectorcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm442240780 (42)_ZN26QAudioInputSelectorControl2trEPKcS1_i
//static
/*void qm442240780(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioInputSelectorControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioInputSelectorControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAudioInputSelectorControlD2Ev(void *this_)*/ {
  delete (QAudioInputSelectorControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioinputselectorcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
