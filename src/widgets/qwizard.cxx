//  header block begin
// since 0x040300
// /usr/include/qt/QtWidgets/qwizard.h
#ifndef protected
#define protected public
#endif
#include <qwizard.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWizard is pure virtual: false
// QWizard has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWizard : public QWizard {
public:
  virtual ~MyQWizard() {}
// void QWizard(QWidget *, Qt::WindowFlags)
MyQWizard(QWidget * parent, QFlags<Qt::WindowType> flags) : QWizard(parent, flags) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWizard::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWizard::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWizard::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void done(int)
  virtual void done(int result) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"done", &handled, 1, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWizard::done(result);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void initializePage(int)
  virtual void initializePage(int id) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initializePage", &handled, 1, (uint64_t)id, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWizard::initializePage(id);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void cleanupPage(int)
  virtual void cleanupPage(int id) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"cleanupPage", &handled, 1, (uint64_t)id, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWizard::cleanupPage(id);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:187
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QWizard5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QWizard*)this_)->QWizard::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:188
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QWizard*)this_)->QWizard::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:189
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QWizard*)this_)->QWizard::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:193
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard4doneEi(void *this_, int result) {
  ((QWizard*)this_)->QWizard::done(result);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:194
// [-2] void initializePage(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard14initializePageEi(void *this_, int id) {
  ((QWizard*)this_)->QWizard::initializePage(id);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:195
// [-2] void cleanupPage(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard11cleanupPageEi(void *this_, int id) {
  ((QWizard*)this_)->QWizard::cleanupPage(id);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard10metaObjectEv(void *this_) {
  return (void*)((QWizard*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:123
// [-2] void QWizard(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWizardC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQWizard*)(0);
  return  new MyQWizard(parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:124
// [-2] void ~QWizard()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizardD2Ev(void *this_) {
  delete (QWizard*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:126
// [4] int addPage(QWizardPage *)
extern "C" Q_DECL_EXPORT
int C_ZN7QWizard7addPageEP11QWizardPage(void *this_, QWizardPage * page) {
  return (int)((QWizard*)this_)->addPage(page);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:127
// [-2] void setPage(int, QWizardPage *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard7setPageEiP11QWizardPage(void *this_, int id, QWizardPage * page) {
  ((QWizard*)this_)->setPage(id, page);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qwizard.h:128
// [-2] void removePage(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10removePageEi(void *this_, int id) {
  ((QWizard*)this_)->removePage(id);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:129
// [8] QWizardPage * page(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard4pageEi(void *this_, int id) {
  return (void*)((QWizard*)this_)->page(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:130
// [1] bool hasVisitedPage(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWizard14hasVisitedPageEi(void *this_, int id) {
  return (bool)((QWizard*)this_)->hasVisitedPage(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:133
// [-2] void setStartId(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10setStartIdEi(void *this_, int id) {
  ((QWizard*)this_)->setStartId(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:134
// [4] int startId()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWizard7startIdEv(void *this_) {
  return (int)((QWizard*)this_)->startId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:135
// [8] QWizardPage * currentPage()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard11currentPageEv(void *this_) {
  return (void*)((QWizard*)this_)->currentPage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:136
// [4] int currentId()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWizard9currentIdEv(void *this_) {
  return (int)((QWizard*)this_)->currentId();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:138
// [1] bool validateCurrentPage()
extern "C" Q_DECL_EXPORT
bool C_ZN7QWizard19validateCurrentPageEv(void *this_) {
  return (bool)((QWizard*)this_)->validateCurrentPage();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:139
// [4] int nextId()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWizard6nextIdEv(void *this_) {
  return (int)((QWizard*)this_)->nextId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:141
// [-2] void setField(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard8setFieldERK7QStringRK8QVariant(void *this_, QString* name, QVariant* value) {
  ((QWizard*)this_)->setField(*name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:142
// [16] QVariant field(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard5fieldERK7QString(void *this_, QString* name) {
  auto rv = ((QWizard*)this_)->field(*name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:144
// [-2] void setWizardStyle(QWizard::WizardStyle)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard14setWizardStyleENS_11WizardStyleE(void *this_, QWizard::WizardStyle style) {
  ((QWizard*)this_)->setWizardStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:145
// [4] QWizard::WizardStyle wizardStyle()
extern "C" Q_DECL_EXPORT
QWizard::WizardStyle C_ZNK7QWizard11wizardStyleEv(void *this_) {
  return (QWizard::WizardStyle)((QWizard*)this_)->wizardStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:147
// [-2] void setOption(QWizard::WizardOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard9setOptionENS_12WizardOptionEb(void *this_, QWizard::WizardOption option, bool on) {
  ((QWizard*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:148
// [1] bool testOption(QWizard::WizardOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWizard10testOptionENS_12WizardOptionE(void *this_, QWizard::WizardOption option) {
  return (bool)((QWizard*)this_)->testOption(option);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:149
// [-2] void setOptions(QWizard::WizardOptions)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10setOptionsE6QFlagsINS_12WizardOptionEE(void *this_, QFlags<QWizard::WizardOption> options) {
  ((QWizard*)this_)->setOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:150
// [4] QWizard::WizardOptions options()
extern "C" Q_DECL_EXPORT
QWizard::WizardOptions* C_ZNK7QWizard7optionsEv(void *this_) {
  auto rv = ((QWizard*)this_)->options();
return new QWizard::WizardOptions(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:152
// [-2] void setButtonText(QWizard::WizardButton, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard13setButtonTextENS_12WizardButtonERK7QString(void *this_, QWizard::WizardButton which, QString* text) {
  ((QWizard*)this_)->setButtonText(which, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:153
// [8] QString buttonText(QWizard::WizardButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard10buttonTextENS_12WizardButtonE(void *this_, QWizard::WizardButton which) {
  auto rv = ((QWizard*)this_)->buttonText(which);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:155
// [-2] void setButton(QWizard::WizardButton, QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard9setButtonENS_12WizardButtonEP15QAbstractButton(void *this_, QWizard::WizardButton which, QAbstractButton * button) {
  ((QWizard*)this_)->setButton(which, button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:156
// [8] QAbstractButton * button(QWizard::WizardButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard6buttonENS_12WizardButtonE(void *this_, QWizard::WizardButton which) {
  return (void*)((QWizard*)this_)->button(which);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:158
// [-2] void setTitleFormat(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard14setTitleFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QWizard*)this_)->setTitleFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:159
// [4] Qt::TextFormat titleFormat()
extern "C" Q_DECL_EXPORT
Qt::TextFormat C_ZNK7QWizard11titleFormatEv(void *this_) {
  return (Qt::TextFormat)((QWizard*)this_)->titleFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:160
// [-2] void setSubTitleFormat(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard17setSubTitleFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QWizard*)this_)->setSubTitleFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:161
// [4] Qt::TextFormat subTitleFormat()
extern "C" Q_DECL_EXPORT
Qt::TextFormat C_ZNK7QWizard14subTitleFormatEv(void *this_) {
  return (Qt::TextFormat)((QWizard*)this_)->subTitleFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:162
// [-2] void setPixmap(QWizard::WizardPixmap, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard9setPixmapENS_12WizardPixmapERK7QPixmap(void *this_, QWizard::WizardPixmap which, QPixmap* pixmap) {
  ((QWizard*)this_)->setPixmap(which, *pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:163
// [32] QPixmap pixmap(QWizard::WizardPixmap)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard6pixmapENS_12WizardPixmapE(void *this_, QWizard::WizardPixmap which) {
  auto rv = ((QWizard*)this_)->pixmap(which);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qwizard.h:165
// [-2] void setSideWidget(QWidget *)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard13setSideWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWizard*)this_)->setSideWidget(widget);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qwizard.h:166
// [8] QWidget * sideWidget()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard10sideWidgetEv(void *this_) {
  return (void*)((QWizard*)this_)->sideWidget();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:168
// [-2] void setDefaultProperty(const char *, const char *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard18setDefaultPropertyEPKcS1_S1_(void *this_, const char * className, const char * property, const char * changedSignal) {
  ((QWizard*)this_)->setDefaultProperty(className, property, changedSignal);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:171
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10setVisibleEb(void *this_, bool visible) {
  ((QWizard*)this_)->setVisible(visible);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:172
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard8sizeHintEv(void *this_) {
  auto rv = ((QWizard*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:175
// [-2] void currentIdChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard16currentIdChangedEi(void *this_, int id) {
  ((QWizard*)this_)->currentIdChanged(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:176
// [-2] void helpRequested()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard13helpRequestedEv(void *this_) {
  ((QWizard*)this_)->helpRequested();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:177
// [-2] void customButtonClicked(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard19customButtonClickedEi(void *this_, int which) {
  ((QWizard*)this_)->customButtonClicked(which);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qwizard.h:178
// [-2] void pageAdded(int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard9pageAddedEi(void *this_, int id) {
  ((QWizard*)this_)->pageAdded(id);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qwizard.h:179
// [-2] void pageRemoved(int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard11pageRemovedEi(void *this_, int id) {
  ((QWizard*)this_)->pageRemoved(id);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:182
// [-2] void back()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard4backEv(void *this_) {
  ((QWizard*)this_)->back();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:183
// [-2] void next()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard4nextEv(void *this_) {
  ((QWizard*)this_)->next();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:184
// [-2] void restart()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard7restartEv(void *this_) {
  ((QWizard*)this_)->restart();
}

//  main block end
