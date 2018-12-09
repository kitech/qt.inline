//  header block begin

// /usr/include/qt/QtMultimedia/qaudiorecorder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiorecorder.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioRecorder is pure virtual: false
// QAudioRecorder has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAudioRecorder_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioRecorder_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioRecorder_t qt_meta_stringdata_MyQAudioRecorder = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQAudioRecorder"
  },
  "MyQAudioRecorder"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioRecorder[] = {
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
class Q_DECL_EXPORT MyQAudioRecorder : public QAudioRecorder {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioRecorder::staticMetaObject,
  qt_meta_stringdata_MyQAudioRecorder.data,
  qt_meta_data_MyQAudioRecorder,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioRecorder.stringdata0))
      return static_cast<void*>(this);
  return QAudioRecorder::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioRecorder::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioRecorder() {}
// void QAudioRecorder(QObject *)
MyQAudioRecorder(QObject * parent) : QAudioRecorder(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QAudioRecorder_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioRecorder* qo = (MyQAudioRecorder*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder10metaObjectEv(void *this_) {
  return (void*)((QAudioRecorder*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAudioRecorder11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioRecorder*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QAudioRecorder11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioRecorder*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAudioRecorder2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioRecorder::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAudioRecorder6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioRecorder::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:65
// [-2] void QAudioRecorder(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAudioRecorderC2EP7QObject(QObject * parent) {
  return  new MyQAudioRecorder(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:66
// [-2] void ~QAudioRecorder()
extern "C" Q_DECL_EXPORT
void C_ZN14QAudioRecorderD2Ev(void *this_) {
  delete (QAudioRecorder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:68
// [8] QStringList audioInputs()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder11audioInputsEv(void *this_) {
  auto rv = ((QAudioRecorder*)this_)->audioInputs();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:69
// [8] QString defaultAudioInput()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder17defaultAudioInputEv(void *this_) {
  auto rv = ((QAudioRecorder*)this_)->defaultAudioInput();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:70
// [8] QString audioInputDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder21audioInputDescriptionERK7QString(void *this_, QString* name) {
  auto rv = ((QAudioRecorder*)this_)->audioInputDescription(*name);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:72
// [8] QString audioInput()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder10audioInputEv(void *this_) {
  auto rv = ((QAudioRecorder*)this_)->audioInput();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:75
// [-2] void setAudioInput(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAudioRecorder13setAudioInputERK7QString(void *this_, QString* name) {
  ((QAudioRecorder*)this_)->setAudioInput(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:78
// [-2] void audioInputChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAudioRecorder17audioInputChangedERK7QString(void *this_, QString* name) {
  ((QAudioRecorder*)this_)->audioInputChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:79
// [-2] void availableAudioInputsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QAudioRecorder27availableAudioInputsChangedEv(void *this_) {
  ((QAudioRecorder*)this_)->availableAudioInputsChanged();
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
