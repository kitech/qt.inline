// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qinputdialog.h
// dst-file: /src/widgets/qinputdialog.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qinputdialog.h>


#include <qstring.h>
#include <qstringlist.h>
#include <qlineedit.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qinputdialog_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QInputDialog_Class_Size()
{
  return sizeof(QInputDialog);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 139, column 12>
//   // proto:  double QInputDialog::doubleMaximum();
// _ZNK12QInputDialog13doubleMaximumEv doubleMaximum()
extern "C"
double
C_ZNK12QInputDialog13doubleMaximumEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->doubleMaximum();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 124, column 10>
//   // proto:  void QInputDialog::setIntMaximum(int max);
// _ZN12QInputDialog13setIntMaximumEi setIntMaximum(int)
extern "C"
void
C_ZN12QInputDialog13setIntMaximumEi(void *qthis,
int arg1) {
  ((QInputDialog*)qthis)->setIntMaximum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 56, column 5>
//   // proto:  const QMetaObject * QInputDialog::metaObject();
// _ZNK12QInputDialog10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QInputDialog10metaObjectEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 129, column 10>
//   // proto:  void QInputDialog::setIntStep(int step);
// _ZN12QInputDialog10setIntStepEi setIntStep(int)
extern "C"
void
C_ZN12QInputDialog10setIntStepEi(void *qthis,
int arg1) {
  ((QInputDialog*)qthis)->setIntStep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 165, column 20>
//   // proto: static QString QInputDialog::getMultiLineText(QWidget * parent, const QString & title, const QString & label, const QString & text, bool * ok, Qt::WindowFlags flags, Qt::InputMethodHints inputMethodHints);
// _ZN12QInputDialog16getMultiLineTextEP7QWidgetRK7QStringS4_S4_Pb6QFlagsIN2Qt10WindowTypeEES6_INS7_15InputMethodHintEE getMultiLineText(class QWidget *, const class QString &, const class QString &, const class QString &, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
QString*
C_ZN12QInputDialog16getMultiLineTextEP7QWidgetRK7QStringS4_S4_Pb6QFlagsIN2Qt10WindowTypeEES6_INS7_15InputMethodHintEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
bool * arg5,
Qt::WindowFlags* arg6,
Qt::InputMethodHints* arg7) {
  auto ret =
  QInputDialog::getMultiLineText(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
arg5,
*((Qt::WindowFlags*)arg6),
*((Qt::InputMethodHints*)arg7));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 125, column 9>
//   // proto:  int QInputDialog::intMaximum();
// _ZNK12QInputDialog10intMaximumEv intMaximum()
extern "C"
int
C_ZNK12QInputDialog10intMaximumEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->intMaximum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 92, column 5>
//   // proto:  void QInputDialog::QInputDialog(QWidget * parent, Qt::WindowFlags flags);
extern "C"
QInputDialog*
C_ZN12QInputDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QInputDialog(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 130, column 9>
//   // proto:  int QInputDialog::intStep();
// _ZNK12QInputDialog7intStepEv intStep()
extern "C"
int
C_ZNK12QInputDialog7intStepEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->intStep();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 144, column 9>
//   // proto:  int QInputDialog::doubleDecimals();
// _ZNK12QInputDialog14doubleDecimalsEv doubleDecimals()
extern "C"
int
C_ZNK12QInputDialog14doubleDecimalsEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->doubleDecimals();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 143, column 10>
//   // proto:  void QInputDialog::setDoubleDecimals(int decimals);
// _ZN12QInputDialog17setDoubleDecimalsEi setDoubleDecimals(int)
extern "C"
void
C_ZN12QInputDialog17setDoubleDecimalsEi(void *qthis,
int arg1) {
  ((QInputDialog*)qthis)->setDoubleDecimals(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 194, column 10>
//   // proto:  void QInputDialog::intValueChanged(int value);
// _ZN12QInputDialog15intValueChangedEi intValueChanged(int)
extern "C"
void
C_ZN12QInputDialog15intValueChangedEi(void *qthis,
int arg1) {
  ((QInputDialog*)qthis)->intValueChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 121, column 10>
//   // proto:  void QInputDialog::setIntMinimum(int min);
// _ZN12QInputDialog13setIntMinimumEi setIntMinimum(int)
extern "C"
void
C_ZN12QInputDialog13setIntMinimumEi(void *qthis,
int arg1) {
  ((QInputDialog*)qthis)->setIntMinimum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 106, column 10>
//   // proto:  void QInputDialog::setTextValue(const QString & text);
// _ZN12QInputDialog12setTextValueERK7QString setTextValue(const class QString &)
extern "C"
void
C_ZN12QInputDialog12setTextValueERK7QString(void *qthis,
const QString* arg1) {
  ((QInputDialog*)qthis)->setTextValue(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 200, column 10>
//   // proto:  void QInputDialog::done(int result);
// _ZN12QInputDialog4doneEi done(int)
extern "C"
void
C_ZN12QInputDialog4doneEi(void *qthis,
int arg1) {
  ((QInputDialog*)qthis)->done(arg1);
}
//   // proto:  void QInputDialog::~QInputDialog();
extern "C"
void C_ZN12QInputDialogD2Ev(void *qthis) {
  delete (QInputDialog*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 193, column 10>
//   // proto:  void QInputDialog::textValueSelected(const QString & text);
// _ZN12QInputDialog17textValueSelectedERK7QString textValueSelected(const class QString &)
extern "C"
void
C_ZN12QInputDialog17textValueSelectedERK7QString(void *qthis,
const QString* arg1) {
  ((QInputDialog*)qthis)->textValueSelected(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 98, column 10>
//   // proto:  void QInputDialog::setLabelText(const QString & text);
// _ZN12QInputDialog12setLabelTextERK7QString setLabelText(const class QString &)
extern "C"
void
C_ZN12QInputDialog12setLabelTextERK7QString(void *qthis,
const QString* arg1) {
  ((QInputDialog*)qthis)->setLabelText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 99, column 13>
//   // proto:  QString QInputDialog::labelText();
// _ZNK12QInputDialog9labelTextEv labelText()
extern "C"
QString*
C_ZNK12QInputDialog9labelTextEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->labelText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 146, column 10>
//   // proto:  void QInputDialog::setOkButtonText(const QString & text);
// _ZN12QInputDialog15setOkButtonTextERK7QString setOkButtonText(const class QString &)
extern "C"
void
C_ZN12QInputDialog15setOkButtonTextERK7QString(void *qthis,
const QString* arg1) {
  ((QInputDialog*)qthis)->setOkButtonText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 116, column 17>
//   // proto:  QStringList QInputDialog::comboBoxItems();
// _ZNK12QInputDialog13comboBoxItemsEv comboBoxItems()
extern "C"
QStringList*
C_ZNK12QInputDialog13comboBoxItemsEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->comboBoxItems();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 122, column 9>
//   // proto:  int QInputDialog::intMinimum();
// _ZNK12QInputDialog10intMinimumEv intMinimum()
extern "C"
int
C_ZNK12QInputDialog10intMinimumEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->intMinimum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 112, column 10>
//   // proto:  void QInputDialog::setComboBoxEditable(bool editable);
// _ZN12QInputDialog19setComboBoxEditableEb setComboBoxEditable(_Bool)
extern "C"
void
C_ZN12QInputDialog19setComboBoxEditableEb(void *qthis,
bool arg1) {
  ((QInputDialog*)qthis)->setComboBoxEditable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 158, column 10>
//   // proto:  void QInputDialog::setVisible(bool visible);
// _ZN12QInputDialog10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN12QInputDialog10setVisibleEb(void *qthis,
bool arg1) {
  ((QInputDialog*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 135, column 10>
//   // proto:  void QInputDialog::setDoubleMinimum(double min);
// _ZN12QInputDialog16setDoubleMinimumEd setDoubleMinimum(double)
extern "C"
void
C_ZN12QInputDialog16setDoubleMinimumEd(void *qthis,
double arg1) {
  ((QInputDialog*)qthis)->setDoubleMinimum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 136, column 12>
//   // proto:  double QInputDialog::doubleMinimum();
// _ZNK12QInputDialog13doubleMinimumEv doubleMinimum()
extern "C"
double
C_ZNK12QInputDialog13doubleMinimumEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->doubleMinimum();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 150, column 13>
//   // proto:  QString QInputDialog::cancelButtonText();
// _ZNK12QInputDialog16cancelButtonTextEv cancelButtonText()
extern "C"
QString*
C_ZNK12QInputDialog16cancelButtonTextEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->cancelButtonText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 115, column 10>
//   // proto:  void QInputDialog::setComboBoxItems(const QStringList & items);
// _ZN12QInputDialog16setComboBoxItemsERK11QStringList setComboBoxItems(const class QStringList &)
extern "C"
void
C_ZN12QInputDialog16setComboBoxItemsERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QInputDialog*)qthis)->setComboBoxItems(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 110, column 25>
//   // proto:  QLineEdit::EchoMode QInputDialog::textEchoMode();
// _ZNK12QInputDialog12textEchoModeEv textEchoMode()
extern "C"
QLineEdit::EchoMode
C_ZNK12QInputDialog12textEchoModeEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->textEchoMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 113, column 10>
//   // proto:  bool QInputDialog::isComboBoxEditable();
// _ZNK12QInputDialog18isComboBoxEditableEv isComboBoxEditable()
extern "C"
bool
C_ZNK12QInputDialog18isComboBoxEditableEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->isComboBoxEditable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 102, column 10>
//   // proto:  bool QInputDialog::testOption(QInputDialog::InputDialogOption option);
// _ZNK12QInputDialog10testOptionENS_17InputDialogOptionE testOption(enum QInputDialog::InputDialogOption)
extern "C"
bool
C_ZNK12QInputDialog10testOptionENS_17InputDialogOptionE(void *qthis,
QInputDialog::InputDialogOption arg1) {
  auto ret =
  ((QInputDialog*)qthis)->testOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 153, column 10>
//   // proto:  void QInputDialog::open(QObject * receiver, const char * member);
// _ZN12QInputDialog4openEP7QObjectPKc open(class QObject *, const char *)
extern "C"
void
C_ZN12QInputDialog4openEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  ((QInputDialog*)qthis)->open(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 196, column 10>
//   // proto:  void QInputDialog::doubleValueChanged(double value);
// _ZN12QInputDialog18doubleValueChangedEd doubleValueChanged(double)
extern "C"
void
C_ZN12QInputDialog18doubleValueChangedEd(void *qthis,
double arg1) {
  ((QInputDialog*)qthis)->doubleValueChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 147, column 13>
//   // proto:  QString QInputDialog::okButtonText();
// _ZNK12QInputDialog12okButtonTextEv okButtonText()
extern "C"
QString*
C_ZNK12QInputDialog12okButtonTextEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->okButtonText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 103, column 10>
//   // proto:  void QInputDialog::setOptions(InputDialogOptions options);
// _ZN12QInputDialog10setOptionsE6QFlagsINS_17InputDialogOptionEE setOptions(InputDialogOptions)
extern "C"
void
C_ZN12QInputDialog10setOptionsE6QFlagsINS_17InputDialogOptionEE(void *qthis,
QInputDialog::InputDialogOptions arg1) {
  ((QInputDialog*)qthis)->setOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 101, column 10>
//   // proto:  void QInputDialog::setOption(QInputDialog::InputDialogOption option, bool on);
// _ZN12QInputDialog9setOptionENS_17InputDialogOptionEb setOption(enum QInputDialog::InputDialogOption, _Bool)
extern "C"
void
C_ZN12QInputDialog9setOptionENS_17InputDialogOptionEb(void *qthis,
QInputDialog::InputDialogOption arg1,
bool arg2) {
  ((QInputDialog*)qthis)->setOption(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 156, column 11>
//   // proto:  QSize QInputDialog::sizeHint();
// _ZNK12QInputDialog8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK12QInputDialog8sizeHintEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 177, column 19>
//   // proto: static double QInputDialog::getDouble(QWidget * parent, const QString & title, const QString & label, double value, double minValue, double maxValue, int decimals, bool * ok, Qt::WindowFlags flags);
// _ZN12QInputDialog9getDoubleEP7QWidgetRK7QStringS4_dddiPb6QFlagsIN2Qt10WindowTypeEE getDouble(class QWidget *, const class QString &, const class QString &, double, double, double, int, _Bool *, Qt::WindowFlags)
extern "C"
double
C_ZN12QInputDialog9getDoubleEP7QWidgetRK7QStringS4_dddiPb6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
double arg4,
double arg5,
double arg6,
int arg7,
bool * arg8,
Qt::WindowFlags* arg9) {
  auto ret =
  QInputDialog::getDouble(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5,
arg6,
arg7,
arg8,
*((Qt::WindowFlags*)arg9));
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 169, column 20>
//   // proto: static QString QInputDialog::getItem(QWidget * parent, const QString & title, const QString & label, const QStringList & items, int current, bool editable, bool * ok, Qt::WindowFlags flags, Qt::InputMethodHints inputMethodHints);
// _ZN12QInputDialog7getItemEP7QWidgetRK7QStringS4_RK11QStringListibPb6QFlagsIN2Qt10WindowTypeEES9_INSA_15InputMethodHintEE getItem(class QWidget *, const class QString &, const class QString &, const class QStringList &, int, _Bool, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
QString*
C_ZN12QInputDialog7getItemEP7QWidgetRK7QStringS4_RK11QStringListibPb6QFlagsIN2Qt10WindowTypeEES9_INSA_15InputMethodHintEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QStringList* arg4,
int arg5,
bool arg6,
bool * arg7,
Qt::WindowFlags* arg8,
Qt::InputMethodHints* arg9) {
  auto ret =
  QInputDialog::getItem(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QStringList*)arg4),
arg5,
arg6,
arg7,
*((Qt::WindowFlags*)arg8),
*((Qt::InputMethodHints*)arg9));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 127, column 10>
//   // proto:  void QInputDialog::setIntRange(int min, int max);
// _ZN12QInputDialog11setIntRangeEii setIntRange(int, int)
extern "C"
void
C_ZN12QInputDialog11setIntRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QInputDialog*)qthis)->setIntRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 155, column 11>
//   // proto:  QSize QInputDialog::minimumSizeHint();
// _ZNK12QInputDialog15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK12QInputDialog15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 95, column 10>
//   // proto:  void QInputDialog::setInputMode(QInputDialog::InputMode mode);
// _ZN12QInputDialog12setInputModeENS_9InputModeE setInputMode(enum QInputDialog::InputMode)
extern "C"
void
C_ZN12QInputDialog12setInputModeENS_9InputModeE(void *qthis,
QInputDialog::InputMode arg1) {
  ((QInputDialog*)qthis)->setInputMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 132, column 10>
//   // proto:  void QInputDialog::setDoubleValue(double value);
// _ZN12QInputDialog14setDoubleValueEd setDoubleValue(double)
extern "C"
void
C_ZN12QInputDialog14setDoubleValueEd(void *qthis,
double arg1) {
  ((QInputDialog*)qthis)->setDoubleValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 118, column 10>
//   // proto:  void QInputDialog::setIntValue(int value);
// _ZN12QInputDialog11setIntValueEi setIntValue(int)
extern "C"
void
C_ZN12QInputDialog11setIntValueEi(void *qthis,
int arg1) {
  ((QInputDialog*)qthis)->setIntValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 133, column 12>
//   // proto:  double QInputDialog::doubleValue();
// _ZNK12QInputDialog11doubleValueEv doubleValue()
extern "C"
double
C_ZNK12QInputDialog11doubleValueEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->doubleValue();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 160, column 20>
//   // proto: static QString QInputDialog::getText(QWidget * parent, const QString & title, const QString & label, QLineEdit::EchoMode echo, const QString & text, bool * ok, Qt::WindowFlags flags, Qt::InputMethodHints inputMethodHints);
// _ZN12QInputDialog7getTextEP7QWidgetRK7QStringS4_N9QLineEdit8EchoModeES4_Pb6QFlagsIN2Qt10WindowTypeEES8_INS9_15InputMethodHintEE getText(class QWidget *, const class QString &, const class QString &, class QLineEdit::EchoMode, const class QString &, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
QString*
C_ZN12QInputDialog7getTextEP7QWidgetRK7QStringS4_N9QLineEdit8EchoModeES4_Pb6QFlagsIN2Qt10WindowTypeEES8_INS9_15InputMethodHintEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QLineEdit::EchoMode* arg4,
const QString* arg5,
bool * arg6,
Qt::WindowFlags* arg7,
Qt::InputMethodHints* arg8) {
  auto ret =
  QInputDialog::getText(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((QLineEdit::EchoMode*)arg4),
*((const QString*)arg5),
arg6,
*((Qt::WindowFlags*)arg7),
*((Qt::InputMethodHints*)arg8));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 149, column 10>
//   // proto:  void QInputDialog::setCancelButtonText(const QString & text);
// _ZN12QInputDialog19setCancelButtonTextERK7QString setCancelButtonText(const class QString &)
extern "C"
void
C_ZN12QInputDialog19setCancelButtonTextERK7QString(void *qthis,
const QString* arg1) {
  ((QInputDialog*)qthis)->setCancelButtonText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 197, column 10>
//   // proto:  void QInputDialog::doubleValueSelected(double value);
// _ZN12QInputDialog19doubleValueSelectedEd doubleValueSelected(double)
extern "C"
void
C_ZN12QInputDialog19doubleValueSelectedEd(void *qthis,
double arg1) {
  ((QInputDialog*)qthis)->doubleValueSelected(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 107, column 13>
//   // proto:  QString QInputDialog::textValue();
// _ZNK12QInputDialog9textValueEv textValue()
extern "C"
QString*
C_ZNK12QInputDialog9textValueEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->textValue();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 192, column 10>
//   // proto:  void QInputDialog::textValueChanged(const QString & text);
// _ZN12QInputDialog16textValueChangedERK7QString textValueChanged(const class QString &)
extern "C"
void
C_ZN12QInputDialog16textValueChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QInputDialog*)qthis)->textValueChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 104, column 24>
//   // proto:  InputDialogOptions QInputDialog::options();
// _ZNK12QInputDialog7optionsEv options()
extern "C"
QFlags<QInputDialog::InputDialogOption>*
C_ZNK12QInputDialog7optionsEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->options();
  return new QFlags<QInputDialog::InputDialogOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 174, column 16>
//   // proto: static int QInputDialog::getInt(QWidget * parent, const QString & title, const QString & label, int value, int minValue, int maxValue, int step, bool * ok, Qt::WindowFlags flags);
// _ZN12QInputDialog6getIntEP7QWidgetRK7QStringS4_iiiiPb6QFlagsIN2Qt10WindowTypeEE getInt(class QWidget *, const class QString &, const class QString &, int, int, int, int, _Bool *, Qt::WindowFlags)
extern "C"
int
C_ZN12QInputDialog6getIntEP7QWidgetRK7QStringS4_iiiiPb6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
int arg4,
int arg5,
int arg6,
int arg7,
bool * arg8,
Qt::WindowFlags* arg9) {
  auto ret =
  QInputDialog::getInt(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5,
arg6,
arg7,
arg8,
*((Qt::WindowFlags*)arg9));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 195, column 10>
//   // proto:  void QInputDialog::intValueSelected(int value);
// _ZN12QInputDialog16intValueSelectedEi intValueSelected(int)
extern "C"
void
C_ZN12QInputDialog16intValueSelectedEi(void *qthis,
int arg1) {
  ((QInputDialog*)qthis)->intValueSelected(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 96, column 15>
//   // proto:  QInputDialog::InputMode QInputDialog::inputMode();
// _ZNK12QInputDialog9inputModeEv inputMode()
extern "C"
QInputDialog::InputMode
C_ZNK12QInputDialog9inputModeEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->inputMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 109, column 10>
//   // proto:  void QInputDialog::setTextEchoMode(QLineEdit::EchoMode mode);
// _ZN12QInputDialog15setTextEchoModeEN9QLineEdit8EchoModeE setTextEchoMode(class QLineEdit::EchoMode)
extern "C"
void
C_ZN12QInputDialog15setTextEchoModeEN9QLineEdit8EchoModeE(void *qthis,
QLineEdit::EchoMode* arg1) {
  ((QInputDialog*)qthis)->setTextEchoMode(*((QLineEdit::EchoMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 138, column 10>
//   // proto:  void QInputDialog::setDoubleMaximum(double max);
// _ZN12QInputDialog16setDoubleMaximumEd setDoubleMaximum(double)
extern "C"
void
C_ZN12QInputDialog16setDoubleMaximumEd(void *qthis,
double arg1) {
  ((QInputDialog*)qthis)->setDoubleMaximum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 119, column 9>
//   // proto:  int QInputDialog::intValue();
// _ZNK12QInputDialog8intValueEv intValue()
extern "C"
int
C_ZNK12QInputDialog8intValueEv(void *qthis) {
  auto ret =
  ((QInputDialog*)qthis)->intValue();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qinputdialog.h', line 141, column 10>
//   // proto:  void QInputDialog::setDoubleRange(double min, double max);
// _ZN12QInputDialog14setDoubleRangeEdd setDoubleRange(double, double)
extern "C"
void
C_ZN12QInputDialog14setDoubleRangeEdd(void *qthis,
double arg1,
double arg2) {
  ((QInputDialog*)qthis)->setDoubleRange(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// QInputDialog_SlotProxy here
class QInputDialog_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QInputDialog_SlotProxy():QObject(){}

public slots:
  // intValueChanged(int)
  void slot_proxy_func__ZN12QInputDialog15intValueChangedEi(int arg0);
public:
  void (*slot_func__ZN12QInputDialog15intValueChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // textValueSelected(const class QString &)
  void slot_proxy_func__ZN12QInputDialog17textValueSelectedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN12QInputDialog17textValueSelectedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // intValueSelected(int)
  void slot_proxy_func__ZN12QInputDialog16intValueSelectedEi(int arg0);
public:
  void (*slot_func__ZN12QInputDialog16intValueSelectedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // doubleValueSelected(double)
  void slot_proxy_func__ZN12QInputDialog19doubleValueSelectedEd(double arg0);
public:
  void (*slot_func__ZN12QInputDialog19doubleValueSelectedEd)(void* rsfptr, double arg0) = NULL;
public slots:
  // doubleValueChanged(double)
  void slot_proxy_func__ZN12QInputDialog18doubleValueChangedEd(double arg0);
public:
  void (*slot_func__ZN12QInputDialog18doubleValueChangedEd)(void* rsfptr, double arg0) = NULL;
public slots:
  // textValueChanged(const class QString &)
  void slot_proxy_func__ZN12QInputDialog16textValueChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN12QInputDialog16textValueChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qinputdialog.moc"

extern "C" {
  QInputDialog_SlotProxy* QInputDialog_SlotProxy_new()
  {
    return new QInputDialog_SlotProxy();
  }
};

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog15intValueChangedEi(int arg0) {
  if (this->slot_func__ZN12QInputDialog15intValueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog15intValueChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog15intValueChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog15intValueChangedEi = (decltype(that->slot_func__ZN12QInputDialog15intValueChangedEi))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(intValueChanged(int)), that, SLOT(slot_proxy_func__ZN12QInputDialog15intValueChangedEi(int arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog15intValueChangedEi(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog17textValueSelectedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN12QInputDialog17textValueSelectedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog17textValueSelectedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog17textValueSelectedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog17textValueSelectedERK7QString = (decltype(that->slot_func__ZN12QInputDialog17textValueSelectedERK7QString))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(textValueSelected(const class QString &)), that, SLOT(slot_proxy_func__ZN12QInputDialog17textValueSelectedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog17textValueSelectedERK7QString(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog16intValueSelectedEi(int arg0) {
  if (this->slot_func__ZN12QInputDialog16intValueSelectedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog16intValueSelectedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog16intValueSelectedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog16intValueSelectedEi = (decltype(that->slot_func__ZN12QInputDialog16intValueSelectedEi))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(intValueSelected(int)), that, SLOT(slot_proxy_func__ZN12QInputDialog16intValueSelectedEi(int arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog16intValueSelectedEi(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog19doubleValueSelectedEd(double arg0) {
  if (this->slot_func__ZN12QInputDialog19doubleValueSelectedEd != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog19doubleValueSelectedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog19doubleValueSelectedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog19doubleValueSelectedEd = (decltype(that->slot_func__ZN12QInputDialog19doubleValueSelectedEd))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(doubleValueSelected(double)), that, SLOT(slot_proxy_func__ZN12QInputDialog19doubleValueSelectedEd(double arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog19doubleValueSelectedEd(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog18doubleValueChangedEd(double arg0) {
  if (this->slot_func__ZN12QInputDialog18doubleValueChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog18doubleValueChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog18doubleValueChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog18doubleValueChangedEd = (decltype(that->slot_func__ZN12QInputDialog18doubleValueChangedEd))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(doubleValueChanged(double)), that, SLOT(slot_proxy_func__ZN12QInputDialog18doubleValueChangedEd(double arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog18doubleValueChangedEd(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog16textValueChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN12QInputDialog16textValueChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog16textValueChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog16textValueChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog16textValueChangedERK7QString = (decltype(that->slot_func__ZN12QInputDialog16textValueChangedERK7QString))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(textValueChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN12QInputDialog16textValueChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog16textValueChangedERK7QString(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

