//  header block begin

// /usr/include/qt/QtWidgets/qactiongroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qactiongroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QActionGroup is pure virtual: false
// QActionGroup has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQActionGroup_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQActionGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQActionGroup_t qt_meta_stringdata_MyQActionGroup = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQActionGroup"
  },
  "MyQActionGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQActionGroup[] = {
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
class Q_DECL_EXPORT MyQActionGroup : public QActionGroup {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QActionGroup::staticMetaObject,
  qt_meta_stringdata_MyQActionGroup.data,
  qt_meta_data_MyQActionGroup,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQActionGroup.stringdata0))
      return static_cast<void*>(this);
  return QActionGroup::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QActionGroup::qt_metacall(_c, _id, _a);
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
  virtual ~MyQActionGroup() {}
// void QActionGroup(QObject *)
MyQActionGroup(QObject * parent) : QActionGroup(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QActionGroup_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQActionGroup* qo = (MyQActionGroup*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QActionGroup10metaObjectEv(void *this_) {
  return (void*)((QActionGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QActionGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QActionGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QActionGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QActionGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QActionGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:63
// [-2] void QActionGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroupC2EP7QObject(QObject * parent) {
  return  new MyQActionGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:64
// [-2] void ~QActionGroup()
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroupD2Ev(void *this_) {
  delete (QActionGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:66
// [8] QAction * addAction(QAction *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup9addActionEP7QAction(void *this_, QAction * a) {
  return (void*)((QActionGroup*)this_)->addAction(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:67
// [8] QAction * addAction(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup9addActionERK7QString(void *this_, QString* text) {
  return (void*)((QActionGroup*)this_)->addAction(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:68
// [8] QAction * addAction(const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup9addActionERK5QIconRK7QString(void *this_, QIcon* icon, QString* text) {
  return (void*)((QActionGroup*)this_)->addAction(*icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:69
// [-2] void removeAction(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup12removeActionEP7QAction(void *this_, QAction * a) {
  ((QActionGroup*)this_)->removeAction(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:70
// [-2] QList<QAction *> actions()
extern "C" Q_DECL_EXPORT
QList<QAction *>* C_ZNK12QActionGroup7actionsEv(void *this_) {
  auto rv = ((QActionGroup*)this_)->actions();
return new QList<QAction *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:72
// [8] QAction * checkedAction()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QActionGroup13checkedActionEv(void *this_) {
  return (void*)((QActionGroup*)this_)->checkedAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:73
// [1] bool isExclusive()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QActionGroup11isExclusiveEv(void *this_) {
  return (bool)((QActionGroup*)this_)->isExclusive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:74
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QActionGroup9isEnabledEv(void *this_) {
  return (bool)((QActionGroup*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:75
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QActionGroup9isVisibleEv(void *this_) {
  return (bool)((QActionGroup*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:79
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup10setEnabledEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setEnabled(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:80
// [-2] void setDisabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup11setDisabledEb(void *this_, bool b) {
  ((QActionGroup*)this_)->setDisabled(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:81
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup10setVisibleEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setVisible(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:82
// [-2] void setExclusive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup12setExclusiveEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setExclusive(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:85
// [-2] void triggered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup9triggeredEP7QAction(void *this_, QAction * arg0) {
  ((QActionGroup*)this_)->triggered(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:86
// [-2] void hovered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup7hoveredEP7QAction(void *this_, QAction * arg0) {
  ((QActionGroup*)this_)->hovered(arg0);
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
