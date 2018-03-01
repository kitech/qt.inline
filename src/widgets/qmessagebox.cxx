//  header block begin
// /usr/include/qt/QtWidgets/qmessagebox.h
#ifndef protected
#define protected public
#endif
#include <qmessagebox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMessageBox is pure virtual: false
// QMessageBox has virtual projected: true
//  header block end

//  main block begin

class MyQMessageBox : public QMessageBox {
public:
  virtual ~MyQMessageBox() {}
// void QMessageBox(class QWidget *)
MyQMessageBox(QWidget * parent) : QMessageBox(parent) {}
// void QMessageBox(enum QMessageBox::Icon, const class QString &, const class QString &, QMessageBox::StandardButtons, class QWidget *, Qt::WindowFlags)
MyQMessageBox(QMessageBox::Icon icon, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QWidget * parent, QFlags<Qt::WindowType> flags) : QMessageBox(icon, title, text, buttons, parent, flags) {}
// void QMessageBox(const class QString &, const class QString &, enum QMessageBox::Icon, int, int, int, class QWidget *, Qt::WindowFlags)
MyQMessageBox(const QString & title, const QString & text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, QFlags<Qt::WindowType> f) : QMessageBox(title, text, icon, button0, button1, button2, parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QMessageBox::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMessageBox::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMessageBox::showEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void closeEvent(class QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMessageBox::closeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMessageBox::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMessageBox::changeEvent(event);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:293
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMessageBox5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QMessageBox*)this_)->QMessageBox::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:294
// [-2] void resizeEvent(class QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:295
// [-2] void showEvent(class QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::showEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:296
// [-2] void closeEvent(class QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:297
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:298
// [-2] void changeEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::changeEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox10metaObjectEv(void *this_) {
  return (void*)((QMessageBox*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:135
// [-2] void QMessageBox(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQMessageBox*)(0);
  return  new MyQMessageBox(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:136
// [-2] void QMessageBox(enum QMessageBox::Icon, const class QString &, const class QString &, QMessageBox::StandardButtons, class QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBoxC2ENS_4IconERK7QStringS3_6QFlagsINS_14StandardButtonEEP7QWidgetS4_IN2Qt10WindowTypeEE(QMessageBox::Icon icon, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQMessageBox*)(0);
  return  new MyQMessageBox(icon, *title, *text, buttons, parent, flags);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:139
// [-2] void ~QMessageBox()
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBoxD2Ev(void *this_) {
  delete (QMessageBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:141
// [-2] void addButton(class QAbstractButton *, enum QMessageBox::ButtonRole)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE(void *this_, QAbstractButton * button, QMessageBox::ButtonRole role) {
  ((QMessageBox*)this_)->addButton(button, role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:142
// [8] QPushButton * addButton(const class QString &, enum QMessageBox::ButtonRole)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox9addButtonERK7QStringNS_10ButtonRoleE(void *this_, QString* text, QMessageBox::ButtonRole role) {
  return (void*)((QMessageBox*)this_)->addButton(*text, role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:143
// [8] QPushButton * addButton(enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox9addButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  return (void*)((QMessageBox*)this_)->addButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:144
// [-2] void removeButton(class QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->removeButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:147
// [-2] void open(class QObject *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QMessageBox*)this_)->open(receiver, member);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:150
// [4] QMessageBox::ButtonRole buttonRole(class QAbstractButton *)
extern "C" Q_DECL_EXPORT
QMessageBox::ButtonRole C_ZNK11QMessageBox10buttonRoleEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (QMessageBox::ButtonRole)((QMessageBox*)this_)->buttonRole(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:152
// [-2] void setStandardButtons(QMessageBox::StandardButtons)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE(void *this_, QFlags<QMessageBox::StandardButton> buttons) {
  ((QMessageBox*)this_)->setStandardButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:153
// [4] QMessageBox::StandardButtons standardButtons()
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButtons* C_ZNK11QMessageBox15standardButtonsEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->standardButtons();
return new QMessageBox::StandardButtons(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:154
// [4] QMessageBox::StandardButton standardButton(class QAbstractButton *)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZNK11QMessageBox14standardButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (QMessageBox::StandardButton)((QMessageBox*)this_)->standardButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:155
// [8] QAbstractButton * button(enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox6buttonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton which) {
  return (void*)((QMessageBox*)this_)->button(which);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:157
// [8] QPushButton * defaultButton()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox13defaultButtonEv(void *this_) {
  return (void*)((QMessageBox*)this_)->defaultButton();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:158
// [-2] void setDefaultButton(class QPushButton *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox16setDefaultButtonEP11QPushButton(void *this_, QPushButton * button) {
  ((QMessageBox*)this_)->setDefaultButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:159
// [-2] void setDefaultButton(enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox16setDefaultButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  ((QMessageBox*)this_)->setDefaultButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:161
// [8] QAbstractButton * escapeButton()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox12escapeButtonEv(void *this_) {
  return (void*)((QMessageBox*)this_)->escapeButton();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:162
// [-2] void setEscapeButton(class QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox15setEscapeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->setEscapeButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:163
// [-2] void setEscapeButton(enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox15setEscapeButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  ((QMessageBox*)this_)->setEscapeButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:165
// [8] QAbstractButton * clickedButton()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox13clickedButtonEv(void *this_) {
  return (void*)((QMessageBox*)this_)->clickedButton();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:167
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox4textEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:168
// [-2] void setText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox7setTextERK7QString(void *this_, QString* text) {
  ((QMessageBox*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:170
// [4] QMessageBox::Icon icon()
extern "C" Q_DECL_EXPORT
QMessageBox::Icon C_ZNK11QMessageBox4iconEv(void *this_) {
  return (QMessageBox::Icon)((QMessageBox*)this_)->icon();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:171
// [-2] void setIcon(enum QMessageBox::Icon)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox7setIconENS_4IconE(void *this_, QMessageBox::Icon arg0) {
  ((QMessageBox*)this_)->setIcon(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:173
// [32] QPixmap iconPixmap()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox10iconPixmapEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->iconPixmap();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:174
// [-2] void setIconPixmap(const class QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13setIconPixmapERK7QPixmap(void *this_, QPixmap* pixmap) {
  ((QMessageBox*)this_)->setIconPixmap(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:176
// [4] Qt::TextFormat textFormat()
extern "C" Q_DECL_EXPORT
Qt::TextFormat C_ZNK11QMessageBox10textFormatEv(void *this_) {
  return (Qt::TextFormat)((QMessageBox*)this_)->textFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:177
// [-2] void setTextFormat(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13setTextFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QMessageBox*)this_)->setTextFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:179
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QMessageBox*)this_)->setTextInteractionFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:180
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C" Q_DECL_EXPORT
Qt::TextInteractionFlags C_ZNK11QMessageBox20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QMessageBox*)this_)->textInteractionFlags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:182
// [-2] void setCheckBox(class QCheckBox *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox11setCheckBoxEP9QCheckBox(void *this_, QCheckBox * cb) {
  ((QMessageBox*)this_)->setCheckBox(cb);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:183
// [8] QCheckBox * checkBox()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox8checkBoxEv(void *this_) {
  return (void*)((QMessageBox*)this_)->checkBox();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:185
// [4] QMessageBox::StandardButton information(class QWidget *, const class QString &, const class QString &, QMessageBox::StandardButtons, enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  return (QMessageBox::StandardButton)QMessageBox::information(parent, *title, *text, buttons, defaultButton);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:188
// [4] QMessageBox::StandardButton question(class QWidget *, const class QString &, const class QString &, QMessageBox::StandardButtons, enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  return (QMessageBox::StandardButton)QMessageBox::question(parent, *title, *text, buttons, defaultButton);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:191
// [4] QMessageBox::StandardButton warning(class QWidget *, const class QString &, const class QString &, QMessageBox::StandardButtons, enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  return (QMessageBox::StandardButton)QMessageBox::warning(parent, *title, *text, buttons, defaultButton);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:194
// [4] QMessageBox::StandardButton critical(class QWidget *, const class QString &, const class QString &, QMessageBox::StandardButtons, enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  return (QMessageBox::StandardButton)QMessageBox::critical(parent, *title, *text, buttons, defaultButton);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:197
// [-2] void about(class QWidget *, const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox5aboutEP7QWidgetRK7QStringS4_(QWidget * parent, QString* title, QString* text) {
  QMessageBox::about(parent, *title, *text);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:198
// [-2] void aboutQt(class QWidget *, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox7aboutQtEP7QWidgetRK7QString(QWidget * parent, QString* title) {
  QMessageBox::aboutQt(parent, *title);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:202
// [-2] void QMessageBox(const class QString &, const class QString &, enum QMessageBox::Icon, int, int, int, class QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBoxC2ERK7QStringS2_NS_4IconEiiiP7QWidget6QFlagsIN2Qt10WindowTypeEE(QString* title, QString* text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQMessageBox*)(0);
  return  new MyQMessageBox(*title, *text, icon, button0, button1, button2, parent, f);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:207
// [4] int information(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_iii(QWidget * parent, QString* title, QString* text, int button0, int button1, int button2) {
  return (int)QMessageBox::information(parent, *title, *text, button0, button1, button2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:210
// [4] int information(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, QString* title, QString* text, QString* button0Text, QString* button1Text, QString* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return (int)QMessageBox::information(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:217
// [4] QMessageBox::StandardButton information(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, QString* title, QString* text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return (QMessageBox::StandardButton)QMessageBox::information(parent, *title, *text, button0, button1);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:222
// [4] int question(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_iii(QWidget * parent, QString* title, QString* text, int button0, int button1, int button2) {
  return (int)QMessageBox::question(parent, *title, *text, button0, button1, button2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:225
// [4] int question(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, QString* title, QString* text, QString* button0Text, QString* button1Text, QString* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return (int)QMessageBox::question(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:232
// [4] int question(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, QString* title, QString* text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return (int)QMessageBox::question(parent, *title, *text, button0, button1);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:237
// [4] int warning(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_iii(QWidget * parent, QString* title, QString* text, int button0, int button1, int button2) {
  return (int)QMessageBox::warning(parent, *title, *text, button0, button1, button2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:240
// [4] int warning(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, QString* title, QString* text, QString* button0Text, QString* button1Text, QString* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return (int)QMessageBox::warning(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:247
// [4] int warning(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, QString* title, QString* text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return (int)QMessageBox::warning(parent, *title, *text, button0, button1);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:252
// [4] int critical(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_iii(QWidget * parent, QString* title, QString* text, int button0, int button1, int button2) {
  return (int)QMessageBox::critical(parent, *title, *text, button0, button1, button2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:255
// [4] int critical(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, QString* title, QString* text, QString* button0Text, QString* button1Text, QString* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return (int)QMessageBox::critical(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:262
// [4] int critical(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, QString* title, QString* text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return (int)QMessageBox::critical(parent, *title, *text, button0, button1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:267
// [8] QString buttonText(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox10buttonTextEi(void *this_, int button) {
  auto rv = ((QMessageBox*)this_)->buttonText(button);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:268
// [-2] void setButtonText(int, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13setButtonTextEiRK7QString(void *this_, int button, QString* text) {
  ((QMessageBox*)this_)->setButtonText(button, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:270
// [8] QString informativeText()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox15informativeTextEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->informativeText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:271
// [-2] void setInformativeText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox18setInformativeTextERK7QString(void *this_, QString* text) {
  ((QMessageBox*)this_)->setInformativeText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:274
// [8] QString detailedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox12detailedTextEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->detailedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:275
// [-2] void setDetailedText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox15setDetailedTextERK7QString(void *this_, QString* text) {
  ((QMessageBox*)this_)->setDetailedText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:278
// [-2] void setWindowTitle(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox14setWindowTitleERK7QString(void *this_, QString* title) {
  ((QMessageBox*)this_)->setWindowTitle(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:279
// [-2] void setWindowModality(Qt::WindowModality)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox17setWindowModalityEN2Qt14WindowModalityE(void *this_, Qt::WindowModality windowModality) {
  ((QMessageBox*)this_)->setWindowModality(windowModality);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:282
// [32] QPixmap standardIcon(enum QMessageBox::Icon)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox12standardIconENS_4IconE(QMessageBox::Icon icon) {
  auto rv = QMessageBox::standardIcon(icon);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:285
// [-2] void buttonClicked(class QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13buttonClickedEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->buttonClicked(button);
}

//  main block end
