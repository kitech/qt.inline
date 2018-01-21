//  header block begin
// /usr/include/qt/QtWidgets/qinputdialog.h
#include <qinputdialog.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qinputdialog.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QInputDialog10metaObjectEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:92
// void QInputDialog(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN12QInputDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QInputDialog(parent, flags);
}
// virtual
// /usr/include/qt/QtWidgets/qinputdialog.h:93
// void ~QInputDialog()
extern "C"
void C_ZN12QInputDialogD1Ev(void *this_) {
  delete (QInputDialog*)(this_);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:95
// void setInputMode(enum QInputDialog::InputMode)
extern "C"
void C_ZN12QInputDialog12setInputModeENS_9InputModeE(void *this_, QInputDialog::InputMode mode) {
  ((QInputDialog*)this_)->setInputMode(mode);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:96
// QInputDialog::InputMode inputMode()
extern "C"
void C_ZNK12QInputDialog9inputModeEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->inputMode();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:98
// void setLabelText(const class QString &)
extern "C"
void C_ZN12QInputDialog12setLabelTextERK7QString(void *this_, const QString & text) {
  ((QInputDialog*)this_)->setLabelText(text);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:99
// QString labelText()
extern "C"
void C_ZNK12QInputDialog9labelTextEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->labelText();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:101
// void setOption(enum QInputDialog::InputDialogOption, _Bool)
extern "C"
void C_ZN12QInputDialog9setOptionENS_17InputDialogOptionEb(void *this_, QInputDialog::InputDialogOption option, bool on) {
  ((QInputDialog*)this_)->setOption(option, on);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:102
// bool testOption(enum QInputDialog::InputDialogOption)
extern "C"
void C_ZNK12QInputDialog10testOptionENS_17InputDialogOptionE(void *this_, QInputDialog::InputDialogOption option) {
  /*return*/ ((QInputDialog*)this_)->testOption(option);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:103
// void setOptions(InputDialogOptions)
extern "C"
void C_ZN12QInputDialog10setOptionsE6QFlagsINS_17InputDialogOptionEE(void *this_, QFlags<QInputDialog::InputDialogOption> options) {
  ((QInputDialog*)this_)->setOptions(options);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:104
// InputDialogOptions options()
extern "C"
void C_ZNK12QInputDialog7optionsEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->options();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:106
// void setTextValue(const class QString &)
extern "C"
void C_ZN12QInputDialog12setTextValueERK7QString(void *this_, const QString & text) {
  ((QInputDialog*)this_)->setTextValue(text);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:107
// QString textValue()
extern "C"
void C_ZNK12QInputDialog9textValueEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->textValue();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:109
// void setTextEchoMode(class QLineEdit::EchoMode)
extern "C"
void C_ZN12QInputDialog15setTextEchoModeEN9QLineEdit8EchoModeE(void *this_, QLineEdit::EchoMode mode) {
  ((QInputDialog*)this_)->setTextEchoMode(mode);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:110
// QLineEdit::EchoMode textEchoMode()
extern "C"
void C_ZNK12QInputDialog12textEchoModeEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->textEchoMode();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:112
// void setComboBoxEditable(_Bool)
extern "C"
void C_ZN12QInputDialog19setComboBoxEditableEb(void *this_, bool editable) {
  ((QInputDialog*)this_)->setComboBoxEditable(editable);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:113
// bool isComboBoxEditable()
extern "C"
void C_ZNK12QInputDialog18isComboBoxEditableEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->isComboBoxEditable();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:115
// void setComboBoxItems(const class QStringList &)
extern "C"
void C_ZN12QInputDialog16setComboBoxItemsERK11QStringList(void *this_, const QStringList & items) {
  ((QInputDialog*)this_)->setComboBoxItems(items);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:116
// QStringList comboBoxItems()
extern "C"
void C_ZNK12QInputDialog13comboBoxItemsEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->comboBoxItems();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:118
// void setIntValue(int)
extern "C"
void C_ZN12QInputDialog11setIntValueEi(void *this_, int value) {
  ((QInputDialog*)this_)->setIntValue(value);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:119
// int intValue()
extern "C"
void C_ZNK12QInputDialog8intValueEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->intValue();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:121
// void setIntMinimum(int)
extern "C"
void C_ZN12QInputDialog13setIntMinimumEi(void *this_, int min) {
  ((QInputDialog*)this_)->setIntMinimum(min);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:122
// int intMinimum()
extern "C"
void C_ZNK12QInputDialog10intMinimumEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->intMinimum();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:124
// void setIntMaximum(int)
extern "C"
void C_ZN12QInputDialog13setIntMaximumEi(void *this_, int max) {
  ((QInputDialog*)this_)->setIntMaximum(max);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:125
// int intMaximum()
extern "C"
void C_ZNK12QInputDialog10intMaximumEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->intMaximum();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:127
// void setIntRange(int, int)
extern "C"
void C_ZN12QInputDialog11setIntRangeEii(void *this_, int min, int max) {
  ((QInputDialog*)this_)->setIntRange(min, max);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:129
// void setIntStep(int)
extern "C"
void C_ZN12QInputDialog10setIntStepEi(void *this_, int step) {
  ((QInputDialog*)this_)->setIntStep(step);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:130
// int intStep()
extern "C"
void C_ZNK12QInputDialog7intStepEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->intStep();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:132
// void setDoubleValue(double)
extern "C"
void C_ZN12QInputDialog14setDoubleValueEd(void *this_, double value) {
  ((QInputDialog*)this_)->setDoubleValue(value);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:133
// double doubleValue()
extern "C"
void C_ZNK12QInputDialog11doubleValueEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->doubleValue();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:135
// void setDoubleMinimum(double)
extern "C"
void C_ZN12QInputDialog16setDoubleMinimumEd(void *this_, double min) {
  ((QInputDialog*)this_)->setDoubleMinimum(min);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:136
// double doubleMinimum()
extern "C"
void C_ZNK12QInputDialog13doubleMinimumEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->doubleMinimum();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:138
// void setDoubleMaximum(double)
extern "C"
void C_ZN12QInputDialog16setDoubleMaximumEd(void *this_, double max) {
  ((QInputDialog*)this_)->setDoubleMaximum(max);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:139
// double doubleMaximum()
extern "C"
void C_ZNK12QInputDialog13doubleMaximumEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->doubleMaximum();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:141
// void setDoubleRange(double, double)
extern "C"
void C_ZN12QInputDialog14setDoubleRangeEdd(void *this_, double min, double max) {
  ((QInputDialog*)this_)->setDoubleRange(min, max);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:143
// void setDoubleDecimals(int)
extern "C"
void C_ZN12QInputDialog17setDoubleDecimalsEi(void *this_, int decimals) {
  ((QInputDialog*)this_)->setDoubleDecimals(decimals);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:144
// int doubleDecimals()
extern "C"
void C_ZNK12QInputDialog14doubleDecimalsEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->doubleDecimals();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:146
// void setOkButtonText(const class QString &)
extern "C"
void C_ZN12QInputDialog15setOkButtonTextERK7QString(void *this_, const QString & text) {
  ((QInputDialog*)this_)->setOkButtonText(text);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:147
// QString okButtonText()
extern "C"
void C_ZNK12QInputDialog12okButtonTextEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->okButtonText();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:149
// void setCancelButtonText(const class QString &)
extern "C"
void C_ZN12QInputDialog19setCancelButtonTextERK7QString(void *this_, const QString & text) {
  ((QInputDialog*)this_)->setCancelButtonText(text);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:150
// QString cancelButtonText()
extern "C"
void C_ZNK12QInputDialog16cancelButtonTextEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->cancelButtonText();
}
// /usr/include/qt/QtWidgets/qinputdialog.h:153
// void open(class QObject *, const char *)
extern "C"
void C_ZN12QInputDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QInputDialog*)this_)->open(receiver, member);
}
// virtual
// /usr/include/qt/QtWidgets/qinputdialog.h:155
// QSize minimumSizeHint()
extern "C"
void C_ZNK12QInputDialog15minimumSizeHintEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->minimumSizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qinputdialog.h:156
// QSize sizeHint()
extern "C"
void C_ZNK12QInputDialog8sizeHintEv(void *this_) {
  /*return*/ ((QInputDialog*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qinputdialog.h:158
// void setVisible(_Bool)
extern "C"
void C_ZN12QInputDialog10setVisibleEb(void *this_, bool visible) {
  ((QInputDialog*)this_)->setVisible(visible);
}
// static
// /usr/include/qt/QtWidgets/qinputdialog.h:160
// QString getText(class QWidget *, const class QString &, const class QString &, class QLineEdit::EchoMode, const class QString &, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
void C_ZN12QInputDialog7getTextEP7QWidgetRK7QStringS4_N9QLineEdit8EchoModeES4_Pb6QFlagsIN2Qt10WindowTypeEES8_INS9_15InputMethodHintEE(QWidget * parent, const QString & title, const QString & label, QLineEdit::EchoMode echo, const QString & text, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  /*return*/ QInputDialog::getText(parent, title, label, echo, text, ok, flags, inputMethodHints);
}
// static
// /usr/include/qt/QtWidgets/qinputdialog.h:165
// QString getMultiLineText(class QWidget *, const class QString &, const class QString &, const class QString &, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
void C_ZN12QInputDialog16getMultiLineTextEP7QWidgetRK7QStringS4_S4_Pb6QFlagsIN2Qt10WindowTypeEES6_INS7_15InputMethodHintEE(QWidget * parent, const QString & title, const QString & label, const QString & text, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  /*return*/ QInputDialog::getMultiLineText(parent, title, label, text, ok, flags, inputMethodHints);
}
// static
// /usr/include/qt/QtWidgets/qinputdialog.h:169
// QString getItem(class QWidget *, const class QString &, const class QString &, const class QStringList &, int, _Bool, _Bool *, Qt::WindowFlags, Qt::InputMethodHints)
extern "C"
void C_ZN12QInputDialog7getItemEP7QWidgetRK7QStringS4_RK11QStringListibPb6QFlagsIN2Qt10WindowTypeEES9_INSA_15InputMethodHintEE(QWidget * parent, const QString & title, const QString & label, const QStringList & items, int current, bool editable, bool * ok, QFlags<Qt::WindowType> flags, QFlags<Qt::InputMethodHint> inputMethodHints) {
  /*return*/ QInputDialog::getItem(parent, title, label, items, current, editable, ok, flags, inputMethodHints);
}
// static
// /usr/include/qt/QtWidgets/qinputdialog.h:174
// int getInt(class QWidget *, const class QString &, const class QString &, int, int, int, int, _Bool *, Qt::WindowFlags)
extern "C"
void C_ZN12QInputDialog6getIntEP7QWidgetRK7QStringS4_iiiiPb6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, const QString & title, const QString & label, int value, int minValue, int maxValue, int step, bool * ok, QFlags<Qt::WindowType> flags) {
  /*return*/ QInputDialog::getInt(parent, title, label, value, minValue, maxValue, step, ok, flags);
}
// static
// /usr/include/qt/QtWidgets/qinputdialog.h:177
// double getDouble(class QWidget *, const class QString &, const class QString &, double, double, double, int, _Bool *, Qt::WindowFlags)
extern "C"
void C_ZN12QInputDialog9getDoubleEP7QWidgetRK7QStringS4_dddiPb6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, const QString & title, const QString & label, double value, double minValue, double maxValue, int decimals, bool * ok, QFlags<Qt::WindowType> flags) {
  /*return*/ QInputDialog::getDouble(parent, title, label, value, minValue, maxValue, decimals, ok, flags);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:192
// void textValueChanged(const class QString &)
extern "C"
void C_ZN12QInputDialog16textValueChangedERK7QString(void *this_, const QString & text) {
  ((QInputDialog*)this_)->textValueChanged(text);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:193
// void textValueSelected(const class QString &)
extern "C"
void C_ZN12QInputDialog17textValueSelectedERK7QString(void *this_, const QString & text) {
  ((QInputDialog*)this_)->textValueSelected(text);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:194
// void intValueChanged(int)
extern "C"
void C_ZN12QInputDialog15intValueChangedEi(void *this_, int value) {
  ((QInputDialog*)this_)->intValueChanged(value);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:195
// void intValueSelected(int)
extern "C"
void C_ZN12QInputDialog16intValueSelectedEi(void *this_, int value) {
  ((QInputDialog*)this_)->intValueSelected(value);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:196
// void doubleValueChanged(double)
extern "C"
void C_ZN12QInputDialog18doubleValueChangedEd(void *this_, double value) {
  ((QInputDialog*)this_)->doubleValueChanged(value);
}
// /usr/include/qt/QtWidgets/qinputdialog.h:197
// void doubleValueSelected(double)
extern "C"
void C_ZN12QInputDialog19doubleValueSelectedEd(void *this_, double value) {
  ((QInputDialog*)this_)->doubleValueSelected(value);
}
// virtual
// /usr/include/qt/QtWidgets/qinputdialog.h:200
// void done(int)
extern "C"
void C_ZN12QInputDialog4doneEi(void *this_, int result) {
  ((QInputDialog*)this_)->done(result);
}
//  main block end
