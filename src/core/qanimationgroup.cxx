//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qanimationgroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qanimationgroup.h>
#include <QtCore>
#include "callback_inherit.h"

// QAnimationGroup is pure virtual: true
// QAnimationGroup has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAnimationGroup_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAnimationGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAnimationGroup_t qt_meta_stringdata_MyQAnimationGroup = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQAnimationGroup"
  },
  "MyQAnimationGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAnimationGroup[] = {
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
class Q_DECL_EXPORT MyQAnimationGroup : public QAnimationGroup {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAnimationGroup::staticMetaObject,
  qt_meta_stringdata_MyQAnimationGroup.data,
  qt_meta_data_MyQAnimationGroup,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAnimationGroup.stringdata0))
      return static_cast<void*>(this);
  return QAnimationGroup::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAnimationGroup::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAnimationGroup() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int duration()
  virtual int duration() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"duration", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void updateCurrentTime(int)
  virtual void updateCurrentTime(int currentTime)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)currentTime, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAnimationGroup::updateCurrentTime(currentTime);
  }
  }

// void QAnimationGroup(QObject *)
MyQAnimationGroup(QObject * parent) : QAnimationGroup(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAnimationGroup::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QAnimationGroup_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAnimationGroup* qo = (MyQAnimationGroup*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:102
// [4] int duration()
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:123
// [-2] void updateCurrentTime(int)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:70
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAnimationGroup5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAnimationGroup*)this_)->QAnimationGroup::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QAnimationGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAnimationGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QAnimationGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAnimationGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAnimationGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAnimationGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:56
// [-2] void QAnimationGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAnimationGroup*)(0);
  return  new MyQAnimationGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:57
// [-2] void ~QAnimationGroup()
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroupD2Ev(void *this_) {
  delete (QAnimationGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:59
// [8] QAbstractAnimation * animationAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAnimationGroup11animationAtEi(void *this_, int index) {
  return (void*)((QAnimationGroup*)this_)->animationAt(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:60
// [4] int animationCount()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAnimationGroup14animationCountEv(void *this_) {
  return (int)((QAnimationGroup*)this_)->animationCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:61
// [4] int indexOfAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
int C_ZNK15QAnimationGroup16indexOfAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  return (int)((QAnimationGroup*)this_)->indexOfAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:62
// [-2] void addAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroup12addAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->addAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:63
// [-2] void insertAnimation(int, QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroup15insertAnimationEiP18QAbstractAnimation(void *this_, int index, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->insertAnimation(index, animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:64
// [-2] void removeAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroup15removeAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->removeAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:65
// [8] QAbstractAnimation * takeAnimation(int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroup13takeAnimationEi(void *this_, int index) {
  return (void*)((QAnimationGroup*)this_)->takeAnimation(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:66
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroup5clearEv(void *this_) {
  ((QAnimationGroup*)this_)->clear();
}

//  main block end
