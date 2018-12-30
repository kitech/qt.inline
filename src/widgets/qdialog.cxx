//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(dialog)
// /usr/include/qt/QtWidgets/qdialog.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDialog is pure virtual: false
// QDialog has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDialog_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDialog_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDialog_t qt_meta_stringdata_MyQDialog = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQDialog"
  },
  "MyQDialog"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDialog[] = {
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
class Q_DECL_EXPORT MyQDialog : public QDialog {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDialog::staticMetaObject,
  qt_meta_stringdata_MyQDialog.data,
  qt_meta_data_MyQDialog,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDialog.stringdata0))
      return static_cast<void*>(this);
  return QDialog::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDialog::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDialog() {}
// void QDialog(QWidget *, Qt::WindowFlags)
MyQDialog(QWidget * parent, QFlags<Qt::WindowType> f) : QDialog(parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDialog::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDialog::closeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDialog::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDialog::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDialog::contextMenuEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QDialog::eventFilter(arg0, arg1);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QDialog_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDialog* qo = (MyQDialog*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:104
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QDialog*)this_)->QDialog::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:105
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog10closeEventEP11QCloseEvent(void *this_, QCloseEvent * arg0) {
  ((QDialog*)this_)->QDialog::closeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:106
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QDialog*)this_)->QDialog::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:107
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QDialog*)this_)->QDialog::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:109
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * arg0) {
  ((QDialog*)this_)->QDialog::contextMenuEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:111
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QDialog11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QDialog*)this_)->QDialog::eventFilter(arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QDialog10metaObjectEv(void *this_) {
  return (void*)((QDialog*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QDialog11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDialog*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QDialog11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDialog*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QDialog2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDialog::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QDialog6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDialog::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:63
// [-2] void QDialog(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQDialog*)(0);
  return  new MyQDialog(parent, f);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:64
// [-2] void ~QDialog()
extern "C" Q_DECL_EXPORT
void C_ZN7QDialogD2Ev(void *this_) {
  delete (QDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:68
// [4] int result()
extern "C" Q_DECL_EXPORT
int C_ZNK7QDialog6resultEv(void *this_) {
  return (int)((QDialog*)this_)->result();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:70
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog10setVisibleEb(void *this_, bool visible) {
  ((QDialog*)this_)->setVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:72
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QDialog*)this_)->setOrientation(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:73
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK7QDialog11orientationEv(void *this_) {
  return (Qt::Orientation)((QDialog*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:75
// [-2] void setExtension(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog12setExtensionEP7QWidget(void *this_, QWidget * extension) {
  ((QDialog*)this_)->setExtension(extension);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:76
// [8] QWidget * extension()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QDialog9extensionEv(void *this_) {
  return (void*)((QDialog*)this_)->extension();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:78
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QDialog8sizeHintEv(void *this_) {
  auto rv = ((QDialog*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:79
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QDialog15minimumSizeHintEv(void *this_) {
  auto rv = ((QDialog*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:81
// [-2] void setSizeGripEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog18setSizeGripEnabledEb(void *this_, bool arg0) {
  ((QDialog*)this_)->setSizeGripEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:82
// [1] bool isSizeGripEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QDialog17isSizeGripEnabledEv(void *this_) {
  return (bool)((QDialog*)this_)->isSizeGripEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:84
// [-2] void setModal(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog8setModalEb(void *this_, bool modal) {
  ((QDialog*)this_)->setModal(modal);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:85
// [-2] void setResult(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog9setResultEi(void *this_, int r) {
  ((QDialog*)this_)->setResult(r);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qdialog.h:88
// [-2] void finished(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog8finishedEi(void *this_, int result) {
  ((QDialog*)this_)->finished(result);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qdialog.h:89
// [-2] void accepted()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog8acceptedEv(void *this_) {
  ((QDialog*)this_)->accepted();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qdialog.h:90
// [-2] void rejected()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog8rejectedEv(void *this_) {
  ((QDialog*)this_)->rejected();
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qdialog.h:93
// [-2] void open()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog4openEv(void *this_) {
  ((QDialog*)this_)->open();
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:94
// [4] int exec()
extern "C" Q_DECL_EXPORT
int C_ZN7QDialog4execEv(void *this_) {
  return (int)((QDialog*)this_)->exec();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:95
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog4doneEi(void *this_, int arg0) {
  ((QDialog*)this_)->done(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:96
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog6acceptEv(void *this_) {
  ((QDialog*)this_)->accept();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:97
// [-2] void reject()
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog6rejectEv(void *this_) {
  ((QDialog*)this_)->reject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:99
// [-2] void showExtension(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog13showExtensionEb(void *this_, bool arg0) {
  ((QDialog*)this_)->showExtension(arg0);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dialog)
#endif // #ifndef QT_MINIMAL
//  footer block end
