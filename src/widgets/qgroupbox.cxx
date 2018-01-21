//  header block begin
// /usr/include/qt/QtWidgets/qgroupbox.h
#include <qgroupbox.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgroupbox.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QGroupBox10metaObjectEv(void *this_) {
  /*return*/ ((QGroupBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgroupbox.h:62
// void QGroupBox(class QWidget *)
extern "C"
void* C_ZN9QGroupBoxC1EP7QWidget(QWidget * parent) {
  return new QGroupBox(parent);
}
// /usr/include/qt/QtWidgets/qgroupbox.h:63
// void QGroupBox(const class QString &, class QWidget *)
extern "C"
void* C_ZN9QGroupBoxC1ERK7QStringP7QWidget(const QString & title, QWidget * parent) {
  return new QGroupBox(title, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgroupbox.h:64
// void ~QGroupBox()
extern "C"
void C_ZN9QGroupBoxD1Ev(void *this_) {
  delete (QGroupBox*)(this_);
}
// /usr/include/qt/QtWidgets/qgroupbox.h:66
// QString title()
extern "C"
void C_ZNK9QGroupBox5titleEv(void *this_) {
  /*return*/ ((QGroupBox*)this_)->title();
}
// /usr/include/qt/QtWidgets/qgroupbox.h:67
// void setTitle(const class QString &)
extern "C"
void C_ZN9QGroupBox8setTitleERK7QString(void *this_, const QString & title) {
  ((QGroupBox*)this_)->setTitle(title);
}
// /usr/include/qt/QtWidgets/qgroupbox.h:69
// Qt::Alignment alignment()
extern "C"
void C_ZNK9QGroupBox9alignmentEv(void *this_) {
  /*return*/ ((QGroupBox*)this_)->alignment();
}
// /usr/include/qt/QtWidgets/qgroupbox.h:70
// void setAlignment(int)
extern "C"
void C_ZN9QGroupBox12setAlignmentEi(void *this_, int alignment) {
  ((QGroupBox*)this_)->setAlignment(alignment);
}
// virtual
// /usr/include/qt/QtWidgets/qgroupbox.h:72
// QSize minimumSizeHint()
extern "C"
void C_ZNK9QGroupBox15minimumSizeHintEv(void *this_) {
  /*return*/ ((QGroupBox*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qgroupbox.h:74
// bool isFlat()
extern "C"
void C_ZNK9QGroupBox6isFlatEv(void *this_) {
  /*return*/ ((QGroupBox*)this_)->isFlat();
}
// /usr/include/qt/QtWidgets/qgroupbox.h:75
// void setFlat(_Bool)
extern "C"
void C_ZN9QGroupBox7setFlatEb(void *this_, bool flat) {
  ((QGroupBox*)this_)->setFlat(flat);
}
// /usr/include/qt/QtWidgets/qgroupbox.h:76
// bool isCheckable()
extern "C"
void C_ZNK9QGroupBox11isCheckableEv(void *this_) {
  /*return*/ ((QGroupBox*)this_)->isCheckable();
}
// /usr/include/qt/QtWidgets/qgroupbox.h:77
// void setCheckable(_Bool)
extern "C"
void C_ZN9QGroupBox12setCheckableEb(void *this_, bool checkable) {
  ((QGroupBox*)this_)->setCheckable(checkable);
}
// /usr/include/qt/QtWidgets/qgroupbox.h:78
// bool isChecked()
extern "C"
void C_ZNK9QGroupBox9isCheckedEv(void *this_) {
  /*return*/ ((QGroupBox*)this_)->isChecked();
}
// /usr/include/qt/QtWidgets/qgroupbox.h:81
// void setChecked(_Bool)
extern "C"
void C_ZN9QGroupBox10setCheckedEb(void *this_, bool checked) {
  ((QGroupBox*)this_)->setChecked(checked);
}
// /usr/include/qt/QtWidgets/qgroupbox.h:84
// void clicked(_Bool)
extern "C"
void C_ZN9QGroupBox7clickedEb(void *this_, bool checked) {
  ((QGroupBox*)this_)->clicked(checked);
}
// /usr/include/qt/QtWidgets/qgroupbox.h:85
// void toggled(_Bool)
extern "C"
void C_ZN9QGroupBox7toggledEb(void *this_, bool arg0) {
  ((QGroupBox*)this_)->toggled(arg0);
}
//  main block end
