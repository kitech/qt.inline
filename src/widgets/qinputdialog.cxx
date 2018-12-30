//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(inputdialog)
// /usr/include/qt/QtWidgets/qinputdialog.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qinputdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QInputDialog is pure virtual: false
// QInputDialog has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQInputDialog_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQInputDialog_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQInputDialog_t qt_meta_stringdata_MyQInputDialog = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQInputDialog"
  },
  "MyQInputDialog"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQInputDialog[] = {
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
class Q_DECL_EXPORT MyQInputDialog : public QInputDialog {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QInputDialog::staticMetaObject,
  qt_meta_stringdata_MyQInputDialog.data,
  qt_meta_data_MyQInputDialog,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQInputDialog.stringdata0))
      return static_cast<void*>(this);
  return QInputDialog::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QInputDialog::qt_metacall(_c, _id, _a);
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
  virtual ~MyQInputDialog() {}
// void QInputDialog(QWidget *, Qt::WindowFlags)
MyQInputDialog(QWidget * parent, QFlags<Qt::WindowType> flags) : QInputDialog(parent, flags) {}
};

extern "C" Q_DECL_EXPORT
void* C_QInputDialog_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQInputDialog* qo = (MyQInputDialog*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QInputDialog10metaObjectEv(void *this_) {
  return (void*)((QInputDialog*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QInputDialog11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QInputDialog*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QInputDialog11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QInputDialog*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QInputDialog2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QInputDialog::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QInputDialog6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QInputDialog::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qinputdialog.h:94
// [-2] void QInputDialog(QWidget *, Qt::WindowFlags)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN12QInputDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  return  new MyQInputDialog(parent, flags);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qinputdialog.h:95
// [-2] void ~QInputDialog()
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialogD2Ev(void *this_) {
  delete (QInputDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:97
// [-2] void setInputMode(QInputDialog::InputMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog12setInputModeENS_9InputModeE(void *this_, QInputDialog::InputMode mode) {
  ((QInputDialog*)this_)->setInputMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:98
// [4] QInputDialog::InputMode inputMode()
extern "C" Q_DECL_EXPORT
QInputDialog::InputMode C_ZNK12QInputDialog9inputModeEv(void *this_) {
  return (QInputDialog::InputMode)((QInputDialog*)this_)->inputMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:100
// [-2] void setLabelText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog12setLabelTextERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->setLabelText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:101
// [8] QString labelText()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QInputDialog9labelTextEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->labelText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:103
// [-2] void setOption(QInputDialog::InputDialogOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog9setOptionENS_17InputDialogOptionEb(void *this_, QInputDialog::InputDialogOption option, bool on) {
  ((QInputDialog*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:104
// [1] bool testOption(QInputDialog::InputDialogOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QInputDialog10testOptionENS_17InputDialogOptionE(void *this_, QInputDialog::InputDialogOption option) {
  return (bool)((QInputDialog*)this_)->testOption(option);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:105
// [-2] void setOptions(QInputDialog::InputDialogOptions)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog10setOptionsE6QFlagsINS_17InputDialogOptionEE(void *this_, QFlags<QInputDialog::InputDialogOption> options) {
  ((QInputDialog*)this_)->setOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:106
// [4] QInputDialog::InputDialogOptions options()
extern "C" Q_DECL_EXPORT
QInputDialog::InputDialogOptions* C_ZNK12QInputDialog7optionsEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->options();
return new QInputDialog::InputDialogOptions(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:108
// [-2] void setTextValue(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog12setTextValueERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->setTextValue(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:109
// [8] QString textValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QInputDialog9textValueEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->textValue();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:111
// [-2] void setTextEchoMode(QLineEdit::EchoMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog15setTextEchoModeEN9QLineEdit8EchoModeE(void *this_, QLineEdit::EchoMode mode) {
  ((QInputDialog*)this_)->setTextEchoMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:112
// [4] QLineEdit::EchoMode textEchoMode()
extern "C" Q_DECL_EXPORT
QLineEdit::EchoMode C_ZNK12QInputDialog12textEchoModeEv(void *this_) {
  return (QLineEdit::EchoMode)((QInputDialog*)this_)->textEchoMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:114
// [-2] void setComboBoxEditable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog19setComboBoxEditableEb(void *this_, bool editable) {
  ((QInputDialog*)this_)->setComboBoxEditable(editable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:115
// [1] bool isComboBoxEditable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QInputDialog18isComboBoxEditableEv(void *this_) {
  return (bool)((QInputDialog*)this_)->isComboBoxEditable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:117
// [-2] void setComboBoxItems(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog16setComboBoxItemsERK11QStringList(void *this_, QStringList* items) {
  ((QInputDialog*)this_)->setComboBoxItems(*items);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:118
// [8] QStringList comboBoxItems()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QInputDialog13comboBoxItemsEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->comboBoxItems();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:120
// [-2] void setIntValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog11setIntValueEi(void *this_, int value) {
  ((QInputDialog*)this_)->setIntValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:121
// [4] int intValue()
extern "C" Q_DECL_EXPORT
int C_ZNK12QInputDialog8intValueEv(void *this_) {
  return (int)((QInputDialog*)this_)->intValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:123
// [-2] void setIntMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog13setIntMinimumEi(void *this_, int min) {
  ((QInputDialog*)this_)->setIntMinimum(min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:124
// [4] int intMinimum()
extern "C" Q_DECL_EXPORT
int C_ZNK12QInputDialog10intMinimumEv(void *this_) {
  return (int)((QInputDialog*)this_)->intMinimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:126
// [-2] void setIntMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog13setIntMaximumEi(void *this_, int max) {
  ((QInputDialog*)this_)->setIntMaximum(max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:127
// [4] int intMaximum()
extern "C" Q_DECL_EXPORT
int C_ZNK12QInputDialog10intMaximumEv(void *this_) {
  return (int)((QInputDialog*)this_)->intMaximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:129
// [-2] void setIntRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog11setIntRangeEii(void *this_, int min, int max) {
  ((QInputDialog*)this_)->setIntRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:131
// [-2] void setIntStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog10setIntStepEi(void *this_, int step) {
  ((QInputDialog*)this_)->setIntStep(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:132
// [4] int intStep()
extern "C" Q_DECL_EXPORT
int C_ZNK12QInputDialog7intStepEv(void *this_) {
  return (int)((QInputDialog*)this_)->intStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:134
// [-2] void setDoubleValue(double)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog14setDoubleValueEd(void *this_, double value) {
  ((QInputDialog*)this_)->setDoubleValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:135
// [8] double doubleValue()
extern "C" Q_DECL_EXPORT
double C_ZNK12QInputDialog11doubleValueEv(void *this_) {
  return (double)((QInputDialog*)this_)->doubleValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:137
// [-2] void setDoubleMinimum(double)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog16setDoubleMinimumEd(void *this_, double min) {
  ((QInputDialog*)this_)->setDoubleMinimum(min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:138
// [8] double doubleMinimum()
extern "C" Q_DECL_EXPORT
double C_ZNK12QInputDialog13doubleMinimumEv(void *this_) {
  return (double)((QInputDialog*)this_)->doubleMinimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:140
// [-2] void setDoubleMaximum(double)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog16setDoubleMaximumEd(void *this_, double max) {
  ((QInputDialog*)this_)->setDoubleMaximum(max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:141
// [8] double doubleMaximum()
extern "C" Q_DECL_EXPORT
double C_ZNK12QInputDialog13doubleMaximumEv(void *this_) {
  return (double)((QInputDialog*)this_)->doubleMaximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:143
// [-2] void setDoubleRange(double, double)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog14setDoubleRangeEdd(void *this_, double min, double max) {
  ((QInputDialog*)this_)->setDoubleRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:145
// [-2] void setDoubleDecimals(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog17setDoubleDecimalsEi(void *this_, int decimals) {
  ((QInputDialog*)this_)->setDoubleDecimals(decimals);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:146
// [4] int doubleDecimals()
extern "C" Q_DECL_EXPORT
int C_ZNK12QInputDialog14doubleDecimalsEv(void *this_) {
  return (int)((QInputDialog*)this_)->doubleDecimals();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:148
// [-2] void setOkButtonText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog15setOkButtonTextERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->setOkButtonText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:149
// [8] QString okButtonText()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QInputDialog12okButtonTextEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->okButtonText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:151
// [-2] void setCancelButtonText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog19setCancelButtonTextERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->setCancelButtonText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:152
// [8] QString cancelButtonText()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QInputDialog16cancelButtonTextEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->cancelButtonText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qinputdialog.h:155
// [-2] void open(QObject *, const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QInputDialog*)this_)->open(receiver, member);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:157
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QInputDialog15minimumSizeHintEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:158
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QInputDialog8sizeHintEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:160
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog10setVisibleEb(void *this_, bool visible) {
  ((QInputDialog*)this_)->setVisible(visible);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:162
// [8] QString getText(QWidget *, const QString &, const QString &, QLineEdit::EchoMode, const QString &, bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C" Q_DECL_EXPORT
void* C_ZN12QInputDialog7getTextEP7QWidgetRK7QStringS4_N9QLineEdit8EchoModeES4_Pb6QFlagsIN2Qt10WindowTypeEES8_INS9_15InputMethodHintEE(QWidget * parent, QString* title, QString* label, QLineEdit::EchoMode echo, QString* text, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  auto rv = QInputDialog::getText(parent, *title, *label, echo, *text, ok, flags, inputMethodHints);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qinputdialog.h:167
// [8] QString getMultiLineText(QWidget *, const QString &, const QString &, const QString &, bool *, Qt::WindowFlags, Qt::InputMethodHints)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN12QInputDialog16getMultiLineTextEP7QWidgetRK7QStringS4_S4_Pb6QFlagsIN2Qt10WindowTypeEES6_INS7_15InputMethodHintEE(QWidget * parent, QString* title, QString* label, QString* text, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  auto rv = QInputDialog::getMultiLineText(parent, *title, *label, *text, ok, flags, inputMethodHints);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:171
// [8] QString getItem(QWidget *, const QString &, const QString &, const QStringList &, int, bool, bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C" Q_DECL_EXPORT
void* C_ZN12QInputDialog7getItemEP7QWidgetRK7QStringS4_RK11QStringListibPb6QFlagsIN2Qt10WindowTypeEES9_INSA_15InputMethodHintEE(QWidget * parent, QString* title, QString* label, QStringList* items, int current, bool editable, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  auto rv = QInputDialog::getItem(parent, *title, *label, *items, current, editable, ok, flags, inputMethodHints);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qinputdialog.h:176
// [4] int getInt(QWidget *, const QString &, const QString &, int, int, int, int, bool *, Qt::WindowFlags)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN12QInputDialog6getIntEP7QWidgetRK7QStringS4_iiiiPb6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QString* title, QString* label, int value, int minValue, int maxValue, int step, bool * ok, QFlags<Qt::WindowType> flags) {
  return (int)QInputDialog::getInt(parent, *title, *label, value, minValue, maxValue, step, ok, flags);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:179
// [8] double getDouble(QWidget *, const QString &, const QString &, double, double, double, int, bool *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
double C_ZN12QInputDialog9getDoubleEP7QWidgetRK7QStringS4_dddiPb6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QString* title, QString* label, double value, double minValue, double maxValue, int decimals, bool * ok, QFlags<Qt::WindowType> flags) {
  return (double)QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue, decimals, ok, flags);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:183
// [8] double getDouble(QWidget *, const QString &, const QString &, double, double, double, int, bool *, Qt::WindowFlags, double)
extern "C" Q_DECL_EXPORT
double C_ZN12QInputDialog9getDoubleEP7QWidgetRK7QStringS4_dddiPb6QFlagsIN2Qt10WindowTypeEEd(QWidget * parent, QString* title, QString* label, double value, double minValue, double maxValue, int decimals, bool * ok, QFlags<Qt::WindowType> flags, double step) {
  return (double)QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue, decimals, ok, flags, step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:196
// [-2] void setDoubleStep(double)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog13setDoubleStepEd(void *this_, double step) {
  ((QInputDialog*)this_)->setDoubleStep(step);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:197
// [8] double doubleStep()
extern "C" Q_DECL_EXPORT
double C_ZNK12QInputDialog10doubleStepEv(void *this_) {
  return (double)((QInputDialog*)this_)->doubleStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:201
// [-2] void textValueChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog16textValueChangedERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->textValueChanged(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:202
// [-2] void textValueSelected(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog17textValueSelectedERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->textValueSelected(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:203
// [-2] void intValueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog15intValueChangedEi(void *this_, int value) {
  ((QInputDialog*)this_)->intValueChanged(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:204
// [-2] void intValueSelected(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog16intValueSelectedEi(void *this_, int value) {
  ((QInputDialog*)this_)->intValueSelected(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:205
// [-2] void doubleValueChanged(double)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog18doubleValueChangedEd(void *this_, double value) {
  ((QInputDialog*)this_)->doubleValueChanged(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:206
// [-2] void doubleValueSelected(double)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog19doubleValueSelectedEd(void *this_, double value) {
  ((QInputDialog*)this_)->doubleValueSelected(value);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:209
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QInputDialog4doneEi(void *this_, int result) {
  ((QInputDialog*)this_)->done(result);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(inputdialog)
#endif // #ifndef QT_MINIMAL
//  footer block end
