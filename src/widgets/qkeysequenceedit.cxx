//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(keysequenceedit)
// since 0x050200
// /usr/include/qt/QtWidgets/qkeysequenceedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qkeysequenceedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QKeySequenceEdit is pure virtual: false
// QKeySequenceEdit has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQKeySequenceEdit_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQKeySequenceEdit_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQKeySequenceEdit_t qt_meta_stringdata_MyQKeySequenceEdit = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQKeySequenceEdit"
  },
  "MyQKeySequenceEdit"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQKeySequenceEdit[] = {
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
class Q_DECL_EXPORT MyQKeySequenceEdit : public QKeySequenceEdit {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QKeySequenceEdit::staticMetaObject,
  qt_meta_stringdata_MyQKeySequenceEdit.data,
  qt_meta_data_MyQKeySequenceEdit,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQKeySequenceEdit.stringdata0))
      return static_cast<void*>(this);
  return QKeySequenceEdit::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QKeySequenceEdit::qt_metacall(_c, _id, _a);
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
  virtual ~MyQKeySequenceEdit() {}
// void QKeySequenceEdit(QWidget *)
MyQKeySequenceEdit(QWidget * parent) : QKeySequenceEdit(parent) {}
// void QKeySequenceEdit(const QKeySequence &, QWidget *)
MyQKeySequenceEdit(const QKeySequence & keySequence, QWidget * parent) : QKeySequenceEdit(keySequence, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QKeySequenceEdit::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QKeySequenceEdit::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QKeySequenceEdit::keyReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QKeySequenceEdit::timerEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QKeySequenceEdit_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQKeySequenceEdit* qo = (MyQKeySequenceEdit*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:75
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QKeySequenceEdit5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QKeySequenceEdit*)this_)->QKeySequenceEdit::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:76
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QKeySequenceEdit*)this_)->QKeySequenceEdit::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:77
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QKeySequenceEdit*)this_)->QKeySequenceEdit::keyReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:78
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QKeySequenceEdit*)this_)->QKeySequenceEdit::timerEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QKeySequenceEdit10metaObjectEv(void *this_) {
  return (void*)((QKeySequenceEdit*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEdit11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QKeySequenceEdit*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QKeySequenceEdit11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QKeySequenceEdit*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEdit2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QKeySequenceEdit::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEdit6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QKeySequenceEdit::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:58
// [-2] void QKeySequenceEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQKeySequenceEdit*)(0);
  return  new MyQKeySequenceEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:59
// [-2] void QKeySequenceEdit(const QKeySequence &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEditC2ERK12QKeySequenceP7QWidget(QKeySequence* keySequence, QWidget * parent) {
  auto _nilp = (MyQKeySequenceEdit*)(0);
  return  new MyQKeySequenceEdit(*keySequence, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:60
// [-2] void ~QKeySequenceEdit()
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEditD2Ev(void *this_) {
  delete (QKeySequenceEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:62
// [8] QKeySequence keySequence()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QKeySequenceEdit11keySequenceEv(void *this_) {
  auto rv = ((QKeySequenceEdit*)this_)->keySequence();
return new QKeySequence(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:65
// [-2] void setKeySequence(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit14setKeySequenceERK12QKeySequence(void *this_, QKeySequence* keySequence) {
  ((QKeySequenceEdit*)this_)->setKeySequence(*keySequence);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:66
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit5clearEv(void *this_) {
  ((QKeySequenceEdit*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:69
// [-2] void editingFinished()
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit15editingFinishedEv(void *this_) {
  ((QKeySequenceEdit*)this_)->editingFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:70
// [-2] void keySequenceChanged(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(void *this_, QKeySequence* keySequence) {
  ((QKeySequenceEdit*)this_)->keySequenceChanged(*keySequence);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(keysequenceedit)
#endif // #ifndef QT_MINIMAL
//  footer block end
