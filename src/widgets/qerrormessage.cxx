//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(errormessage)
// /usr/include/qt/QtWidgets/qerrormessage.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qerrormessage.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QErrorMessage is pure virtual: false false
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
// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qerrormessage(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm2900693898 (29)_ZN13QErrorMessage2trEPKcS1_i
//static
/*void qm2900693898(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QErrorMessage::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QErrorMessage::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:58
// [-2] void QErrorMessage(QWidget *) 
// (12)qm1915084487 (30)_ZN13QErrorMessageC2EP7QWidget
/*void* qm1915084487(QWidget * parent)*/{
  auto _nilp = (MyQErrorMessage*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QErrorMessage(parent);
  this_ =  new MyQErrorMessage(parent);
}


/*void C_ZN13QErrorMessageD2Ev(void *this_)*/ {
  delete (QErrorMessage*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qerrormessage
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
