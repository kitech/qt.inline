//  header block begin
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioinputselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioInputSelectorControl is pure virtual: true
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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
void C_QAudioInputSelectorControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioInputSelectorControl* qo = (MyQAudioInputSelectorControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:58
// [8] QList<QString> availableInputs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:59
// [8] QString inputDescription(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:60
// [8] QString defaultInput()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:61
// [8] QString activeInput()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:64
// [-2] void setActiveInput(const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl10metaObjectEv(void *this_) {
  return (void*)((QAudioInputSelectorControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAudioInputSelectorControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioInputSelectorControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN26QAudioInputSelectorControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioInputSelectorControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAudioInputSelectorControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioInputSelectorControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAudioInputSelectorControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioInputSelectorControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:56
// [-2] void ~QAudioInputSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControlD2Ev(void *this_) {
  delete (QAudioInputSelectorControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:58
// [8] QList<QString> availableInputs()
extern "C" Q_DECL_EXPORT
QList<QString>* C_ZNK26QAudioInputSelectorControl15availableInputsEv(void *this_) {
  auto rv = ((QAudioInputSelectorControl*)this_)->availableInputs();
return new QList<QString>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:59
// [8] QString inputDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl16inputDescriptionERK7QString(void *this_, QString* name) {
  auto rv = ((QAudioInputSelectorControl*)this_)->inputDescription(*name);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:60
// [8] QString defaultInput()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl12defaultInputEv(void *this_) {
  auto rv = ((QAudioInputSelectorControl*)this_)->defaultInput();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:61
// [8] QString activeInput()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAudioInputSelectorControl11activeInputEv(void *this_) {
  auto rv = ((QAudioInputSelectorControl*)this_)->activeInput();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:64
// [-2] void setActiveInput(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControl14setActiveInputERK7QString(void *this_, QString* name) {
  ((QAudioInputSelectorControl*)this_)->setActiveInput(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:67
// [-2] void activeInputChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControl18activeInputChangedERK7QString(void *this_, QString* name) {
  ((QAudioInputSelectorControl*)this_)->activeInputChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:68
// [-2] void availableInputsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN26QAudioInputSelectorControl22availableInputsChangedEv(void *this_) {
  ((QAudioInputSelectorControl*)this_)->availableInputsChanged();
}

//  main block end
