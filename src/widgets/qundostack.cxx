//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(undocommand)
// since 0x040200
// /usr/include/qt/QtWidgets/qundostack.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundostack.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoStack is pure virtual: false
// QUndoStack has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQUndoStack_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQUndoStack_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQUndoStack_t qt_meta_stringdata_MyQUndoStack = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQUndoStack"
  },
  "MyQUndoStack"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQUndoStack[] = {
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
class Q_DECL_EXPORT MyQUndoStack : public QUndoStack {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QUndoStack::staticMetaObject,
  qt_meta_stringdata_MyQUndoStack.data,
  qt_meta_data_MyQUndoStack,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQUndoStack.stringdata0))
      return static_cast<void*>(this);
  return QUndoStack::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QUndoStack::qt_metacall(_c, _id, _a);
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
  virtual ~MyQUndoStack() {}
// void QUndoStack(QObject *)
MyQUndoStack(QObject * parent) : QUndoStack(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QUndoStack_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQUndoStack* qo = (MyQUndoStack*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack10metaObjectEv(void *this_) {
  return (void*)((QUndoStack*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoStack11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QUndoStack*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QUndoStack11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QUndoStack*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoStack2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QUndoStack::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoStack6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QUndoStack::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:100
// [-2] void QUndoStack(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoStackC2EP7QObject(QObject * parent) {
  return  new MyQUndoStack(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:101
// [-2] void ~QUndoStack()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStackD2Ev(void *this_) {
  delete (QUndoStack*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:102
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack5clearEv(void *this_) {
  ((QUndoStack*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:104
// [-2] void push(QUndoCommand *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack4pushEP12QUndoCommand(void *this_, QUndoCommand * cmd) {
  ((QUndoStack*)this_)->push(cmd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:106
// [1] bool canUndo()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoStack7canUndoEv(void *this_) {
  return (bool)((QUndoStack*)this_)->canUndo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:107
// [1] bool canRedo()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoStack7canRedoEv(void *this_) {
  return (bool)((QUndoStack*)this_)->canRedo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:108
// [8] QString undoText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack8undoTextEv(void *this_) {
  auto rv = ((QUndoStack*)this_)->undoText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:109
// [8] QString redoText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack8redoTextEv(void *this_) {
  auto rv = ((QUndoStack*)this_)->redoText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:111
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK10QUndoStack5countEv(void *this_) {
  return (int)((QUndoStack*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:112
// [4] int index()
extern "C" Q_DECL_EXPORT
int C_ZNK10QUndoStack5indexEv(void *this_) {
  return (int)((QUndoStack*)this_)->index();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:113
// [8] QString text(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack4textEi(void *this_, int idx) {
  auto rv = ((QUndoStack*)this_)->text(idx);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:116
// [8] QAction * createUndoAction(QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack16createUndoActionEP7QObjectRK7QString(void *this_, QObject * parent, QString* prefix) {
  return (void*)((QUndoStack*)this_)->createUndoAction(parent, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:118
// [8] QAction * createRedoAction(QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack16createRedoActionEP7QObjectRK7QString(void *this_, QObject * parent, QString* prefix) {
  return (void*)((QUndoStack*)this_)->createRedoAction(parent, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:122
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoStack8isActiveEv(void *this_) {
  return (bool)((QUndoStack*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:123
// [1] bool isClean()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoStack7isCleanEv(void *this_) {
  return (bool)((QUndoStack*)this_)->isClean();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:124
// [4] int cleanIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK10QUndoStack10cleanIndexEv(void *this_) {
  return (int)((QUndoStack*)this_)->cleanIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:126
// [-2] void beginMacro(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack10beginMacroERK7QString(void *this_, QString* text) {
  ((QUndoStack*)this_)->beginMacro(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:127
// [-2] void endMacro()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack8endMacroEv(void *this_) {
  ((QUndoStack*)this_)->endMacro();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:129
// [-2] void setUndoLimit(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack12setUndoLimitEi(void *this_, int limit) {
  ((QUndoStack*)this_)->setUndoLimit(limit);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:130
// [4] int undoLimit()
extern "C" Q_DECL_EXPORT
int C_ZNK10QUndoStack9undoLimitEv(void *this_) {
  return (int)((QUndoStack*)this_)->undoLimit();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qundostack.h:132
// [8] const QUndoCommand * command(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack7commandEi(void *this_, int index) {
  return (void*)((QUndoStack*)this_)->command(index);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:135
// [-2] void setClean()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack8setCleanEv(void *this_) {
  ((QUndoStack*)this_)->setClean();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qundostack.h:136
// [-2] void resetClean()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack10resetCleanEv(void *this_) {
  ((QUndoStack*)this_)->resetClean();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:137
// [-2] void setIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack8setIndexEi(void *this_, int idx) {
  ((QUndoStack*)this_)->setIndex(idx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:138
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack4undoEv(void *this_) {
  ((QUndoStack*)this_)->undo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:139
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack4redoEv(void *this_) {
  ((QUndoStack*)this_)->redo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:140
// [-2] void setActive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack9setActiveEb(void *this_, bool active) {
  ((QUndoStack*)this_)->setActive(active);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:143
// [-2] void indexChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack12indexChangedEi(void *this_, int idx) {
  ((QUndoStack*)this_)->indexChanged(idx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:144
// [-2] void cleanChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack12cleanChangedEb(void *this_, bool clean) {
  ((QUndoStack*)this_)->cleanChanged(clean);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:145
// [-2] void canUndoChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack14canUndoChangedEb(void *this_, bool canUndo) {
  ((QUndoStack*)this_)->canUndoChanged(canUndo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:146
// [-2] void canRedoChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack14canRedoChangedEb(void *this_, bool canRedo) {
  ((QUndoStack*)this_)->canRedoChanged(canRedo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:147
// [-2] void undoTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack15undoTextChangedERK7QString(void *this_, QString* undoText) {
  ((QUndoStack*)this_)->undoTextChanged(*undoText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:148
// [-2] void redoTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack15redoTextChangedERK7QString(void *this_, QString* redoText) {
  ((QUndoStack*)this_)->redoTextChanged(*redoText);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(undocommand)
#endif // #ifndef QT_MINIMAL
//  footer block end
