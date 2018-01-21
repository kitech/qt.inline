//  header block begin
// /usr/include/qt/QtWidgets/qwizard.h
#include <qwizard.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:213
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QWizardPage10metaObjectEv(void *this_) {
  /*return*/ ((QWizardPage*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qwizard.h:218
// void QWizardPage(class QWidget *)
extern "C"
void* C_ZN11QWizardPageC1EP7QWidget(QWidget * parent) {
  return new QWizardPage(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:219
// void ~QWizardPage()
extern "C"
void C_ZN11QWizardPageD1Ev(void *this_) {
  delete (QWizardPage*)(this_);
}
// /usr/include/qt/QtWidgets/qwizard.h:221
// void setTitle(const class QString &)
extern "C"
void C_ZN11QWizardPage8setTitleERK7QString(void *this_, const QString & title) {
  ((QWizardPage*)this_)->setTitle(title);
}
// /usr/include/qt/QtWidgets/qwizard.h:222
// QString title()
extern "C"
void C_ZNK11QWizardPage5titleEv(void *this_) {
  /*return*/ ((QWizardPage*)this_)->title();
}
// /usr/include/qt/QtWidgets/qwizard.h:223
// void setSubTitle(const class QString &)
extern "C"
void C_ZN11QWizardPage11setSubTitleERK7QString(void *this_, const QString & subTitle) {
  ((QWizardPage*)this_)->setSubTitle(subTitle);
}
// /usr/include/qt/QtWidgets/qwizard.h:224
// QString subTitle()
extern "C"
void C_ZNK11QWizardPage8subTitleEv(void *this_) {
  /*return*/ ((QWizardPage*)this_)->subTitle();
}
// /usr/include/qt/QtWidgets/qwizard.h:225
// void setPixmap(class QWizard::WizardPixmap, const class QPixmap &)
extern "C"
void C_ZN11QWizardPage9setPixmapEN7QWizard12WizardPixmapERK7QPixmap(void *this_, QWizard::WizardPixmap which, const QPixmap & pixmap) {
  ((QWizardPage*)this_)->setPixmap(which, pixmap);
}
// /usr/include/qt/QtWidgets/qwizard.h:226
// QPixmap pixmap(class QWizard::WizardPixmap)
extern "C"
void C_ZNK11QWizardPage6pixmapEN7QWizard12WizardPixmapE(void *this_, QWizard::WizardPixmap which) {
  /*return*/ ((QWizardPage*)this_)->pixmap(which);
}
// /usr/include/qt/QtWidgets/qwizard.h:227
// void setFinalPage(_Bool)
extern "C"
void C_ZN11QWizardPage12setFinalPageEb(void *this_, bool finalPage) {
  ((QWizardPage*)this_)->setFinalPage(finalPage);
}
// /usr/include/qt/QtWidgets/qwizard.h:228
// bool isFinalPage()
extern "C"
void C_ZNK11QWizardPage11isFinalPageEv(void *this_) {
  /*return*/ ((QWizardPage*)this_)->isFinalPage();
}
// /usr/include/qt/QtWidgets/qwizard.h:229
// void setCommitPage(_Bool)
extern "C"
void C_ZN11QWizardPage13setCommitPageEb(void *this_, bool commitPage) {
  ((QWizardPage*)this_)->setCommitPage(commitPage);
}
// /usr/include/qt/QtWidgets/qwizard.h:230
// bool isCommitPage()
extern "C"
void C_ZNK11QWizardPage12isCommitPageEv(void *this_) {
  /*return*/ ((QWizardPage*)this_)->isCommitPage();
}
// /usr/include/qt/QtWidgets/qwizard.h:231
// void setButtonText(class QWizard::WizardButton, const class QString &)
extern "C"
void C_ZN11QWizardPage13setButtonTextEN7QWizard12WizardButtonERK7QString(void *this_, QWizard::WizardButton which, const QString & text) {
  ((QWizardPage*)this_)->setButtonText(which, text);
}
// /usr/include/qt/QtWidgets/qwizard.h:232
// QString buttonText(class QWizard::WizardButton)
extern "C"
void C_ZNK11QWizardPage10buttonTextEN7QWizard12WizardButtonE(void *this_, QWizard::WizardButton which) {
  /*return*/ ((QWizardPage*)this_)->buttonText(which);
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:234
// void initializePage()
extern "C"
void C_ZN11QWizardPage14initializePageEv(void *this_) {
  ((QWizardPage*)this_)->initializePage();
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:235
// void cleanupPage()
extern "C"
void C_ZN11QWizardPage11cleanupPageEv(void *this_) {
  ((QWizardPage*)this_)->cleanupPage();
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:236
// bool validatePage()
extern "C"
void C_ZN11QWizardPage12validatePageEv(void *this_) {
  /*return*/ ((QWizardPage*)this_)->validatePage();
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:237
// bool isComplete()
extern "C"
void C_ZNK11QWizardPage10isCompleteEv(void *this_) {
  /*return*/ ((QWizardPage*)this_)->isComplete();
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:238
// int nextId()
extern "C"
void C_ZNK11QWizardPage6nextIdEv(void *this_) {
  /*return*/ ((QWizardPage*)this_)->nextId();
}
// /usr/include/qt/QtWidgets/qwizard.h:241
// void completeChanged()
extern "C"
void C_ZN11QWizardPage15completeChangedEv(void *this_) {
  ((QWizardPage*)this_)->completeChanged();
}
//  main block end
