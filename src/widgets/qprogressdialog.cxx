//  header block begin

// /usr/include/qt/QtWidgets/qprogressdialog.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qprogressdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QProgressDialog is pure virtual: false
// QProgressDialog has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQProgressDialog_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQProgressDialog_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQProgressDialog_t qt_meta_stringdata_MyQProgressDialog = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQProgressDialog"
  },
  "MyQProgressDialog"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQProgressDialog[] = {
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
class Q_DECL_EXPORT MyQProgressDialog : public QProgressDialog {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QProgressDialog::staticMetaObject,
  qt_meta_stringdata_MyQProgressDialog.data,
  qt_meta_data_MyQProgressDialog,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQProgressDialog.stringdata0))
      return static_cast<void*>(this);
  return QProgressDialog::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QProgressDialog::qt_metacall(_c, _id, _a);
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
  virtual ~MyQProgressDialog() {}
// void QProgressDialog(QWidget *, Qt::WindowFlags)
MyQProgressDialog(QWidget * parent, QFlags<Qt::WindowType> flags) : QProgressDialog(parent, flags) {}
// void QProgressDialog(const QString &, const QString &, int, int, QWidget *, Qt::WindowFlags)
MyQProgressDialog(const QString & labelText, const QString & cancelButtonText, int minimum, int maximum, QWidget * parent, QFlags<Qt::WindowType> flags) : QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QProgressDialog::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QProgressDialog::closeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QProgressDialog::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QProgressDialog::showEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QProgressDialog_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQProgressDialog* qo = (MyQProgressDialog*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:117
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QProgressDialog*)this_)->QProgressDialog::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:118
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QProgressDialog*)this_)->QProgressDialog::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:119
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QProgressDialog*)this_)->QProgressDialog::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:120
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QProgressDialog*)this_)->QProgressDialog::showEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QProgressDialog10metaObjectEv(void *this_) {
  return (void*)((QProgressDialog*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:60
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QProgressDialog11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QProgressDialog*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:60
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QProgressDialog11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QProgressDialog*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:60
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QProgressDialog2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QProgressDialog::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:60
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QProgressDialog6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QProgressDialog::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:72
// [-2] void QProgressDialog(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN15QProgressDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQProgressDialog*)(0);
  return  new MyQProgressDialog(parent, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:73
// [-2] void QProgressDialog(const QString &, const QString &, int, int, QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN15QProgressDialogC2ERK7QStringS2_iiP7QWidget6QFlagsIN2Qt10WindowTypeEE(QString* labelText, QString* cancelButtonText, int minimum, int maximum, QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQProgressDialog*)(0);
  return  new MyQProgressDialog(*labelText, *cancelButtonText, minimum, maximum, parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:76
// [-2] void ~QProgressDialog()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialogD2Ev(void *this_) {
  delete (QProgressDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:78
// [-2] void setLabel(QLabel *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog8setLabelEP6QLabel(void *this_, QLabel * label) {
  ((QProgressDialog*)this_)->setLabel(label);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:79
// [-2] void setCancelButton(QPushButton *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog15setCancelButtonEP11QPushButton(void *this_, QPushButton * button) {
  ((QProgressDialog*)this_)->setCancelButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:80
// [-2] void setBar(QProgressBar *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog6setBarEP12QProgressBar(void *this_, QProgressBar * bar) {
  ((QProgressDialog*)this_)->setBar(bar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:82
// [1] bool wasCanceled()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QProgressDialog11wasCanceledEv(void *this_) {
  return (bool)((QProgressDialog*)this_)->wasCanceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:84
// [4] int minimum()
extern "C" Q_DECL_EXPORT
int C_ZNK15QProgressDialog7minimumEv(void *this_) {
  return (int)((QProgressDialog*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:85
// [4] int maximum()
extern "C" Q_DECL_EXPORT
int C_ZNK15QProgressDialog7maximumEv(void *this_) {
  return (int)((QProgressDialog*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:87
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK15QProgressDialog5valueEv(void *this_) {
  return (int)((QProgressDialog*)this_)->value();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:89
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QProgressDialog8sizeHintEv(void *this_) {
  auto rv = ((QProgressDialog*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:91
// [8] QString labelText()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QProgressDialog9labelTextEv(void *this_) {
  auto rv = ((QProgressDialog*)this_)->labelText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:92
// [4] int minimumDuration()
extern "C" Q_DECL_EXPORT
int C_ZNK15QProgressDialog15minimumDurationEv(void *this_) {
  return (int)((QProgressDialog*)this_)->minimumDuration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:94
// [-2] void setAutoReset(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog12setAutoResetEb(void *this_, bool reset) {
  ((QProgressDialog*)this_)->setAutoReset(reset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:95
// [1] bool autoReset()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QProgressDialog9autoResetEv(void *this_) {
  return (bool)((QProgressDialog*)this_)->autoReset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:96
// [-2] void setAutoClose(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog12setAutoCloseEb(void *this_, bool close) {
  ((QProgressDialog*)this_)->setAutoClose(close);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:97
// [1] bool autoClose()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QProgressDialog9autoCloseEv(void *this_) {
  return (bool)((QProgressDialog*)this_)->autoClose();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qprogressdialog.h:100
// [-2] void open(QObject *, const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QProgressDialog*)this_)->open(receiver, member);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:103
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog6cancelEv(void *this_) {
  ((QProgressDialog*)this_)->cancel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:104
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog5resetEv(void *this_) {
  ((QProgressDialog*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:105
// [-2] void setMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog10setMaximumEi(void *this_, int maximum) {
  ((QProgressDialog*)this_)->setMaximum(maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:106
// [-2] void setMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog10setMinimumEi(void *this_, int minimum) {
  ((QProgressDialog*)this_)->setMinimum(minimum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:107
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog8setRangeEii(void *this_, int minimum, int maximum) {
  ((QProgressDialog*)this_)->setRange(minimum, maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:108
// [-2] void setValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog8setValueEi(void *this_, int progress) {
  ((QProgressDialog*)this_)->setValue(progress);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:109
// [-2] void setLabelText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog12setLabelTextERK7QString(void *this_, QString* text) {
  ((QProgressDialog*)this_)->setLabelText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:110
// [-2] void setCancelButtonText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog19setCancelButtonTextERK7QString(void *this_, QString* text) {
  ((QProgressDialog*)this_)->setCancelButtonText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:111
// [-2] void setMinimumDuration(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog18setMinimumDurationEi(void *this_, int ms) {
  ((QProgressDialog*)this_)->setMinimumDuration(ms);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:114
// [-2] void canceled()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog8canceledEv(void *this_) {
  ((QProgressDialog*)this_)->canceled();
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
