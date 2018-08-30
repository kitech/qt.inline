//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qundogroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundogroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoGroup is pure virtual: false
// QUndoGroup has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQUndoGroup_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQUndoGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQUndoGroup_t qt_meta_stringdata_MyQUndoGroup = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQUndoGroup"
  },
  "MyQUndoGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQUndoGroup[] = {
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
class Q_DECL_EXPORT MyQUndoGroup : public QUndoGroup {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QUndoGroup::staticMetaObject,
  qt_meta_stringdata_MyQUndoGroup.data,
  qt_meta_data_MyQUndoGroup,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQUndoGroup.stringdata0))
      return static_cast<void*>(this);
  return QUndoGroup::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QUndoGroup::qt_metacall(_c, _id, _a);
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
  virtual ~MyQUndoGroup() {}
// void QUndoGroup(QObject *)
MyQUndoGroup(QObject * parent) : QUndoGroup(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QUndoGroup_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQUndoGroup* qo = (MyQUndoGroup*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup10metaObjectEv(void *this_) {
  return (void*)((QUndoGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QUndoGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QUndoGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QUndoGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QUndoGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QUndoGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:61
// [-2] void QUndoGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoGroupC2EP7QObject(QObject * parent) {
  return  new MyQUndoGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:62
// [-2] void ~QUndoGroup()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroupD2Ev(void *this_) {
  delete (QUndoGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:64
// [-2] void addStack(QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup8addStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->addStack(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:65
// [-2] void removeStack(QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup11removeStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->removeStack(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:66
// [-2] QList<QUndoStack *> stacks()
extern "C" Q_DECL_EXPORT
QList<QUndoStack *>* C_ZNK10QUndoGroup6stacksEv(void *this_) {
  auto rv = ((QUndoGroup*)this_)->stacks();
return new QList<QUndoStack *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:67
// [8] QUndoStack * activeStack()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup11activeStackEv(void *this_) {
  return (void*)((QUndoGroup*)this_)->activeStack();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:70
// [8] QAction * createUndoAction(QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup16createUndoActionEP7QObjectRK7QString(void *this_, QObject * parent, QString* prefix) {
  return (void*)((QUndoGroup*)this_)->createUndoAction(parent, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:72
// [8] QAction * createRedoAction(QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup16createRedoActionEP7QObjectRK7QString(void *this_, QObject * parent, QString* prefix) {
  return (void*)((QUndoGroup*)this_)->createRedoAction(parent, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:75
// [1] bool canUndo()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoGroup7canUndoEv(void *this_) {
  return (bool)((QUndoGroup*)this_)->canUndo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:76
// [1] bool canRedo()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoGroup7canRedoEv(void *this_) {
  return (bool)((QUndoGroup*)this_)->canRedo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:77
// [8] QString undoText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup8undoTextEv(void *this_) {
  auto rv = ((QUndoGroup*)this_)->undoText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:78
// [8] QString redoText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup8redoTextEv(void *this_) {
  auto rv = ((QUndoGroup*)this_)->redoText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:79
// [1] bool isClean()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoGroup7isCleanEv(void *this_) {
  return (bool)((QUndoGroup*)this_)->isClean();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:82
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup4undoEv(void *this_) {
  ((QUndoGroup*)this_)->undo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:83
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup4redoEv(void *this_) {
  ((QUndoGroup*)this_)->redo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:84
// [-2] void setActiveStack(QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup14setActiveStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->setActiveStack(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:87
// [-2] void activeStackChanged(QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup18activeStackChangedEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->activeStackChanged(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:88
// [-2] void indexChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup12indexChangedEi(void *this_, int idx) {
  ((QUndoGroup*)this_)->indexChanged(idx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:89
// [-2] void cleanChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup12cleanChangedEb(void *this_, bool clean) {
  ((QUndoGroup*)this_)->cleanChanged(clean);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:90
// [-2] void canUndoChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup14canUndoChangedEb(void *this_, bool canUndo) {
  ((QUndoGroup*)this_)->canUndoChanged(canUndo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:91
// [-2] void canRedoChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup14canRedoChangedEb(void *this_, bool canRedo) {
  ((QUndoGroup*)this_)->canRedoChanged(canRedo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:92
// [-2] void undoTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup15undoTextChangedERK7QString(void *this_, QString* undoText) {
  ((QUndoGroup*)this_)->undoTextChanged(*undoText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:93
// [-2] void redoTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup15redoTextChangedERK7QString(void *this_, QString* redoText) {
  ((QUndoGroup*)this_)->redoTextChanged(*redoText);
}

//  main block end
