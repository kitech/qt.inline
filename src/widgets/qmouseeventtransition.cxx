//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qmouseeventtransition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmouseeventtransition.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMouseEventTransition is pure virtual: false
// QMouseEventTransition has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMouseEventTransition_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMouseEventTransition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMouseEventTransition_t qt_meta_stringdata_MyQMouseEventTransition = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQMouseEventTransition"
  },
  "MyQMouseEventTransition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMouseEventTransition[] = {
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
class Q_DECL_EXPORT MyQMouseEventTransition : public QMouseEventTransition {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMouseEventTransition::staticMetaObject,
  qt_meta_stringdata_MyQMouseEventTransition.data,
  qt_meta_data_MyQMouseEventTransition,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMouseEventTransition.stringdata0))
      return static_cast<void*>(this);
  return QMouseEventTransition::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMouseEventTransition::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMouseEventTransition() {}
// void QMouseEventTransition(QState *)
MyQMouseEventTransition(QState * sourceState) : QMouseEventTransition(sourceState) {}
// void QMouseEventTransition(QObject *, QEvent::Type, Qt::MouseButton, QState *)
MyQMouseEventTransition(QObject * object, QEvent::Type type_, Qt::MouseButton button, QState * sourceState) : QMouseEventTransition(object, type_, button, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void onTransition(QEvent *)
  virtual void onTransition(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMouseEventTransition::onTransition(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMouseEventTransition::eventTest(event);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:73
// [-2] void onTransition(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransition12onTransitionEP6QEvent(void *this_, QEvent * event) {
  ((QMouseEventTransition*)this_)->QMouseEventTransition::onTransition(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:74
// [1] bool eventTest(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN21QMouseEventTransition9eventTestEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QMouseEventTransition*)this_)->QMouseEventTransition::eventTest(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QMouseEventTransition10metaObjectEv(void *this_) {
  return (void*)((QMouseEventTransition*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMouseEventTransition11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMouseEventTransition*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QMouseEventTransition11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMouseEventTransition*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMouseEventTransition2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMouseEventTransition::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMouseEventTransition6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMouseEventTransition::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:58
// [-2] void QMouseEventTransition(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMouseEventTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQMouseEventTransition*)(0);
  return  new MyQMouseEventTransition(sourceState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:59
// [-2] void QMouseEventTransition(QObject *, QEvent::Type, Qt::MouseButton, QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMouseEventTransitionC2EP7QObjectN6QEvent4TypeEN2Qt11MouseButtonEP6QState(QObject * object, QEvent::Type type_, Qt::MouseButton button, QState * sourceState) {
  auto _nilp = (MyQMouseEventTransition*)(0);
  return  new MyQMouseEventTransition(object, type_, button, sourceState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:61
// [-2] void ~QMouseEventTransition()
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransitionD2Ev(void *this_) {
  delete (QMouseEventTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:63
// [4] Qt::MouseButton button()
extern "C" Q_DECL_EXPORT
Qt::MouseButton C_ZNK21QMouseEventTransition6buttonEv(void *this_) {
  return (Qt::MouseButton)((QMouseEventTransition*)this_)->button();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:64
// [-2] void setButton(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransition9setButtonEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  ((QMouseEventTransition*)this_)->setButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:66
// [4] Qt::KeyboardModifiers modifierMask()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK21QMouseEventTransition12modifierMaskEv(void *this_) {
  return (Qt::KeyboardModifiers)((QMouseEventTransition*)this_)->modifierMask();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:67
// [-2] void setModifierMask(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QMouseEventTransition*)this_)->setModifierMask(modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:69
// [8] QPainterPath hitTestPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QMouseEventTransition11hitTestPathEv(void *this_) {
  auto rv = ((QMouseEventTransition*)this_)->hitTestPath();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:70
// [-2] void setHitTestPath(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransition14setHitTestPathERK12QPainterPath(void *this_, QPainterPath* path) {
  ((QMouseEventTransition*)this_)->setHitTestPath(*path);
}

//  main block end
