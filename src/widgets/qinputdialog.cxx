//  header block begin
// /usr/include/qt/QtWidgets/qinputdialog.h
#include <qinputdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QInputDialog is pure virtual: false
// QInputDialog has virtual projected: false
//  header block end

//  main block begin

class MyQInputDialog : public QInputDialog {
public:
  virtual ~MyQInputDialog() {}
// void QInputDialog(class QWidget *, Qt::WindowFlags)
MyQInputDialog(QWidget * parent, QFlags<Qt::WindowType> flags) : QInputDialog(parent, flags) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QInputDialog10metaObjectEv(void *this_) {
  return (void*)((QInputDialog*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:94
// [-2] void QInputDialog(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN12QInputDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  return  new QInputDialog(parent, flags);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:95
// [-2] void ~QInputDialog()
extern "C"
void C_ZN12QInputDialogD2Ev(void *this_) {
  delete (QInputDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:97
// [-2] void setInputMode(enum QInputDialog::InputMode)
extern "C"
void C_ZN12QInputDialog12setInputModeENS_9InputModeE(void *this_, QInputDialog::InputMode mode) {
  ((QInputDialog*)this_)->setInputMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:98
// [4] QInputDialog::InputMode inputMode()
extern "C"
QInputDialog::InputMode C_ZNK12QInputDialog9inputModeEv(void *this_) {
  return (QInputDialog::InputMode)((QInputDialog*)this_)->inputMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:100
// [-2] void setLabelText(const class QString &)
extern "C"
void C_ZN12QInputDialog12setLabelTextERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->setLabelText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:101
// [8] QString labelText()
extern "C"
void* C_ZNK12QInputDialog9labelTextEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->labelText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:103
// [-2] void setOption(enum QInputDialog::InputDialogOption, _Bool)
extern "C"
void C_ZN12QInputDialog9setOptionENS_17InputDialogOptionEb(void *this_, QInputDialog::InputDialogOption option, bool on) {
  ((QInputDialog*)this_)->setOption(option, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:104
// [1] bool testOption(enum QInputDialog::InputDialogOption)
extern "C"
bool C_ZNK12QInputDialog10testOptionENS_17InputDialogOptionE(void *this_, QInputDialog::InputDialogOption option) {
  return (bool)((QInputDialog*)this_)->testOption(option);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:105
// [-2] void setOptions(QInputDialog::InputDialogOptions)
extern "C"
void C_ZN12QInputDialog10setOptionsE6QFlagsINS_17InputDialogOptionEE(void *this_, QFlags<QInputDialog::InputDialogOption> options) {
  ((QInputDialog*)this_)->setOptions(options);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:106
// [4] QInputDialog::InputDialogOptions options()
extern "C"
QInputDialog::InputDialogOptions* C_ZNK12QInputDialog7optionsEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->options();
return new QInputDialog::InputDialogOptions(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:108
// [-2] void setTextValue(const class QString &)
extern "C"
void C_ZN12QInputDialog12setTextValueERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->setTextValue(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:109
// [8] QString textValue()
extern "C"
void* C_ZNK12QInputDialog9textValueEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->textValue();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:111
// [-2] void setTextEchoMode(class QLineEdit::EchoMode)
extern "C"
void C_ZN12QInputDialog15setTextEchoModeEN9QLineEdit8EchoModeE(void *this_, QLineEdit::EchoMode mode) {
  ((QInputDialog*)this_)->setTextEchoMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:112
// [4] QLineEdit::EchoMode textEchoMode()
extern "C"
QLineEdit::EchoMode C_ZNK12QInputDialog12textEchoModeEv(void *this_) {
  return (QLineEdit::EchoMode)((QInputDialog*)this_)->textEchoMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:114
// [-2] void setComboBoxEditable(_Bool)
extern "C"
void C_ZN12QInputDialog19setComboBoxEditableEb(void *this_, bool editable) {
  ((QInputDialog*)this_)->setComboBoxEditable(editable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:115
// [1] bool isComboBoxEditable()
extern "C"
bool C_ZNK12QInputDialog18isComboBoxEditableEv(void *this_) {
  return (bool)((QInputDialog*)this_)->isComboBoxEditable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:117
// [-2] void setComboBoxItems(const class QStringList &)
extern "C"
void C_ZN12QInputDialog16setComboBoxItemsERK11QStringList(void *this_, QStringList* items) {
  ((QInputDialog*)this_)->setComboBoxItems(*items);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:118
// [8] QStringList comboBoxItems()
extern "C"
void* C_ZNK12QInputDialog13comboBoxItemsEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->comboBoxItems();
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:120
// [-2] void setIntValue(int)
extern "C"
void C_ZN12QInputDialog11setIntValueEi(void *this_, int value) {
  ((QInputDialog*)this_)->setIntValue(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:121
// [4] int intValue()
extern "C"
int C_ZNK12QInputDialog8intValueEv(void *this_) {
  return (int)((QInputDialog*)this_)->intValue();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:123
// [-2] void setIntMinimum(int)
extern "C"
void C_ZN12QInputDialog13setIntMinimumEi(void *this_, int min) {
  ((QInputDialog*)this_)->setIntMinimum(min);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:124
// [4] int intMinimum()
extern "C"
int C_ZNK12QInputDialog10intMinimumEv(void *this_) {
  return (int)((QInputDialog*)this_)->intMinimum();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:126
// [-2] void setIntMaximum(int)
extern "C"
void C_ZN12QInputDialog13setIntMaximumEi(void *this_, int max) {
  ((QInputDialog*)this_)->setIntMaximum(max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:127
// [4] int intMaximum()
extern "C"
int C_ZNK12QInputDialog10intMaximumEv(void *this_) {
  return (int)((QInputDialog*)this_)->intMaximum();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:129
// [-2] void setIntRange(int, int)
extern "C"
void C_ZN12QInputDialog11setIntRangeEii(void *this_, int min, int max) {
  ((QInputDialog*)this_)->setIntRange(min, max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:131
// [-2] void setIntStep(int)
extern "C"
void C_ZN12QInputDialog10setIntStepEi(void *this_, int step) {
  ((QInputDialog*)this_)->setIntStep(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:132
// [4] int intStep()
extern "C"
int C_ZNK12QInputDialog7intStepEv(void *this_) {
  return (int)((QInputDialog*)this_)->intStep();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:134
// [-2] void setDoubleValue(double)
extern "C"
void C_ZN12QInputDialog14setDoubleValueEd(void *this_, double value) {
  ((QInputDialog*)this_)->setDoubleValue(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:135
// [8] double doubleValue()
extern "C"
double C_ZNK12QInputDialog11doubleValueEv(void *this_) {
  return (double)((QInputDialog*)this_)->doubleValue();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:137
// [-2] void setDoubleMinimum(double)
extern "C"
void C_ZN12QInputDialog16setDoubleMinimumEd(void *this_, double min) {
  ((QInputDialog*)this_)->setDoubleMinimum(min);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:138
// [8] double doubleMinimum()
extern "C"
double C_ZNK12QInputDialog13doubleMinimumEv(void *this_) {
  return (double)((QInputDialog*)this_)->doubleMinimum();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:140
// [-2] void setDoubleMaximum(double)
extern "C"
void C_ZN12QInputDialog16setDoubleMaximumEd(void *this_, double max) {
  ((QInputDialog*)this_)->setDoubleMaximum(max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:141
// [8] double doubleMaximum()
extern "C"
double C_ZNK12QInputDialog13doubleMaximumEv(void *this_) {
  return (double)((QInputDialog*)this_)->doubleMaximum();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:143
// [-2] void setDoubleRange(double, double)
extern "C"
void C_ZN12QInputDialog14setDoubleRangeEdd(void *this_, double min, double max) {
  ((QInputDialog*)this_)->setDoubleRange(min, max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:145
// [-2] void setDoubleDecimals(int)
extern "C"
void C_ZN12QInputDialog17setDoubleDecimalsEi(void *this_, int decimals) {
  ((QInputDialog*)this_)->setDoubleDecimals(decimals);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:146
// [4] int doubleDecimals()
extern "C"
int C_ZNK12QInputDialog14doubleDecimalsEv(void *this_) {
  return (int)((QInputDialog*)this_)->doubleDecimals();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:148
// [-2] void setOkButtonText(const class QString &)
extern "C"
void C_ZN12QInputDialog15setOkButtonTextERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->setOkButtonText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:149
// [8] QString okButtonText()
extern "C"
void* C_ZNK12QInputDialog12okButtonTextEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->okButtonText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:151
// [-2] void setCancelButtonText(const class QString &)
extern "C"
void C_ZN12QInputDialog19setCancelButtonTextERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->setCancelButtonText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:152
// [8] QString cancelButtonText()
extern "C"
void* C_ZNK12QInputDialog16cancelButtonTextEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->cancelButtonText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:155
// [-2] void open(class QObject *, const char *)
extern "C"
void C_ZN12QInputDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QInputDialog*)this_)->open(receiver, member);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:157
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK12QInputDialog15minimumSizeHintEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:158
// [8] QSize sizeHint()
extern "C"
void* C_ZNK12QInputDialog8sizeHintEv(void *this_) {
  auto rv = ((QInputDialog*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:160
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN12QInputDialog10setVisibleEb(void *this_, bool visible) {
  ((QInputDialog*)this_)->setVisible(visible);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:162
// [8] QString getText(class QWidget *, const class QString &, const class QString &, class QLineEdit::EchoMode, const class QString &, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
void* C_ZN12QInputDialog7getTextEP7QWidgetRK7QStringS4_N9QLineEdit8EchoModeES4_Pb6QFlagsIN2Qt10WindowTypeEES8_INS9_15InputMethodHintEE(QWidget * parent, QString* title, QString* label, QLineEdit::EchoMode echo, QString* text, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  auto rv = QInputDialog::getText(parent, *title, *label, echo, *text, ok, flags, inputMethodHints);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:167
// [8] QString getMultiLineText(class QWidget *, const class QString &, const class QString &, const class QString &, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
void* C_ZN12QInputDialog16getMultiLineTextEP7QWidgetRK7QStringS4_S4_Pb6QFlagsIN2Qt10WindowTypeEES6_INS7_15InputMethodHintEE(QWidget * parent, QString* title, QString* label, QString* text, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  auto rv = QInputDialog::getMultiLineText(parent, *title, *label, *text, ok, flags, inputMethodHints);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:171
// [8] QString getItem(class QWidget *, const class QString &, const class QString &, const class QStringList &, int, _Bool, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
void* C_ZN12QInputDialog7getItemEP7QWidgetRK7QStringS4_RK11QStringListibPb6QFlagsIN2Qt10WindowTypeEES9_INSA_15InputMethodHintEE(QWidget * parent, QString* title, QString* label, QStringList* items, int current, bool editable, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  auto rv = QInputDialog::getItem(parent, *title, *label, *items, current, editable, ok, flags, inputMethodHints);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:176
// [4] int getInt(class QWidget *, const class QString &, const class QString &, int, int, int, int, _Bool *, Qt::WindowFlags)
extern "C"
int C_ZN12QInputDialog6getIntEP7QWidgetRK7QStringS4_iiiiPb6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QString* title, QString* label, int value, int minValue, int maxValue, int step, bool * ok, QFlags<Qt::WindowType> flags) {
  return (int)QInputDialog::getInt(parent, *title, *label, value, minValue, maxValue, step, ok, flags);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:179
// [8] double getDouble(class QWidget *, const class QString &, const class QString &, double, double, double, int, _Bool *, Qt::WindowFlags)
extern "C"
double C_ZN12QInputDialog9getDoubleEP7QWidgetRK7QStringS4_dddiPb6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QString* title, QString* label, double value, double minValue, double maxValue, int decimals, bool * ok, QFlags<Qt::WindowType> flags) {
  return (double)QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue, decimals, ok, flags);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:183
// [8] double getDouble(class QWidget *, const class QString &, const class QString &, double, double, double, int, _Bool *, Qt::WindowFlags, double)
extern "C"
double C_ZN12QInputDialog9getDoubleEP7QWidgetRK7QStringS4_dddiPb6QFlagsIN2Qt10WindowTypeEEd(QWidget * parent, QString* title, QString* label, double value, double minValue, double maxValue, int decimals, bool * ok, QFlags<Qt::WindowType> flags, double step) {
  return (double)QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue, decimals, ok, flags, step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:196
// [-2] void setDoubleStep(double)
extern "C"
void C_ZN12QInputDialog13setDoubleStepEd(void *this_, double step) {
  ((QInputDialog*)this_)->setDoubleStep(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:197
// [8] double doubleStep()
extern "C"
double C_ZNK12QInputDialog10doubleStepEv(void *this_) {
  return (double)((QInputDialog*)this_)->doubleStep();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:201
// [-2] void textValueChanged(const class QString &)
extern "C"
void C_ZN12QInputDialog16textValueChangedERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->textValueChanged(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:202
// [-2] void textValueSelected(const class QString &)
extern "C"
void C_ZN12QInputDialog17textValueSelectedERK7QString(void *this_, QString* text) {
  ((QInputDialog*)this_)->textValueSelected(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:203
// [-2] void intValueChanged(int)
extern "C"
void C_ZN12QInputDialog15intValueChangedEi(void *this_, int value) {
  ((QInputDialog*)this_)->intValueChanged(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:204
// [-2] void intValueSelected(int)
extern "C"
void C_ZN12QInputDialog16intValueSelectedEi(void *this_, int value) {
  ((QInputDialog*)this_)->intValueSelected(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:205
// [-2] void doubleValueChanged(double)
extern "C"
void C_ZN12QInputDialog18doubleValueChangedEd(void *this_, double value) {
  ((QInputDialog*)this_)->doubleValueChanged(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:206
// [-2] void doubleValueSelected(double)
extern "C"
void C_ZN12QInputDialog19doubleValueSelectedEd(void *this_, double value) {
  ((QInputDialog*)this_)->doubleValueSelected(value);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:209
// [-2] void done(int)
extern "C"
void C_ZN12QInputDialog4doneEi(void *this_, int result) {
  ((QInputDialog*)this_)->done(result);
}
//  main block end
