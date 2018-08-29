//  header block begin
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiooutputselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioOutputSelectorControl is pure virtual: true
// QAudioOutputSelectorControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAudioOutputSelectorControl_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioOutputSelectorControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioOutputSelectorControl_t qt_meta_stringdata_MyQAudioOutputSelectorControl = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQAudioOutputSelectorControl"
  },
  "MyQAudioOutputSelectorControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioOutputSelectorControl[] = {
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
class Q_DECL_EXPORT MyQAudioOutputSelectorControl : public QAudioOutputSelectorControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioOutputSelectorControl::staticMetaObject,
  qt_meta_stringdata_MyQAudioOutputSelectorControl.data,
  qt_meta_data_MyQAudioOutputSelectorControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioOutputSelectorControl.stringdata0))
      return static_cast<void*>(this);
  return QAudioOutputSelectorControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioOutputSelectorControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioOutputSelectorControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QList<QString> availableOutputs()
  virtual QList<QString> availableOutputs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availableOutputs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QString>){};}
    auto prv = (QList<QString>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QString>
    } else {
    return (QList<QString>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString outputDescription(const QString &)
  virtual QString outputDescription(const QString & name) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"outputDescription", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString defaultOutput()
  virtual QString defaultOutput() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"defaultOutput", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString activeOutput()
  virtual QString activeOutput() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"activeOutput", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setActiveOutput(const QString &)
  virtual void setActiveOutput(const QString & name)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setActiveOutput", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioOutputSelectorControl::setActiveOutput(name);
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:58
// [8] QList<QString> availableOutputs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:59
// [8] QString outputDescription(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:60
// [8] QString defaultOutput()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:61
// [8] QString activeOutput()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:64
// [-2] void setActiveOutput(const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAudioOutputSelectorControl10metaObjectEv(void *this_) {
  return (void*)((QAudioOutputSelectorControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAudioOutputSelectorControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioOutputSelectorControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN27QAudioOutputSelectorControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioOutputSelectorControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAudioOutputSelectorControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioOutputSelectorControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAudioOutputSelectorControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioOutputSelectorControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:56
// [-2] void ~QAudioOutputSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControlD2Ev(void *this_) {
  delete (QAudioOutputSelectorControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:58
// [8] QList<QString> availableOutputs()
extern "C" Q_DECL_EXPORT
QList<QString>* C_ZNK27QAudioOutputSelectorControl16availableOutputsEv(void *this_) {
  auto rv = ((QAudioOutputSelectorControl*)this_)->availableOutputs();
return new QList<QString>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:59
// [8] QString outputDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAudioOutputSelectorControl17outputDescriptionERK7QString(void *this_, QString* name) {
  auto rv = ((QAudioOutputSelectorControl*)this_)->outputDescription(*name);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:60
// [8] QString defaultOutput()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAudioOutputSelectorControl13defaultOutputEv(void *this_) {
  auto rv = ((QAudioOutputSelectorControl*)this_)->defaultOutput();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:61
// [8] QString activeOutput()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAudioOutputSelectorControl12activeOutputEv(void *this_) {
  auto rv = ((QAudioOutputSelectorControl*)this_)->activeOutput();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:64
// [-2] void setActiveOutput(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControl15setActiveOutputERK7QString(void *this_, QString* name) {
  ((QAudioOutputSelectorControl*)this_)->setActiveOutput(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:67
// [-2] void activeOutputChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControl19activeOutputChangedERK7QString(void *this_, QString* name) {
  ((QAudioOutputSelectorControl*)this_)->activeOutputChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:68
// [-2] void availableOutputsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN27QAudioOutputSelectorControl23availableOutputsChangedEv(void *this_) {
  ((QAudioOutputSelectorControl*)this_)->availableOutputsChanged();
}

//  main block end
