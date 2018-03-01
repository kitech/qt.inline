//  header block begin
// /usr/include/qt/QtWidgets/qwizard.h
#ifndef protected
#define protected public
#endif
#include <qwizard.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWizardPage is pure virtual: false
// QWizardPage has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWizardPage : public QWizardPage {
public:
  virtual ~MyQWizardPage() {}
// void QWizardPage(class QWidget *)
MyQWizardPage(QWidget * parent) : QWizardPage(parent) {}
// Protected Visibility=Default Availability=Available
// void setField(const class QString &, const class QVariant &)
  virtual void setField(const QString & name, const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setField", &handled, 2, (uint64_t)&name, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWizardPage::setField(name, value);
  }
  }

// Protected Visibility=Default Availability=Available
// QVariant field(const class QString &)
  virtual QVariant field(const QString & name) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"field", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QWizardPage::field(name);
  }
  }

// Protected Visibility=Default Availability=Available
// void registerField(const class QString &, class QWidget *, const char *, const char *)
  virtual void registerField(const QString & name, QWidget * widget, const char * property, const char * changedSignal) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"registerField", &handled, 4, (uint64_t)&name, (uint64_t)widget, (uint64_t)property, (uint64_t)changedSignal, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWizardPage::registerField(name, widget, property, changedSignal);
  }
  }

// Protected Visibility=Default Availability=Available
// QWizard * wizard()
  virtual QWizard * wizard() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wizard", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWizard *)(irv);
      // PointerPointerQWizard *
    } else {
    return QWizardPage::wizard();
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:244
// [-2] void setField(const class QString &, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage8setFieldERK7QStringRK8QVariant(void *this_, QString* name, QVariant* value) {
  ((QWizardPage*)this_)->QWizardPage::setField(*name, *value);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:245
// [16] QVariant field(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage5fieldERK7QString(void *this_, QString* name) {
  auto rv = ((QWizardPage*)this_)->QWizardPage::field(*name);
return new QVariant(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:246
// [-2] void registerField(const class QString &, class QWidget *, const char *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage13registerFieldERK7QStringP7QWidgetPKcS6_(void *this_, QString* name, QWidget * widget, const char * property, const char * changedSignal) {
  ((QWizardPage*)this_)->QWizardPage::registerField(*name, widget, property, changedSignal);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:248
// [8] QWizard * wizard()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage6wizardEv(void *this_) {
  return (void*)((QWizardPage*)this_)->QWizardPage::wizard();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:213
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage10metaObjectEv(void *this_) {
  return (void*)((QWizardPage*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:218
// [-2] void QWizardPage(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWizardPageC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQWizardPage*)(0);
  return  new MyQWizardPage(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:219
// [-2] void ~QWizardPage()
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPageD2Ev(void *this_) {
  delete (QWizardPage*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:221
// [-2] void setTitle(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage8setTitleERK7QString(void *this_, QString* title) {
  ((QWizardPage*)this_)->setTitle(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:222
// [8] QString title()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage5titleEv(void *this_) {
  auto rv = ((QWizardPage*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:223
// [-2] void setSubTitle(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage11setSubTitleERK7QString(void *this_, QString* subTitle) {
  ((QWizardPage*)this_)->setSubTitle(*subTitle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:224
// [8] QString subTitle()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage8subTitleEv(void *this_) {
  auto rv = ((QWizardPage*)this_)->subTitle();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:225
// [-2] void setPixmap(class QWizard::WizardPixmap, const class QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage9setPixmapEN7QWizard12WizardPixmapERK7QPixmap(void *this_, QWizard::WizardPixmap which, QPixmap* pixmap) {
  ((QWizardPage*)this_)->setPixmap(which, *pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:226
// [32] QPixmap pixmap(class QWizard::WizardPixmap)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage6pixmapEN7QWizard12WizardPixmapE(void *this_, QWizard::WizardPixmap which) {
  auto rv = ((QWizardPage*)this_)->pixmap(which);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:227
// [-2] void setFinalPage(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage12setFinalPageEb(void *this_, bool finalPage) {
  ((QWizardPage*)this_)->setFinalPage(finalPage);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:228
// [1] bool isFinalPage()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWizardPage11isFinalPageEv(void *this_) {
  return (bool)((QWizardPage*)this_)->isFinalPage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:229
// [-2] void setCommitPage(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage13setCommitPageEb(void *this_, bool commitPage) {
  ((QWizardPage*)this_)->setCommitPage(commitPage);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:230
// [1] bool isCommitPage()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWizardPage12isCommitPageEv(void *this_) {
  return (bool)((QWizardPage*)this_)->isCommitPage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:231
// [-2] void setButtonText(class QWizard::WizardButton, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage13setButtonTextEN7QWizard12WizardButtonERK7QString(void *this_, QWizard::WizardButton which, QString* text) {
  ((QWizardPage*)this_)->setButtonText(which, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:232
// [8] QString buttonText(class QWizard::WizardButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage10buttonTextEN7QWizard12WizardButtonE(void *this_, QWizard::WizardButton which) {
  auto rv = ((QWizardPage*)this_)->buttonText(which);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:234
// [-2] void initializePage()
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage14initializePageEv(void *this_) {
  ((QWizardPage*)this_)->initializePage();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:235
// [-2] void cleanupPage()
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage11cleanupPageEv(void *this_) {
  ((QWizardPage*)this_)->cleanupPage();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:236
// [1] bool validatePage()
extern "C" Q_DECL_EXPORT
bool C_ZN11QWizardPage12validatePageEv(void *this_) {
  return (bool)((QWizardPage*)this_)->validatePage();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:237
// [1] bool isComplete()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWizardPage10isCompleteEv(void *this_) {
  return (bool)((QWizardPage*)this_)->isComplete();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:238
// [4] int nextId()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWizardPage6nextIdEv(void *this_) {
  return (int)((QWizardPage*)this_)->nextId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:241
// [-2] void completeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage15completeChangedEv(void *this_) {
  ((QWizardPage*)this_)->completeChanged();
}

//  main block end
