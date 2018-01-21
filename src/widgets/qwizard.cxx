//  header block begin
// /usr/include/qt/QtWidgets/qwizard.h
#include <qwizard.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QWizard10metaObjectEv(void *this_) {
  /*return*/ ((QWizard*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qwizard.h:123
// void QWizard(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN7QWizardC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QWizard(parent, flags);
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:124
// void ~QWizard()
extern "C"
void C_ZN7QWizardD1Ev(void *this_) {
  delete (QWizard*)(this_);
}
// /usr/include/qt/QtWidgets/qwizard.h:126
// int addPage(class QWizardPage *)
extern "C"
void C_ZN7QWizard7addPageEP11QWizardPage(void *this_, QWizardPage * page) {
  /*return*/ ((QWizard*)this_)->addPage(page);
}
// /usr/include/qt/QtWidgets/qwizard.h:127
// void setPage(int, class QWizardPage *)
extern "C"
void C_ZN7QWizard7setPageEiP11QWizardPage(void *this_, int id, QWizardPage * page) {
  ((QWizard*)this_)->setPage(id, page);
}
// /usr/include/qt/QtWidgets/qwizard.h:128
// void removePage(int)
extern "C"
void C_ZN7QWizard10removePageEi(void *this_, int id) {
  ((QWizard*)this_)->removePage(id);
}
// /usr/include/qt/QtWidgets/qwizard.h:129
// QWizardPage * page(int)
extern "C"
void C_ZNK7QWizard4pageEi(void *this_, int id) {
  /*return*/ ((QWizard*)this_)->page(id);
}
// /usr/include/qt/QtWidgets/qwizard.h:130
// bool hasVisitedPage(int)
extern "C"
void C_ZNK7QWizard14hasVisitedPageEi(void *this_, int id) {
  /*return*/ ((QWizard*)this_)->hasVisitedPage(id);
}
// /usr/include/qt/QtWidgets/qwizard.h:131
// QList<int> visitedPages()
extern "C"
void C_ZNK7QWizard12visitedPagesEv(void *this_) {
  /*return*/ ((QWizard*)this_)->visitedPages();
}
// /usr/include/qt/QtWidgets/qwizard.h:132
// QList<int> pageIds()
extern "C"
void C_ZNK7QWizard7pageIdsEv(void *this_) {
  /*return*/ ((QWizard*)this_)->pageIds();
}
// /usr/include/qt/QtWidgets/qwizard.h:133
// void setStartId(int)
extern "C"
void C_ZN7QWizard10setStartIdEi(void *this_, int id) {
  ((QWizard*)this_)->setStartId(id);
}
// /usr/include/qt/QtWidgets/qwizard.h:134
// int startId()
extern "C"
void C_ZNK7QWizard7startIdEv(void *this_) {
  /*return*/ ((QWizard*)this_)->startId();
}
// /usr/include/qt/QtWidgets/qwizard.h:135
// QWizardPage * currentPage()
extern "C"
void C_ZNK7QWizard11currentPageEv(void *this_) {
  /*return*/ ((QWizard*)this_)->currentPage();
}
// /usr/include/qt/QtWidgets/qwizard.h:136
// int currentId()
extern "C"
void C_ZNK7QWizard9currentIdEv(void *this_) {
  /*return*/ ((QWizard*)this_)->currentId();
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:138
// bool validateCurrentPage()
extern "C"
void C_ZN7QWizard19validateCurrentPageEv(void *this_) {
  /*return*/ ((QWizard*)this_)->validateCurrentPage();
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:139
// int nextId()
extern "C"
void C_ZNK7QWizard6nextIdEv(void *this_) {
  /*return*/ ((QWizard*)this_)->nextId();
}
// /usr/include/qt/QtWidgets/qwizard.h:141
// void setField(const class QString &, const class QVariant &)
extern "C"
void C_ZN7QWizard8setFieldERK7QStringRK8QVariant(void *this_, const QString & name, const QVariant & value) {
  ((QWizard*)this_)->setField(name, value);
}
// /usr/include/qt/QtWidgets/qwizard.h:142
// QVariant field(const class QString &)
extern "C"
void C_ZNK7QWizard5fieldERK7QString(void *this_, const QString & name) {
  /*return*/ ((QWizard*)this_)->field(name);
}
// /usr/include/qt/QtWidgets/qwizard.h:144
// void setWizardStyle(enum QWizard::WizardStyle)
extern "C"
void C_ZN7QWizard14setWizardStyleENS_11WizardStyleE(void *this_, QWizard::WizardStyle style) {
  ((QWizard*)this_)->setWizardStyle(style);
}
// /usr/include/qt/QtWidgets/qwizard.h:145
// QWizard::WizardStyle wizardStyle()
extern "C"
void C_ZNK7QWizard11wizardStyleEv(void *this_) {
  /*return*/ ((QWizard*)this_)->wizardStyle();
}
// /usr/include/qt/QtWidgets/qwizard.h:147
// void setOption(enum QWizard::WizardOption, _Bool)
extern "C"
void C_ZN7QWizard9setOptionENS_12WizardOptionEb(void *this_, QWizard::WizardOption option, bool on) {
  ((QWizard*)this_)->setOption(option, on);
}
// /usr/include/qt/QtWidgets/qwizard.h:148
// bool testOption(enum QWizard::WizardOption)
extern "C"
void C_ZNK7QWizard10testOptionENS_12WizardOptionE(void *this_, QWizard::WizardOption option) {
  /*return*/ ((QWizard*)this_)->testOption(option);
}
// /usr/include/qt/QtWidgets/qwizard.h:149
// void setOptions(WizardOptions)
extern "C"
void C_ZN7QWizard10setOptionsE6QFlagsINS_12WizardOptionEE(void *this_, QFlags<QWizard::WizardOption> options) {
  ((QWizard*)this_)->setOptions(options);
}
// /usr/include/qt/QtWidgets/qwizard.h:150
// WizardOptions options()
extern "C"
void C_ZNK7QWizard7optionsEv(void *this_) {
  /*return*/ ((QWizard*)this_)->options();
}
// /usr/include/qt/QtWidgets/qwizard.h:152
// void setButtonText(enum QWizard::WizardButton, const class QString &)
extern "C"
void C_ZN7QWizard13setButtonTextENS_12WizardButtonERK7QString(void *this_, QWizard::WizardButton which, const QString & text) {
  ((QWizard*)this_)->setButtonText(which, text);
}
// /usr/include/qt/QtWidgets/qwizard.h:153
// QString buttonText(enum QWizard::WizardButton)
extern "C"
void C_ZNK7QWizard10buttonTextENS_12WizardButtonE(void *this_, QWizard::WizardButton which) {
  /*return*/ ((QWizard*)this_)->buttonText(which);
}
// /usr/include/qt/QtWidgets/qwizard.h:154
// void setButtonLayout(const QList<enum QWizard::WizardButton> &)
extern "C"
void C_ZN7QWizard15setButtonLayoutERK5QListINS_12WizardButtonEE(void *this_, const QList<QWizard::WizardButton> & layout) {
  ((QWizard*)this_)->setButtonLayout(layout);
}
// /usr/include/qt/QtWidgets/qwizard.h:155
// void setButton(enum QWizard::WizardButton, class QAbstractButton *)
extern "C"
void C_ZN7QWizard9setButtonENS_12WizardButtonEP15QAbstractButton(void *this_, QWizard::WizardButton which, QAbstractButton * button) {
  ((QWizard*)this_)->setButton(which, button);
}
// /usr/include/qt/QtWidgets/qwizard.h:156
// QAbstractButton * button(enum QWizard::WizardButton)
extern "C"
void C_ZNK7QWizard6buttonENS_12WizardButtonE(void *this_, QWizard::WizardButton which) {
  /*return*/ ((QWizard*)this_)->button(which);
}
// /usr/include/qt/QtWidgets/qwizard.h:158
// void setTitleFormat(Qt::TextFormat)
extern "C"
void C_ZN7QWizard14setTitleFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QWizard*)this_)->setTitleFormat(format);
}
// /usr/include/qt/QtWidgets/qwizard.h:159
// Qt::TextFormat titleFormat()
extern "C"
void C_ZNK7QWizard11titleFormatEv(void *this_) {
  /*return*/ ((QWizard*)this_)->titleFormat();
}
// /usr/include/qt/QtWidgets/qwizard.h:160
// void setSubTitleFormat(Qt::TextFormat)
extern "C"
void C_ZN7QWizard17setSubTitleFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QWizard*)this_)->setSubTitleFormat(format);
}
// /usr/include/qt/QtWidgets/qwizard.h:161
// Qt::TextFormat subTitleFormat()
extern "C"
void C_ZNK7QWizard14subTitleFormatEv(void *this_) {
  /*return*/ ((QWizard*)this_)->subTitleFormat();
}
// /usr/include/qt/QtWidgets/qwizard.h:162
// void setPixmap(enum QWizard::WizardPixmap, const class QPixmap &)
extern "C"
void C_ZN7QWizard9setPixmapENS_12WizardPixmapERK7QPixmap(void *this_, QWizard::WizardPixmap which, const QPixmap & pixmap) {
  ((QWizard*)this_)->setPixmap(which, pixmap);
}
// /usr/include/qt/QtWidgets/qwizard.h:163
// QPixmap pixmap(enum QWizard::WizardPixmap)
extern "C"
void C_ZNK7QWizard6pixmapENS_12WizardPixmapE(void *this_, QWizard::WizardPixmap which) {
  /*return*/ ((QWizard*)this_)->pixmap(which);
}
// /usr/include/qt/QtWidgets/qwizard.h:165
// void setSideWidget(class QWidget *)
extern "C"
void C_ZN7QWizard13setSideWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWizard*)this_)->setSideWidget(widget);
}
// /usr/include/qt/QtWidgets/qwizard.h:166
// QWidget * sideWidget()
extern "C"
void C_ZNK7QWizard10sideWidgetEv(void *this_) {
  /*return*/ ((QWizard*)this_)->sideWidget();
}
// /usr/include/qt/QtWidgets/qwizard.h:168
// void setDefaultProperty(const char *, const char *, const char *)
extern "C"
void C_ZN7QWizard18setDefaultPropertyEPKcS1_S1_(void *this_, const char * className, const char * property, const char * changedSignal) {
  ((QWizard*)this_)->setDefaultProperty(className, property, changedSignal);
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:171
// void setVisible(_Bool)
extern "C"
void C_ZN7QWizard10setVisibleEb(void *this_, bool visible) {
  ((QWizard*)this_)->setVisible(visible);
}
// virtual
// /usr/include/qt/QtWidgets/qwizard.h:172
// QSize sizeHint()
extern "C"
void C_ZNK7QWizard8sizeHintEv(void *this_) {
  /*return*/ ((QWizard*)this_)->sizeHint();
}
// /usr/include/qt/QtWidgets/qwizard.h:175
// void currentIdChanged(int)
extern "C"
void C_ZN7QWizard16currentIdChangedEi(void *this_, int id) {
  ((QWizard*)this_)->currentIdChanged(id);
}
// /usr/include/qt/QtWidgets/qwizard.h:176
// void helpRequested()
extern "C"
void C_ZN7QWizard13helpRequestedEv(void *this_) {
  ((QWizard*)this_)->helpRequested();
}
// /usr/include/qt/QtWidgets/qwizard.h:177
// void customButtonClicked(int)
extern "C"
void C_ZN7QWizard19customButtonClickedEi(void *this_, int which) {
  ((QWizard*)this_)->customButtonClicked(which);
}
// /usr/include/qt/QtWidgets/qwizard.h:178
// void pageAdded(int)
extern "C"
void C_ZN7QWizard9pageAddedEi(void *this_, int id) {
  ((QWizard*)this_)->pageAdded(id);
}
// /usr/include/qt/QtWidgets/qwizard.h:179
// void pageRemoved(int)
extern "C"
void C_ZN7QWizard11pageRemovedEi(void *this_, int id) {
  ((QWizard*)this_)->pageRemoved(id);
}
// /usr/include/qt/QtWidgets/qwizard.h:182
// void back()
extern "C"
void C_ZN7QWizard4backEv(void *this_) {
  ((QWizard*)this_)->back();
}
// /usr/include/qt/QtWidgets/qwizard.h:183
// void next()
extern "C"
void C_ZN7QWizard4nextEv(void *this_) {
  ((QWizard*)this_)->next();
}
// /usr/include/qt/QtWidgets/qwizard.h:184
// void restart()
extern "C"
void C_ZN7QWizard7restartEv(void *this_) {
  ((QWizard*)this_)->restart();
}
//  main block end
