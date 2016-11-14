// /usr/include/qt/QtWidgets/qdialog.h
#include <qdialog.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qdialog.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QDialog10metaObjectEv(void *this_) {
  /*return*/ ((QDialog*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdialog.h:60
// void QDialog(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN7QDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  return new QDialog(parent, f);
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:61
// void ~QDialog()
extern "C"
void C_ZN7QDialogD1Ev(void *this_) {
  delete (QDialog*)(this_);
}
// /usr/include/qt/QtWidgets/qdialog.h:65
// int result()
extern "C"
void C_ZNK7QDialog6resultEv(void *this_) {
  /*return*/ ((QDialog*)this_)->result();
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:67
// void setVisible(_Bool)
extern "C"
void C_ZN7QDialog10setVisibleEb(void *this_, bool visible) {
  ((QDialog*)this_)->setVisible(visible);
}
// /usr/include/qt/QtWidgets/qdialog.h:69
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN7QDialog14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QDialog*)this_)->setOrientation(orientation);
}
// /usr/include/qt/QtWidgets/qdialog.h:70
// Qt::Orientation orientation()
extern "C"
void C_ZNK7QDialog11orientationEv(void *this_) {
  /*return*/ ((QDialog*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qdialog.h:72
// void setExtension(class QWidget *)
extern "C"
void C_ZN7QDialog12setExtensionEP7QWidget(void *this_, QWidget * extension) {
  ((QDialog*)this_)->setExtension(extension);
}
// /usr/include/qt/QtWidgets/qdialog.h:73
// QWidget * extension()
extern "C"
void C_ZNK7QDialog9extensionEv(void *this_) {
  /*return*/ ((QDialog*)this_)->extension();
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:75
// QSize sizeHint()
extern "C"
void C_ZNK7QDialog8sizeHintEv(void *this_) {
  /*return*/ ((QDialog*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:76
// QSize minimumSizeHint()
extern "C"
void C_ZNK7QDialog15minimumSizeHintEv(void *this_) {
  /*return*/ ((QDialog*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qdialog.h:78
// void setSizeGripEnabled(_Bool)
extern "C"
void C_ZN7QDialog18setSizeGripEnabledEb(void *this_, bool a0) {
  ((QDialog*)this_)->setSizeGripEnabled(a0);
}
// /usr/include/qt/QtWidgets/qdialog.h:79
// bool isSizeGripEnabled()
extern "C"
void C_ZNK7QDialog17isSizeGripEnabledEv(void *this_) {
  /*return*/ ((QDialog*)this_)->isSizeGripEnabled();
}
// /usr/include/qt/QtWidgets/qdialog.h:81
// void setModal(_Bool)
extern "C"
void C_ZN7QDialog8setModalEb(void *this_, bool modal) {
  ((QDialog*)this_)->setModal(modal);
}
// /usr/include/qt/QtWidgets/qdialog.h:82
// void setResult(int)
extern "C"
void C_ZN7QDialog9setResultEi(void *this_, int r) {
  ((QDialog*)this_)->setResult(r);
}
// /usr/include/qt/QtWidgets/qdialog.h:85
// void finished(int)
extern "C"
void C_ZN7QDialog8finishedEi(void *this_, int result) {
  ((QDialog*)this_)->finished(result);
}
// /usr/include/qt/QtWidgets/qdialog.h:86
// void accepted()
extern "C"
void C_ZN7QDialog8acceptedEv(void *this_) {
  ((QDialog*)this_)->accepted();
}
// /usr/include/qt/QtWidgets/qdialog.h:87
// void rejected()
extern "C"
void C_ZN7QDialog8rejectedEv(void *this_) {
  ((QDialog*)this_)->rejected();
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:90
// void open()
extern "C"
void C_ZN7QDialog4openEv(void *this_) {
  ((QDialog*)this_)->open();
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:91
// int exec()
extern "C"
void C_ZN7QDialog4execEv(void *this_) {
  /*return*/ ((QDialog*)this_)->exec();
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:92
// void done(int)
extern "C"
void C_ZN7QDialog4doneEi(void *this_, int a0) {
  ((QDialog*)this_)->done(a0);
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:93
// void accept()
extern "C"
void C_ZN7QDialog6acceptEv(void *this_) {
  ((QDialog*)this_)->accept();
}
// virtual
// /usr/include/qt/QtWidgets/qdialog.h:94
// void reject()
extern "C"
void C_ZN7QDialog6rejectEv(void *this_) {
  ((QDialog*)this_)->reject();
}
// /usr/include/qt/QtWidgets/qdialog.h:96
// void showExtension(_Bool)
extern "C"
void C_ZN7QDialog13showExtensionEb(void *this_, bool a0) {
  ((QDialog*)this_)->showExtension(a0);
}