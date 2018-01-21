//  header block begin
// /usr/include/qt/QtWidgets/qprogressdialog.h
#include <qprogressdialog.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qprogressdialog.h:58
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QProgressDialog10metaObjectEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:70
// void QProgressDialog(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN15QProgressDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QProgressDialog(parent, flags);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:71
// void QProgressDialog(const class QString &, const class QString &, int, int, class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN15QProgressDialogC1ERK7QStringS2_iiP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & labelText, const QString & cancelButtonText, int minimum, int maximum, QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags);
}
// virtual
// /usr/include/qt/QtWidgets/qprogressdialog.h:74
// void ~QProgressDialog()
extern "C"
void C_ZN15QProgressDialogD1Ev(void *this_) {
  delete (QProgressDialog*)(this_);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:76
// void setLabel(class QLabel *)
extern "C"
void C_ZN15QProgressDialog8setLabelEP6QLabel(void *this_, QLabel * label) {
  ((QProgressDialog*)this_)->setLabel(label);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:77
// void setCancelButton(class QPushButton *)
extern "C"
void C_ZN15QProgressDialog15setCancelButtonEP11QPushButton(void *this_, QPushButton * button) {
  ((QProgressDialog*)this_)->setCancelButton(button);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:78
// void setBar(class QProgressBar *)
extern "C"
void C_ZN15QProgressDialog6setBarEP12QProgressBar(void *this_, QProgressBar * bar) {
  ((QProgressDialog*)this_)->setBar(bar);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:80
// bool wasCanceled()
extern "C"
void C_ZNK15QProgressDialog11wasCanceledEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->wasCanceled();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:82
// int minimum()
extern "C"
void C_ZNK15QProgressDialog7minimumEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->minimum();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:83
// int maximum()
extern "C"
void C_ZNK15QProgressDialog7maximumEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->maximum();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:85
// int value()
extern "C"
void C_ZNK15QProgressDialog5valueEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->value();
}
// virtual
// /usr/include/qt/QtWidgets/qprogressdialog.h:87
// QSize sizeHint()
extern "C"
void C_ZNK15QProgressDialog8sizeHintEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->sizeHint();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:89
// QString labelText()
extern "C"
void C_ZNK15QProgressDialog9labelTextEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->labelText();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:90
// int minimumDuration()
extern "C"
void C_ZNK15QProgressDialog15minimumDurationEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->minimumDuration();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:92
// void setAutoReset(_Bool)
extern "C"
void C_ZN15QProgressDialog12setAutoResetEb(void *this_, bool reset) {
  ((QProgressDialog*)this_)->setAutoReset(reset);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:93
// bool autoReset()
extern "C"
void C_ZNK15QProgressDialog9autoResetEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->autoReset();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:94
// void setAutoClose(_Bool)
extern "C"
void C_ZN15QProgressDialog12setAutoCloseEb(void *this_, bool close) {
  ((QProgressDialog*)this_)->setAutoClose(close);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:95
// bool autoClose()
extern "C"
void C_ZNK15QProgressDialog9autoCloseEv(void *this_) {
  /*return*/ ((QProgressDialog*)this_)->autoClose();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:98
// void open(class QObject *, const char *)
extern "C"
void C_ZN15QProgressDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QProgressDialog*)this_)->open(receiver, member);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:101
// void cancel()
extern "C"
void C_ZN15QProgressDialog6cancelEv(void *this_) {
  ((QProgressDialog*)this_)->cancel();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:102
// void reset()
extern "C"
void C_ZN15QProgressDialog5resetEv(void *this_) {
  ((QProgressDialog*)this_)->reset();
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:103
// void setMaximum(int)
extern "C"
void C_ZN15QProgressDialog10setMaximumEi(void *this_, int maximum) {
  ((QProgressDialog*)this_)->setMaximum(maximum);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:104
// void setMinimum(int)
extern "C"
void C_ZN15QProgressDialog10setMinimumEi(void *this_, int minimum) {
  ((QProgressDialog*)this_)->setMinimum(minimum);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:105
// void setRange(int, int)
extern "C"
void C_ZN15QProgressDialog8setRangeEii(void *this_, int minimum, int maximum) {
  ((QProgressDialog*)this_)->setRange(minimum, maximum);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:106
// void setValue(int)
extern "C"
void C_ZN15QProgressDialog8setValueEi(void *this_, int progress) {
  ((QProgressDialog*)this_)->setValue(progress);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:107
// void setLabelText(const class QString &)
extern "C"
void C_ZN15QProgressDialog12setLabelTextERK7QString(void *this_, const QString & text) {
  ((QProgressDialog*)this_)->setLabelText(text);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:108
// void setCancelButtonText(const class QString &)
extern "C"
void C_ZN15QProgressDialog19setCancelButtonTextERK7QString(void *this_, const QString & text) {
  ((QProgressDialog*)this_)->setCancelButtonText(text);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:109
// void setMinimumDuration(int)
extern "C"
void C_ZN15QProgressDialog18setMinimumDurationEi(void *this_, int ms) {
  ((QProgressDialog*)this_)->setMinimumDuration(ms);
}
// /usr/include/qt/QtWidgets/qprogressdialog.h:112
// void canceled()
extern "C"
void C_ZN15QProgressDialog8canceledEv(void *this_) {
  ((QProgressDialog*)this_)->canceled();
}
//  main block end
