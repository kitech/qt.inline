//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(fontdialog)
// /usr/include/qt/QtWidgets/qfontdialog.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFontDialog is pure virtual: false
// QFontDialog has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFontDialog_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFontDialog_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFontDialog_t qt_meta_stringdata_MyQFontDialog = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQFontDialog"
  },
  "MyQFontDialog"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFontDialog[] = {
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
class Q_DECL_EXPORT MyQFontDialog : public QFontDialog {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFontDialog::staticMetaObject,
  qt_meta_stringdata_MyQFontDialog.data,
  qt_meta_data_MyQFontDialog,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFontDialog.stringdata0))
      return static_cast<void*>(this);
  return QFontDialog::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFontDialog::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFontDialog() {}
// void QFontDialog(QWidget *)
MyQFontDialog(QWidget * parent) : QFontDialog(parent) {}
// void QFontDialog(const QFont &, QWidget *)
MyQFontDialog(const QFont & initial, QWidget * parent) : QFontDialog(initial, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFontDialog::changeEvent(event);
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
    QFontDialog::done(result);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QFontDialog::eventFilter(object, event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QFontDialog_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFontDialog* qo = (MyQFontDialog*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:103
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QFontDialog*)this_)->QFontDialog::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:104
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog4doneEi(void *this_, int result) {
  ((QFontDialog*)this_)->QFontDialog::done(result);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:105
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFontDialog11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QFontDialog*)this_)->QFontDialog::eventFilter(object, event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFontDialog10metaObjectEv(void *this_) {
  return (void*)((QFontDialog*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFontDialog11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFontDialog*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QFontDialog11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFontDialog*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFontDialog2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFontDialog::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFontDialog6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFontDialog::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qfontdialog.h:75
// [-2] void QFontDialog(QWidget *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN11QFontDialogC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQFontDialog*)(0);
  return  new MyQFontDialog(parent);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qfontdialog.h:76
// [-2] void QFontDialog(const QFont &, QWidget *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN11QFontDialogC2ERK5QFontP7QWidget(QFont* initial, QWidget * parent) {
  auto _nilp = (MyQFontDialog*)(0);
  return  new MyQFontDialog(*initial, parent);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:77
// [-2] void ~QFontDialog()
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialogD2Ev(void *this_) {
  delete (QFontDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qfontdialog.h:79
// [-2] void setCurrentFont(const QFont &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog14setCurrentFontERK5QFont(void *this_, QFont* font) {
  ((QFontDialog*)this_)->setCurrentFont(*font);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qfontdialog.h:80
// [16] QFont currentFont()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFontDialog11currentFontEv(void *this_) {
  auto rv = ((QFontDialog*)this_)->currentFont();
return new QFont(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:82
// [16] QFont selectedFont()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFontDialog12selectedFontEv(void *this_) {
  auto rv = ((QFontDialog*)this_)->selectedFont();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:84
// [-2] void setOption(QFontDialog::FontDialogOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog9setOptionENS_16FontDialogOptionEb(void *this_, QFontDialog::FontDialogOption option, bool on) {
  ((QFontDialog*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:85
// [1] bool testOption(QFontDialog::FontDialogOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFontDialog10testOptionENS_16FontDialogOptionE(void *this_, QFontDialog::FontDialogOption option) {
  return (bool)((QFontDialog*)this_)->testOption(option);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:86
// [-2] void setOptions(QFontDialog::FontDialogOptions)
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog10setOptionsE6QFlagsINS_16FontDialogOptionEE(void *this_, QFlags<QFontDialog::FontDialogOption> options) {
  ((QFontDialog*)this_)->setOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:87
// [4] QFontDialog::FontDialogOptions options()
extern "C" Q_DECL_EXPORT
QFontDialog::FontDialogOptions* C_ZNK11QFontDialog7optionsEv(void *this_) {
  auto rv = ((QFontDialog*)this_)->options();
return new QFontDialog::FontDialogOptions(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qfontdialog.h:90
// [-2] void open(QObject *, const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QFontDialog*)this_)->open(receiver, member);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:92
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog10setVisibleEb(void *this_, bool visible) {
  ((QFontDialog*)this_)->setVisible(visible);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:94
// [16] QFont getFont(bool *, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFontDialog7getFontEPbP7QWidget(bool * ok, QWidget * parent) {
  auto rv = QFontDialog::getFont(ok, parent);
return new QFont(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:95
// [16] QFont getFont(bool *, const QFont &, QWidget *, const QString &, QFontDialog::FontDialogOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFontDialog7getFontEPbRK5QFontP7QWidgetRK7QString6QFlagsINS_16FontDialogOptionEE(bool * ok, QFont* initial, QWidget * parent, QString* title, QFlags<QFontDialog::FontDialogOption> options) {
  auto rv = QFontDialog::getFont(ok, *initial, parent, *title, options);
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qfontdialog.h:99
// [-2] void currentFontChanged(const QFont &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog18currentFontChangedERK5QFont(void *this_, QFont* font) {
  ((QFontDialog*)this_)->currentFontChanged(*font);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qfontdialog.h:100
// [-2] void fontSelected(const QFont &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN11QFontDialog12fontSelectedERK5QFont(void *this_, QFont* font) {
  ((QFontDialog*)this_)->fontSelected(*font);
}
#endif // QT_VERSION >= 0x040500

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(fontdialog)
#endif // #ifndef QT_MINIMAL
//  footer block end
