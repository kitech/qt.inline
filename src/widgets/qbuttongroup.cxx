//  header block begin
// /usr/include/qt/QtWidgets/qbuttongroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbuttongroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QButtonGroup is pure virtual: false
// QButtonGroup has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQButtonGroup_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQButtonGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQButtonGroup_t qt_meta_stringdata_MyQButtonGroup = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQButtonGroup"
  },
  "MyQButtonGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQButtonGroup[] = {
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
class Q_DECL_EXPORT MyQButtonGroup : public QButtonGroup {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QButtonGroup::staticMetaObject,
  qt_meta_stringdata_MyQButtonGroup.data,
  qt_meta_data_MyQButtonGroup,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQButtonGroup.stringdata0))
      return static_cast<void*>(this);
  return QButtonGroup::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QButtonGroup::qt_metacall(_c, _id, _a);
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
  virtual ~MyQButtonGroup() {}
// void QButtonGroup(QObject *)
MyQButtonGroup(QObject * parent) : QButtonGroup(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QButtonGroup_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQButtonGroup* qo = (MyQButtonGroup*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QButtonGroup10metaObjectEv(void *this_) {
  return (void*)((QButtonGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QButtonGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QButtonGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QButtonGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QButtonGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QButtonGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QButtonGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QButtonGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QButtonGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:60
// [-2] void QButtonGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QButtonGroupC2EP7QObject(QObject * parent) {
  return  new MyQButtonGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:61
// [-2] void ~QButtonGroup()
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroupD2Ev(void *this_) {
  delete (QButtonGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:63
// [-2] void setExclusive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup12setExclusiveEb(void *this_, bool arg0) {
  ((QButtonGroup*)this_)->setExclusive(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:64
// [1] bool exclusive()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QButtonGroup9exclusiveEv(void *this_) {
  return (bool)((QButtonGroup*)this_)->exclusive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:66
// [-2] void addButton(QAbstractButton *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup9addButtonEP15QAbstractButtoni(void *this_, QAbstractButton * arg0, int id) {
  ((QButtonGroup*)this_)->addButton(arg0, id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:67
// [-2] void removeButton(QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->removeButton(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:69
// [-2] QList<QAbstractButton *> buttons()
extern "C" Q_DECL_EXPORT
QList<QAbstractButton *>* C_ZNK12QButtonGroup7buttonsEv(void *this_) {
  auto rv = ((QButtonGroup*)this_)->buttons();
return new QList<QAbstractButton *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:71
// [8] QAbstractButton * checkedButton()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QButtonGroup13checkedButtonEv(void *this_) {
  return (void*)((QButtonGroup*)this_)->checkedButton();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qbuttongroup.h:74
// [8] QAbstractButton * button(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK12QButtonGroup6buttonEi(void *this_, int id) {
  return (void*)((QButtonGroup*)this_)->button(id);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qbuttongroup.h:75
// [-2] void setId(QAbstractButton *, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup5setIdEP15QAbstractButtoni(void *this_, QAbstractButton * button, int id) {
  ((QButtonGroup*)this_)->setId(button, id);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qbuttongroup.h:76
// [4] int id(QAbstractButton *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK12QButtonGroup2idEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (int)((QButtonGroup*)this_)->id(button);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qbuttongroup.h:77
// [4] int checkedId()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK12QButtonGroup9checkedIdEv(void *this_) {
  return (int)((QButtonGroup*)this_)->checkedId();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:80
// [-2] void buttonClicked(QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup13buttonClickedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonClicked(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:81
// [-2] void buttonClicked(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup13buttonClickedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonClicked(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qbuttongroup.h:82
// [-2] void buttonPressed(QAbstractButton *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup13buttonPressedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonPressed(arg0);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qbuttongroup.h:83
// [-2] void buttonPressed(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup13buttonPressedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonPressed(arg0);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qbuttongroup.h:84
// [-2] void buttonReleased(QAbstractButton *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonReleased(arg0);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qbuttongroup.h:85
// [-2] void buttonReleased(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup14buttonReleasedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonReleased(arg0);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qbuttongroup.h:86
// [-2] void buttonToggled(QAbstractButton *, bool)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(void *this_, QAbstractButton * arg0, bool arg1) {
  ((QButtonGroup*)this_)->buttonToggled(arg0, arg1);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qbuttongroup.h:87
// [-2] void buttonToggled(int, bool)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN12QButtonGroup13buttonToggledEib(void *this_, int arg0, bool arg1) {
  ((QButtonGroup*)this_)->buttonToggled(arg0, arg1);
}
#endif // QT_VERSION >= 0x050200

//  main block end
