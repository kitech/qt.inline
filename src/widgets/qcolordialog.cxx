//  header block begin
// /usr/include/qt/QtWidgets/qcolordialog.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolordialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColorDialog is pure virtual: false
// QColorDialog has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQColorDialog_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQColorDialog_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQColorDialog_t qt_meta_stringdata_MyQColorDialog = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQColorDialog"
  },
  "MyQColorDialog"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQColorDialog[] = {
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
class Q_DECL_EXPORT MyQColorDialog : public QColorDialog {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QColorDialog::staticMetaObject,
  qt_meta_stringdata_MyQColorDialog.data,
  qt_meta_data_MyQColorDialog,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQColorDialog.stringdata0))
      return static_cast<void*>(this);
  return QColorDialog::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QColorDialog::qt_metacall(_c, _id, _a);
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
  virtual ~MyQColorDialog() {}
// void QColorDialog(QWidget *)
MyQColorDialog(QWidget * parent) : QColorDialog(parent) {}
// void QColorDialog(const QColor &, QWidget *)
MyQColorDialog(const QColor & initial, QWidget * parent) : QColorDialog(initial, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QColorDialog::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void done(int)
  virtual void done(int result)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"done", &handled, 1, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QColorDialog::done(result);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QColorDialog_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQColorDialog* qo = (MyQColorDialog*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:109
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QColorDialog*)this_)->QColorDialog::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:110
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog4doneEi(void *this_, int result) {
  ((QColorDialog*)this_)->QColorDialog::done(result);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QColorDialog10metaObjectEv(void *this_) {
  return (void*)((QColorDialog*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QColorDialog11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QColorDialog*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QColorDialog11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QColorDialog*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QColorDialog2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QColorDialog::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QColorDialog6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QColorDialog::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qcolordialog.h:71
// [-2] void QColorDialog(QWidget *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN12QColorDialogC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQColorDialog*)(0);
  return  new MyQColorDialog(parent);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qcolordialog.h:72
// [-2] void QColorDialog(const QColor &, QWidget *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN12QColorDialogC2ERK6QColorP7QWidget(QColor* initial, QWidget * parent) {
  auto _nilp = (MyQColorDialog*)(0);
  return  new MyQColorDialog(*initial, parent);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:73
// [-2] void ~QColorDialog()
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialogD2Ev(void *this_) {
  delete (QColorDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:75
// [-2] void setCurrentColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog15setCurrentColorERK6QColor(void *this_, QColor* color) {
  ((QColorDialog*)this_)->setCurrentColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:76
// [16] QColor currentColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QColorDialog12currentColorEv(void *this_) {
  auto rv = ((QColorDialog*)this_)->currentColor();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:78
// [16] QColor selectedColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QColorDialog13selectedColorEv(void *this_) {
  auto rv = ((QColorDialog*)this_)->selectedColor();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:80
// [-2] void setOption(QColorDialog::ColorDialogOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog9setOptionENS_17ColorDialogOptionEb(void *this_, QColorDialog::ColorDialogOption option, bool on) {
  ((QColorDialog*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:81
// [1] bool testOption(QColorDialog::ColorDialogOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QColorDialog10testOptionENS_17ColorDialogOptionE(void *this_, QColorDialog::ColorDialogOption option) {
  return (bool)((QColorDialog*)this_)->testOption(option);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:82
// [-2] void setOptions(QColorDialog::ColorDialogOptions)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog10setOptionsE6QFlagsINS_17ColorDialogOptionEE(void *this_, QFlags<QColorDialog::ColorDialogOption> options) {
  ((QColorDialog*)this_)->setOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:83
// [4] QColorDialog::ColorDialogOptions options()
extern "C" Q_DECL_EXPORT
QColorDialog::ColorDialogOptions* C_ZNK12QColorDialog7optionsEv(void *this_) {
  auto rv = ((QColorDialog*)this_)->options();
return new QColorDialog::ColorDialogOptions(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qcolordialog.h:86
// [-2] void open(QObject *, const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QColorDialog*)this_)->open(receiver, member);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:88
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog10setVisibleEb(void *this_, bool visible) {
  ((QColorDialog*)this_)->setVisible(visible);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:90
// [16] QColor getColor(const QColor &, QWidget *, const QString &, QColorDialog::ColorDialogOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN12QColorDialog8getColorERK6QColorP7QWidgetRK7QString6QFlagsINS_17ColorDialogOptionEE(QColor* initial, QWidget * parent, QString* title, QFlags<QColorDialog::ColorDialogOption> options) {
  auto rv = QColorDialog::getColor(*initial, parent, *title, options);
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:96
// [4] QRgb getRgba(QRgb, bool *, QWidget *)
extern "C" Q_DECL_EXPORT
QRgb C_ZN12QColorDialog7getRgbaEjPbP7QWidget(QRgb rgba, bool * ok, QWidget * parent) {
  return (QRgb)QColorDialog::getRgba(rgba, ok, parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:98
// [4] int customCount()
extern "C" Q_DECL_EXPORT
int C_ZN12QColorDialog11customCountEv() {
  return (int)QColorDialog::customCount();
}

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qcolordialog.h:99
// [16] QColor customColor(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN12QColorDialog11customColorEi(int index) {
  auto rv = QColorDialog::customColor(index);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:100
// [-2] void setCustomColor(int, QColor)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog14setCustomColorEi6QColor(int index, QColor* color) {
  QColorDialog::setCustomColor(index, *color);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qcolordialog.h:101
// [16] QColor standardColor(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN12QColorDialog13standardColorEi(int index) {
  auto rv = QColorDialog::standardColor(index);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:102
// [-2] void setStandardColor(int, QColor)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog16setStandardColorEi6QColor(int index, QColor* color) {
  QColorDialog::setStandardColor(index, *color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:105
// [-2] void currentColorChanged(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog19currentColorChangedERK6QColor(void *this_, QColor* color) {
  ((QColorDialog*)this_)->currentColorChanged(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:106
// [-2] void colorSelected(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN12QColorDialog13colorSelectedERK6QColor(void *this_, QColor* color) {
  ((QColorDialog*)this_)->colorSelected(*color);
}

//  main block end
