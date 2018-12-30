//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(dialogbuttonbox)
// since 0x040200
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdialogbuttonbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDialogButtonBox is pure virtual: false
// QDialogButtonBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDialogButtonBox_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDialogButtonBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDialogButtonBox_t qt_meta_stringdata_MyQDialogButtonBox = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQDialogButtonBox"
  },
  "MyQDialogButtonBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDialogButtonBox[] = {
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
class Q_DECL_EXPORT MyQDialogButtonBox : public QDialogButtonBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDialogButtonBox::staticMetaObject,
  qt_meta_stringdata_MyQDialogButtonBox.data,
  qt_meta_data_MyQDialogButtonBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDialogButtonBox.stringdata0))
      return static_cast<void*>(this);
  return QDialogButtonBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDialogButtonBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDialogButtonBox() {}
// void QDialogButtonBox(QWidget *)
MyQDialogButtonBox(QWidget * parent) : QDialogButtonBox(parent) {}
// void QDialogButtonBox(Qt::Orientation, QWidget *)
MyQDialogButtonBox(Qt::Orientation orientation, QWidget * parent) : QDialogButtonBox(orientation, parent) {}
// void QDialogButtonBox(QDialogButtonBox::StandardButtons, QWidget *)
MyQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, QWidget * parent) : QDialogButtonBox(buttons, parent) {}
// void QDialogButtonBox(QDialogButtonBox::StandardButtons, Qt::Orientation, QWidget *)
MyQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget * parent) : QDialogButtonBox(buttons, orientation, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDialogButtonBox::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QDialogButtonBox::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QDialogButtonBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDialogButtonBox* qo = (MyQDialogButtonBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:154
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QDialogButtonBox*)this_)->QDialogButtonBox::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:155
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QDialogButtonBox5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QDialogButtonBox*)this_)->QDialogButtonBox::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QDialogButtonBox10metaObjectEv(void *this_) {
  return (void*)((QDialogButtonBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDialogButtonBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QDialogButtonBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDialogButtonBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDialogButtonBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDialogButtonBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:120
// [-2] void QDialogButtonBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQDialogButtonBox*)(0);
  return  new MyQDialogButtonBox(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:121
// [-2] void QDialogButtonBox(Qt::Orientation, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBoxC2EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  auto _nilp = (MyQDialogButtonBox*)(0);
  return  new MyQDialogButtonBox(orientation, parent);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:122
// [-2] void QDialogButtonBox(QDialogButtonBox::StandardButtons, QWidget *)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBoxC2E6QFlagsINS_14StandardButtonEEP7QWidget(QFlags<QDialogButtonBox::StandardButton> buttons, QWidget * parent) {
  auto _nilp = (MyQDialogButtonBox*)(0);
  return  new MyQDialogButtonBox(buttons, parent);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:123
// [-2] void QDialogButtonBox(QDialogButtonBox::StandardButtons, Qt::Orientation, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBoxC2E6QFlagsINS_14StandardButtonEEN2Qt11OrientationEP7QWidget(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget * parent) {
  auto _nilp = (MyQDialogButtonBox*)(0);
  return  new MyQDialogButtonBox(buttons, orientation, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:125
// [-2] void ~QDialogButtonBox()
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBoxD2Ev(void *this_) {
  delete (QDialogButtonBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:127
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QDialogButtonBox*)this_)->setOrientation(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:128
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK16QDialogButtonBox11orientationEv(void *this_) {
  return (Qt::Orientation)((QDialogButtonBox*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:130
// [-2] void addButton(QAbstractButton *, QDialogButtonBox::ButtonRole)
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE(void *this_, QAbstractButton * button, QDialogButtonBox::ButtonRole role) {
  ((QDialogButtonBox*)this_)->addButton(button, role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:131
// [8] QPushButton * addButton(const QString &, QDialogButtonBox::ButtonRole)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBox9addButtonERK7QStringNS_10ButtonRoleE(void *this_, QString* text, QDialogButtonBox::ButtonRole role) {
  return (void*)((QDialogButtonBox*)this_)->addButton(*text, role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:132
// [8] QPushButton * addButton(QDialogButtonBox::StandardButton)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDialogButtonBox9addButtonENS_14StandardButtonE(void *this_, QDialogButtonBox::StandardButton button) {
  return (void*)((QDialogButtonBox*)this_)->addButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:133
// [-2] void removeButton(QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QDialogButtonBox*)this_)->removeButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:134
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox5clearEv(void *this_) {
  ((QDialogButtonBox*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:136
// [-2] QList<QAbstractButton *> buttons()
extern "C" Q_DECL_EXPORT
QList<QAbstractButton *>* C_ZNK16QDialogButtonBox7buttonsEv(void *this_) {
  auto rv = ((QDialogButtonBox*)this_)->buttons();
return new QList<QAbstractButton *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:137
// [4] QDialogButtonBox::ButtonRole buttonRole(QAbstractButton *)
extern "C" Q_DECL_EXPORT
QDialogButtonBox::ButtonRole C_ZNK16QDialogButtonBox10buttonRoleEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (QDialogButtonBox::ButtonRole)((QDialogButtonBox*)this_)->buttonRole(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:139
// [-2] void setStandardButtons(QDialogButtonBox::StandardButtons)
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE(void *this_, QFlags<QDialogButtonBox::StandardButton> buttons) {
  ((QDialogButtonBox*)this_)->setStandardButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:140
// [4] QDialogButtonBox::StandardButtons standardButtons()
extern "C" Q_DECL_EXPORT
QDialogButtonBox::StandardButtons* C_ZNK16QDialogButtonBox15standardButtonsEv(void *this_) {
  auto rv = ((QDialogButtonBox*)this_)->standardButtons();
return new QDialogButtonBox::StandardButtons(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:141
// [4] QDialogButtonBox::StandardButton standardButton(QAbstractButton *)
extern "C" Q_DECL_EXPORT
QDialogButtonBox::StandardButton C_ZNK16QDialogButtonBox14standardButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (QDialogButtonBox::StandardButton)((QDialogButtonBox*)this_)->standardButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:142
// [8] QPushButton * button(QDialogButtonBox::StandardButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QDialogButtonBox6buttonENS_14StandardButtonE(void *this_, QDialogButtonBox::StandardButton which) {
  return (void*)((QDialogButtonBox*)this_)->button(which);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:144
// [-2] void setCenterButtons(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox16setCenterButtonsEb(void *this_, bool center) {
  ((QDialogButtonBox*)this_)->setCenterButtons(center);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:145
// [1] bool centerButtons()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QDialogButtonBox13centerButtonsEv(void *this_) {
  return (bool)((QDialogButtonBox*)this_)->centerButtons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:148
// [-2] void clicked(QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox7clickedEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QDialogButtonBox*)this_)->clicked(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:149
// [-2] void accepted()
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox8acceptedEv(void *this_) {
  ((QDialogButtonBox*)this_)->accepted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:150
// [-2] void helpRequested()
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox13helpRequestedEv(void *this_) {
  ((QDialogButtonBox*)this_)->helpRequested();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:151
// [-2] void rejected()
extern "C" Q_DECL_EXPORT
void C_ZN16QDialogButtonBox8rejectedEv(void *this_) {
  ((QDialogButtonBox*)this_)->rejected();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dialogbuttonbox)
#endif // #ifndef QT_MINIMAL
//  footer block end
