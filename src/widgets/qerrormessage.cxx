// /usr/include/qt/QtWidgets/qerrormessage.h
#include <qerrormessage.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qerrormessage.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QErrorMessage10metaObjectEv(void *this_) {
  /*return*/ ((QErrorMessage*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qerrormessage.h:57
// void QErrorMessage(class QWidget *)
extern "C"
void* C_ZN13QErrorMessageC1EP7QWidget(QWidget * parent) {
  return new QErrorMessage(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qerrormessage.h:58
// void ~QErrorMessage()
extern "C"
void C_ZN13QErrorMessageD1Ev(void *this_) {
  delete (QErrorMessage*)(this_);
}
// static
// /usr/include/qt/QtWidgets/qerrormessage.h:60
// QErrorMessage * qtHandler()
extern "C"
void C_ZN13QErrorMessage9qtHandlerEv() {
  /*return*/ QErrorMessage::qtHandler();
}
// /usr/include/qt/QtWidgets/qerrormessage.h:63
// void showMessage(const class QString &)
extern "C"
void C_ZN13QErrorMessage11showMessageERK7QString(void *this_, const QString & message) {
  ((QErrorMessage*)this_)->showMessage(message);
}
// /usr/include/qt/QtWidgets/qerrormessage.h:64
// void showMessage(const class QString &, const class QString &)
extern "C"
void C_ZN13QErrorMessage11showMessageERK7QStringS2_(void *this_, const QString & message, const QString & type) {
  ((QErrorMessage*)this_)->showMessage(message, type);
}