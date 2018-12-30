//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(errormessage)
// /usr/include/qt/QtWidgets/qerrormessage.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qerrormessage.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QErrorMessage is pure virtual: false
// QErrorMessage has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQErrorMessage_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQErrorMessage_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQErrorMessage_t qt_meta_stringdata_MyQErrorMessage = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQErrorMessage"
  },
  "MyQErrorMessage"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQErrorMessage[] = {
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
class Q_DECL_EXPORT MyQErrorMessage : public QErrorMessage {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QErrorMessage::staticMetaObject,
  qt_meta_stringdata_MyQErrorMessage.data,
  qt_meta_data_MyQErrorMessage,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQErrorMessage.stringdata0))
      return static_cast<void*>(this);
  return QErrorMessage::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QErrorMessage::qt_metacall(_c, _id, _a);
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
  virtual ~MyQErrorMessage() {}
// void QErrorMessage(QWidget *)
MyQErrorMessage(QWidget * parent) : QErrorMessage(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void done(int)
  virtual void done(int arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"done", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QErrorMessage::done(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QErrorMessage::changeEvent(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QErrorMessage_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQErrorMessage* qo = (MyQErrorMessage*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:68
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessage4doneEi(void *this_, int arg0) {
  ((QErrorMessage*)this_)->QErrorMessage::done(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:69
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessage11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QErrorMessage*)this_)->QErrorMessage::changeEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QErrorMessage10metaObjectEv(void *this_) {
  return (void*)((QErrorMessage*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QErrorMessage11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QErrorMessage*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QErrorMessage11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QErrorMessage*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QErrorMessage2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QErrorMessage::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QErrorMessage6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QErrorMessage::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:58
// [-2] void QErrorMessage(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QErrorMessageC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQErrorMessage*)(0);
  return  new MyQErrorMessage(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:59
// [-2] void ~QErrorMessage()
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessageD2Ev(void *this_) {
  delete (QErrorMessage*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:61
// [8] QErrorMessage * qtHandler()
extern "C" Q_DECL_EXPORT
void* C_ZN13QErrorMessage9qtHandlerEv() {
  return (void*)QErrorMessage::qtHandler();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:64
// [-2] void showMessage(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessage11showMessageERK7QString(void *this_, QString* message) {
  ((QErrorMessage*)this_)->showMessage(*message);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qerrormessage.h:65
// [-2] void showMessage(const QString &, const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessage11showMessageERK7QStringS2_(void *this_, QString* message, QString* type_) {
  ((QErrorMessage*)this_)->showMessage(*message, *type_);
}
#endif // QT_VERSION >= 0x040500

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(errormessage)
#endif // #ifndef QT_MINIMAL
//  footer block end
