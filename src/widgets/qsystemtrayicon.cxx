//  header block begin

// since 0x040200
// /usr/include/qt/QtWidgets/qsystemtrayicon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsystemtrayicon.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSystemTrayIcon is pure virtual: false
// QSystemTrayIcon has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSystemTrayIcon_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSystemTrayIcon_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSystemTrayIcon_t qt_meta_stringdata_MyQSystemTrayIcon = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQSystemTrayIcon"
  },
  "MyQSystemTrayIcon"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSystemTrayIcon[] = {
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
class Q_DECL_EXPORT MyQSystemTrayIcon : public QSystemTrayIcon {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSystemTrayIcon::staticMetaObject,
  qt_meta_stringdata_MyQSystemTrayIcon.data,
  qt_meta_data_MyQSystemTrayIcon,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSystemTrayIcon.stringdata0))
      return static_cast<void*>(this);
  return QSystemTrayIcon::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSystemTrayIcon::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSystemTrayIcon() {}
// void QSystemTrayIcon(QObject *)
MyQSystemTrayIcon(QObject * parent) : QSystemTrayIcon(parent) {}
// void QSystemTrayIcon(const QIcon &, QObject *)
MyQSystemTrayIcon(const QIcon & icon, QObject * parent) : QSystemTrayIcon(icon, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSystemTrayIcon::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSystemTrayIcon_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSystemTrayIcon* qo = (MyQSystemTrayIcon*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:113
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QSystemTrayIcon5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSystemTrayIcon*)this_)->QSystemTrayIcon::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon10metaObjectEv(void *this_) {
  return (void*)((QSystemTrayIcon*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:63
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSystemTrayIcon11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSystemTrayIcon*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:63
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QSystemTrayIcon11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSystemTrayIcon*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:63
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSystemTrayIcon2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSystemTrayIcon::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:63
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSystemTrayIcon6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSystemTrayIcon::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:69
// [-2] void QSystemTrayIcon(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSystemTrayIconC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSystemTrayIcon*)(0);
  return  new MyQSystemTrayIcon(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:70
// [-2] void QSystemTrayIcon(const QIcon &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSystemTrayIconC2ERK5QIconP7QObject(QIcon* icon, QObject * parent) {
  auto _nilp = (MyQSystemTrayIcon*)(0);
  return  new MyQSystemTrayIcon(*icon, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:71
// [-2] void ~QSystemTrayIcon()
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIconD2Ev(void *this_) {
  delete (QSystemTrayIcon*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:82
// [-2] void setContextMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon14setContextMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QSystemTrayIcon*)this_)->setContextMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:83
// [8] QMenu * contextMenu()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon11contextMenuEv(void *this_) {
  return (void*)((QSystemTrayIcon*)this_)->contextMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:86
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon4iconEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:87
// [-2] void setIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QSystemTrayIcon*)this_)->setIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:89
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon7toolTipEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->toolTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:90
// [-2] void setToolTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon10setToolTipERK7QString(void *this_, QString* tip) {
  ((QSystemTrayIcon*)this_)->setToolTip(*tip);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:92
// [1] bool isSystemTrayAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZN15QSystemTrayIcon21isSystemTrayAvailableEv() {
  return (bool)QSystemTrayIcon::isSystemTrayAvailable();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:93
// [1] bool supportsMessages()
extern "C" Q_DECL_EXPORT
bool C_ZN15QSystemTrayIcon16supportsMessagesEv() {
  return (bool)QSystemTrayIcon::supportsMessages();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:97
// [16] QRect geometry()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon8geometryEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->geometry();
return new QRect(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:98
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSystemTrayIcon9isVisibleEv(void *this_) {
  return (bool)((QSystemTrayIcon*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:101
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon10setVisibleEb(void *this_, bool visible) {
  ((QSystemTrayIcon*)this_)->setVisible(visible);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:102
// [-2] void show()
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon4showEv(void *this_) {
  ((QSystemTrayIcon*)this_)->show();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:103
// [-2] void hide()
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon4hideEv(void *this_) {
  ((QSystemTrayIcon*)this_)->hide();
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:104
// [-2] void showMessage(const QString &, const QString &, const QIcon &, int)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon11showMessageERK7QStringS2_RK5QIconi(void *this_, QString* title, QString* msg, QIcon* icon, int msecs) {
  ((QSystemTrayIcon*)this_)->showMessage(*title, *msg, *icon, msecs);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:105
// [-2] void showMessage(const QString &, const QString &, QSystemTrayIcon::MessageIcon, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon11showMessageERK7QStringS2_NS_11MessageIconEi(void *this_, QString* title, QString* msg, QSystemTrayIcon::MessageIcon icon, int msecs) {
  ((QSystemTrayIcon*)this_)->showMessage(*title, *msg, icon, msecs);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:109
// [-2] void activated(QSystemTrayIcon::ActivationReason)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(void *this_, QSystemTrayIcon::ActivationReason reason) {
  ((QSystemTrayIcon*)this_)->activated(reason);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:110
// [-2] void messageClicked()
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon14messageClickedEv(void *this_) {
  ((QSystemTrayIcon*)this_)->messageClicked();
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
