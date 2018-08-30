//  header block begin
// /usr/include/qt/QtWidgets/qshortcut.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qshortcut.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QShortcut is pure virtual: false
// QShortcut has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQShortcut_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQShortcut_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQShortcut_t qt_meta_stringdata_MyQShortcut = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQShortcut"
  },
  "MyQShortcut"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQShortcut[] = {
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
class Q_DECL_EXPORT MyQShortcut : public QShortcut {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QShortcut::staticMetaObject,
  qt_meta_stringdata_MyQShortcut.data,
  qt_meta_data_MyQShortcut,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQShortcut.stringdata0))
      return static_cast<void*>(this);
  return QShortcut::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QShortcut::qt_metacall(_c, _id, _a);
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
  virtual ~MyQShortcut() {}
// void QShortcut(QWidget *)
MyQShortcut(QWidget * parent) : QShortcut(parent) {}
// void QShortcut(const QKeySequence &, QWidget *, const char *, const char *, Qt::ShortcutContext)
MyQShortcut(const QKeySequence & key, QWidget * parent, const char * member, const char * ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QShortcut::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QShortcut_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQShortcut* qo = (MyQShortcut*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:94
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QShortcut5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QShortcut*)this_)->QShortcut::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QShortcut10metaObjectEv(void *this_) {
  return (void*)((QShortcut*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QShortcut11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QShortcut*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QShortcut11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QShortcut*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QShortcut2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QShortcut::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QShortcut6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QShortcut::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:63
// [-2] void QShortcut(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QShortcutC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQShortcut*)(0);
  return  new MyQShortcut(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:64
// [-2] void QShortcut(const QKeySequence &, QWidget *, const char *, const char *, Qt::ShortcutContext)
extern "C" Q_DECL_EXPORT
void* C_ZN9QShortcutC2ERK12QKeySequenceP7QWidgetPKcS6_N2Qt15ShortcutContextE(QKeySequence* key, QWidget * parent, const char * member, const char * ambiguousMember, Qt::ShortcutContext context) {
  auto _nilp = (MyQShortcut*)(0);
  return  new MyQShortcut(*key, parent, member, ambiguousMember, context);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:67
// [-2] void ~QShortcut()
extern "C" Q_DECL_EXPORT
void C_ZN9QShortcutD2Ev(void *this_) {
  delete (QShortcut*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:69
// [-2] void setKey(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN9QShortcut6setKeyERK12QKeySequence(void *this_, QKeySequence* key) {
  ((QShortcut*)this_)->setKey(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:70
// [8] QKeySequence key()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QShortcut3keyEv(void *this_) {
  auto rv = ((QShortcut*)this_)->key();
return new QKeySequence(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:72
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QShortcut10setEnabledEb(void *this_, bool enable) {
  ((QShortcut*)this_)->setEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:73
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QShortcut9isEnabledEv(void *this_) {
  return (bool)((QShortcut*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:75
// [-2] void setContext(Qt::ShortcutContext)
extern "C" Q_DECL_EXPORT
void C_ZN9QShortcut10setContextEN2Qt15ShortcutContextE(void *this_, Qt::ShortcutContext context) {
  ((QShortcut*)this_)->setContext(context);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:76
// [4] Qt::ShortcutContext context()
extern "C" Q_DECL_EXPORT
Qt::ShortcutContext C_ZNK9QShortcut7contextEv(void *this_) {
  return (Qt::ShortcutContext)((QShortcut*)this_)->context();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:78
// [-2] void setWhatsThis(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QShortcut12setWhatsThisERK7QString(void *this_, QString* text) {
  ((QShortcut*)this_)->setWhatsThis(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:79
// [8] QString whatsThis()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QShortcut9whatsThisEv(void *this_) {
  auto rv = ((QShortcut*)this_)->whatsThis();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:81
// [-2] void setAutoRepeat(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QShortcut13setAutoRepeatEb(void *this_, bool on) {
  ((QShortcut*)this_)->setAutoRepeat(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:82
// [1] bool autoRepeat()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QShortcut10autoRepeatEv(void *this_) {
  return (bool)((QShortcut*)this_)->autoRepeat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:84
// [4] int id()
extern "C" Q_DECL_EXPORT
int C_ZNK9QShortcut2idEv(void *this_) {
  return (int)((QShortcut*)this_)->id();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:86
// [8] QWidget * parentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QShortcut12parentWidgetEv(void *this_) {
  return (void*)((QShortcut*)this_)->parentWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:90
// [-2] void activated()
extern "C" Q_DECL_EXPORT
void C_ZN9QShortcut9activatedEv(void *this_) {
  ((QShortcut*)this_)->activated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:91
// [-2] void activatedAmbiguously()
extern "C" Q_DECL_EXPORT
void C_ZN9QShortcut20activatedAmbiguouslyEv(void *this_) {
  ((QShortcut*)this_)->activatedAmbiguously();
}

//  main block end
