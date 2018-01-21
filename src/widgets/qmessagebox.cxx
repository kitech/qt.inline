//  header block begin
// /usr/include/qt/QtWidgets/qmessagebox.h
#include <qmessagebox.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qmessagebox.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QMessageBox10metaObjectEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:134
// void QMessageBox(class QWidget *)
extern "C"
void* C_ZN11QMessageBoxC1EP7QWidget(QWidget * parent) {
  return new QMessageBox(parent);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:135
// void QMessageBox(enum QMessageBox::Icon, const class QString &, const class QString &, StandardButtons, class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN11QMessageBoxC1ENS_4IconERK7QStringS3_6QFlagsINS_14StandardButtonEEP7QWidgetS4_IN2Qt10WindowTypeEE(QMessageBox::Icon icon, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QMessageBox(icon, title, text, buttons, parent, flags);
}
// virtual
// /usr/include/qt/QtWidgets/qmessagebox.h:138
// void ~QMessageBox()
extern "C"
void C_ZN11QMessageBoxD1Ev(void *this_) {
  delete (QMessageBox*)(this_);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:140
// void addButton(class QAbstractButton *, enum QMessageBox::ButtonRole)
extern "C"
void C_ZN11QMessageBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE(void *this_, QAbstractButton * button, QMessageBox::ButtonRole role) {
  ((QMessageBox*)this_)->addButton(button, role);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:141
// QPushButton * addButton(const class QString &, enum QMessageBox::ButtonRole)
extern "C"
void C_ZN11QMessageBox9addButtonERK7QStringNS_10ButtonRoleE(void *this_, const QString & text, QMessageBox::ButtonRole role) {
  /*return*/ ((QMessageBox*)this_)->addButton(text, role);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:142
// QPushButton * addButton(enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox9addButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  /*return*/ ((QMessageBox*)this_)->addButton(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:143
// void removeButton(class QAbstractButton *)
extern "C"
void C_ZN11QMessageBox12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->removeButton(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:150
// void open(class QObject *, const char *)
extern "C"
void C_ZN11QMessageBox4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QMessageBox*)this_)->open(receiver, member);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:152
// QList<QAbstractButton *> buttons()
extern "C"
void C_ZNK11QMessageBox7buttonsEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->buttons();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:153
// QMessageBox::ButtonRole buttonRole(class QAbstractButton *)
extern "C"
void C_ZNK11QMessageBox10buttonRoleEP15QAbstractButton(void *this_, QAbstractButton * button) {
  /*return*/ ((QMessageBox*)this_)->buttonRole(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:155
// void setStandardButtons(StandardButtons)
extern "C"
void C_ZN11QMessageBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE(void *this_, QFlags<QMessageBox::StandardButton> buttons) {
  ((QMessageBox*)this_)->setStandardButtons(buttons);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:156
// StandardButtons standardButtons()
extern "C"
void C_ZNK11QMessageBox15standardButtonsEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->standardButtons();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:157
// QMessageBox::StandardButton standardButton(class QAbstractButton *)
extern "C"
void C_ZNK11QMessageBox14standardButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  /*return*/ ((QMessageBox*)this_)->standardButton(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:158
// QAbstractButton * button(enum QMessageBox::StandardButton)
extern "C"
void C_ZNK11QMessageBox6buttonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton which) {
  /*return*/ ((QMessageBox*)this_)->button(which);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:160
// QPushButton * defaultButton()
extern "C"
void C_ZNK11QMessageBox13defaultButtonEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->defaultButton();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:161
// void setDefaultButton(class QPushButton *)
extern "C"
void C_ZN11QMessageBox16setDefaultButtonEP11QPushButton(void *this_, QPushButton * button) {
  ((QMessageBox*)this_)->setDefaultButton(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:162
// void setDefaultButton(enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox16setDefaultButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  ((QMessageBox*)this_)->setDefaultButton(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:164
// QAbstractButton * escapeButton()
extern "C"
void C_ZNK11QMessageBox12escapeButtonEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->escapeButton();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:165
// void setEscapeButton(class QAbstractButton *)
extern "C"
void C_ZN11QMessageBox15setEscapeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->setEscapeButton(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:166
// void setEscapeButton(enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox15setEscapeButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  ((QMessageBox*)this_)->setEscapeButton(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:168
// QAbstractButton * clickedButton()
extern "C"
void C_ZNK11QMessageBox13clickedButtonEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->clickedButton();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:170
// QString text()
extern "C"
void C_ZNK11QMessageBox4textEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->text();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:171
// void setText(const class QString &)
extern "C"
void C_ZN11QMessageBox7setTextERK7QString(void *this_, const QString & text) {
  ((QMessageBox*)this_)->setText(text);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:173
// QMessageBox::Icon icon()
extern "C"
void C_ZNK11QMessageBox4iconEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->icon();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:174
// void setIcon(enum QMessageBox::Icon)
extern "C"
void C_ZN11QMessageBox7setIconENS_4IconE(void *this_, QMessageBox::Icon arg0) {
  ((QMessageBox*)this_)->setIcon(arg0);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:176
// QPixmap iconPixmap()
extern "C"
void C_ZNK11QMessageBox10iconPixmapEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->iconPixmap();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:177
// void setIconPixmap(const class QPixmap &)
extern "C"
void C_ZN11QMessageBox13setIconPixmapERK7QPixmap(void *this_, const QPixmap & pixmap) {
  ((QMessageBox*)this_)->setIconPixmap(pixmap);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:179
// Qt::TextFormat textFormat()
extern "C"
void C_ZNK11QMessageBox10textFormatEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->textFormat();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:180
// void setTextFormat(Qt::TextFormat)
extern "C"
void C_ZN11QMessageBox13setTextFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QMessageBox*)this_)->setTextFormat(format);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:182
// void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void C_ZN11QMessageBox23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QMessageBox*)this_)->setTextInteractionFlags(flags);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:183
// Qt::TextInteractionFlags textInteractionFlags()
extern "C"
void C_ZNK11QMessageBox20textInteractionFlagsEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->textInteractionFlags();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:185
// void setCheckBox(class QCheckBox *)
extern "C"
void C_ZN11QMessageBox11setCheckBoxEP9QCheckBox(void *this_, QCheckBox * cb) {
  ((QMessageBox*)this_)->setCheckBox(cb);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:186
// QCheckBox * checkBox()
extern "C"
void C_ZNK11QMessageBox8checkBoxEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->checkBox();
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:188
// QMessageBox::StandardButton information(class QWidget *, const class QString &, const class QString &, StandardButtons, enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  /*return*/ QMessageBox::information(parent, title, text, buttons, defaultButton);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:191
// QMessageBox::StandardButton question(class QWidget *, const class QString &, const class QString &, StandardButtons, enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  /*return*/ QMessageBox::question(parent, title, text, buttons, defaultButton);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:194
// QMessageBox::StandardButton warning(class QWidget *, const class QString &, const class QString &, StandardButtons, enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  /*return*/ QMessageBox::warning(parent, title, text, buttons, defaultButton);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:197
// QMessageBox::StandardButton critical(class QWidget *, const class QString &, const class QString &, StandardButtons, enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  /*return*/ QMessageBox::critical(parent, title, text, buttons, defaultButton);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:200
// void about(class QWidget *, const class QString &, const class QString &)
extern "C"
void C_ZN11QMessageBox5aboutEP7QWidgetRK7QStringS4_(QWidget * parent, const QString & title, const QString & text) {
  QMessageBox::about(parent, title, text);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:201
// void aboutQt(class QWidget *, const class QString &)
extern "C"
void C_ZN11QMessageBox7aboutQtEP7QWidgetRK7QString(QWidget * parent, const QString & title) {
  QMessageBox::aboutQt(parent, title);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:205
// void QMessageBox(const class QString &, const class QString &, enum QMessageBox::Icon, int, int, int, class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN11QMessageBoxC1ERK7QStringS2_NS_4IconEiiiP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & title, const QString & text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, QFlags<Qt::WindowType> f) {
  return new QMessageBox(title, text, icon, button0, button1, button2, parent, f);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:210
// int information(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C"
void C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_iii(QWidget * parent, const QString & title, const QString & text, int button0, int button1, int button2) {
  /*return*/ QMessageBox::information(parent, title, text, button0, button1, button2);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:213
// int information(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C"
void C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, const QString & title, const QString & text, const QString & button0Text, const QString & button1Text, const QString & button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  /*return*/ QMessageBox::information(parent, title, text, button0Text, button1Text, button2Text, defaultButtonNumber, escapeButtonNumber);
}
// static inline
// /usr/include/qt/QtWidgets/qmessagebox.h:220
// QMessageBox::StandardButton information(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  /*return*/ QMessageBox::information(parent, title, text, button0, button1);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:225
// int question(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C"
void C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_iii(QWidget * parent, const QString & title, const QString & text, int button0, int button1, int button2) {
  /*return*/ QMessageBox::question(parent, title, text, button0, button1, button2);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:228
// int question(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C"
void C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, const QString & title, const QString & text, const QString & button0Text, const QString & button1Text, const QString & button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  /*return*/ QMessageBox::question(parent, title, text, button0Text, button1Text, button2Text, defaultButtonNumber, escapeButtonNumber);
}
// static inline
// /usr/include/qt/QtWidgets/qmessagebox.h:235
// int question(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  /*return*/ QMessageBox::question(parent, title, text, button0, button1);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:240
// int warning(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C"
void C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_iii(QWidget * parent, const QString & title, const QString & text, int button0, int button1, int button2) {
  /*return*/ QMessageBox::warning(parent, title, text, button0, button1, button2);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:243
// int warning(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C"
void C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, const QString & title, const QString & text, const QString & button0Text, const QString & button1Text, const QString & button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  /*return*/ QMessageBox::warning(parent, title, text, button0Text, button1Text, button2Text, defaultButtonNumber, escapeButtonNumber);
}
// static inline
// /usr/include/qt/QtWidgets/qmessagebox.h:250
// int warning(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  /*return*/ QMessageBox::warning(parent, title, text, button0, button1);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:255
// int critical(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C"
void C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_iii(QWidget * parent, const QString & title, const QString & text, int button0, int button1, int button2) {
  /*return*/ QMessageBox::critical(parent, title, text, button0, button1, button2);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:258
// int critical(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C"
void C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, const QString & title, const QString & text, const QString & button0Text, const QString & button1Text, const QString & button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  /*return*/ QMessageBox::critical(parent, title, text, button0Text, button1Text, button2Text, defaultButtonNumber, escapeButtonNumber);
}
// static inline
// /usr/include/qt/QtWidgets/qmessagebox.h:265
// int critical(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C"
void C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  /*return*/ QMessageBox::critical(parent, title, text, button0, button1);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:270
// QString buttonText(int)
extern "C"
void C_ZNK11QMessageBox10buttonTextEi(void *this_, int button) {
  /*return*/ ((QMessageBox*)this_)->buttonText(button);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:271
// void setButtonText(int, const class QString &)
extern "C"
void C_ZN11QMessageBox13setButtonTextEiRK7QString(void *this_, int button, const QString & text) {
  ((QMessageBox*)this_)->setButtonText(button, text);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:273
// QString informativeText()
extern "C"
void C_ZNK11QMessageBox15informativeTextEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->informativeText();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:274
// void setInformativeText(const class QString &)
extern "C"
void C_ZN11QMessageBox18setInformativeTextERK7QString(void *this_, const QString & text) {
  ((QMessageBox*)this_)->setInformativeText(text);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:277
// QString detailedText()
extern "C"
void C_ZNK11QMessageBox12detailedTextEv(void *this_) {
  /*return*/ ((QMessageBox*)this_)->detailedText();
}
// /usr/include/qt/QtWidgets/qmessagebox.h:278
// void setDetailedText(const class QString &)
extern "C"
void C_ZN11QMessageBox15setDetailedTextERK7QString(void *this_, const QString & text) {
  ((QMessageBox*)this_)->setDetailedText(text);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:281
// void setWindowTitle(const class QString &)
extern "C"
void C_ZN11QMessageBox14setWindowTitleERK7QString(void *this_, const QString & title) {
  ((QMessageBox*)this_)->setWindowTitle(title);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:282
// void setWindowModality(Qt::WindowModality)
extern "C"
void C_ZN11QMessageBox17setWindowModalityEN2Qt14WindowModalityE(void *this_, Qt::WindowModality windowModality) {
  ((QMessageBox*)this_)->setWindowModality(windowModality);
}
// static
// /usr/include/qt/QtWidgets/qmessagebox.h:285
// QPixmap standardIcon(enum QMessageBox::Icon)
extern "C"
void C_ZN11QMessageBox12standardIconENS_4IconE(QMessageBox::Icon icon) {
  /*return*/ QMessageBox::standardIcon(icon);
}
// /usr/include/qt/QtWidgets/qmessagebox.h:288
// void buttonClicked(class QAbstractButton *)
extern "C"
void C_ZN11QMessageBox13buttonClickedEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->buttonClicked(button);
}
//  main block end
