//  header block begin
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h
#include <qcommandlinkbutton.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:52
// const QMetaObject * metaObject()
extern "C"
void C_ZNK18QCommandLinkButton10metaObjectEv(void *this_) {
  /*return*/ ((QCommandLinkButton*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:58
// void QCommandLinkButton(class QWidget *)
extern "C"
void* C_ZN18QCommandLinkButtonC1EP7QWidget(QWidget * parent) {
  return new QCommandLinkButton(parent);
}
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:59
// void QCommandLinkButton(const class QString &, class QWidget *)
extern "C"
void* C_ZN18QCommandLinkButtonC1ERK7QStringP7QWidget(const QString & text, QWidget * parent) {
  return new QCommandLinkButton(text, parent);
}
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:60
// void QCommandLinkButton(const class QString &, const class QString &, class QWidget *)
extern "C"
void* C_ZN18QCommandLinkButtonC1ERK7QStringS2_P7QWidget(const QString & text, const QString & description, QWidget * parent) {
  return new QCommandLinkButton(text, description, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:61
// void ~QCommandLinkButton()
extern "C"
void C_ZN18QCommandLinkButtonD1Ev(void *this_) {
  delete (QCommandLinkButton*)(this_);
}
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:63
// QString description()
extern "C"
void C_ZNK18QCommandLinkButton11descriptionEv(void *this_) {
  /*return*/ ((QCommandLinkButton*)this_)->description();
}
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:64
// void setDescription(const class QString &)
extern "C"
void C_ZN18QCommandLinkButton14setDescriptionERK7QString(void *this_, const QString & description) {
  ((QCommandLinkButton*)this_)->setDescription(description);
}
//  main block end
