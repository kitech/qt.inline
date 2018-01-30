//  header block begin
// /usr/include/qt/QtWidgets/qwizard.h
#include <qwizard.h>
#include <QtWidgets>

// QWizardPage is pure virtual: false
// QWizardPage has virtual projected: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:244
// [-2] void setField(const class QString &, const class QVariant &)
extern "C"
void* callback_ZN11QWizardPage8setFieldERK7QStringRK8QVariant = 0;
extern "C" void set_callback_ZN11QWizardPage8setFieldERK7QStringRK8QVariant(void*cbfn)
{ callback_ZN11QWizardPage8setFieldERK7QStringRK8QVariant = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:245
// [16] QVariant field(const class QString &)
extern "C"
void* callback_ZNK11QWizardPage5fieldERK7QString = 0;
extern "C" void set_callback_ZNK11QWizardPage5fieldERK7QString(void*cbfn)
{ callback_ZNK11QWizardPage5fieldERK7QString = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:246
// [-2] void registerField(const class QString &, class QWidget *, const char *, const char *)
extern "C"
void* callback_ZN11QWizardPage13registerFieldERK7QStringP7QWidgetPKcS6_ = 0;
extern "C" void set_callback_ZN11QWizardPage13registerFieldERK7QStringP7QWidgetPKcS6_(void*cbfn)
{ callback_ZN11QWizardPage13registerFieldERK7QStringP7QWidgetPKcS6_ = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:248
// [8] QWizard * wizard()
extern "C"
void* callback_ZNK11QWizardPage6wizardEv = 0;
extern "C" void set_callback_ZNK11QWizardPage6wizardEv(void*cbfn)
{ callback_ZNK11QWizardPage6wizardEv = cbfn; }

class MyQWizardPage : public QWizardPage {
public:
  virtual ~MyQWizardPage() {}
// void QWizardPage(class QWidget *)
MyQWizardPage(QWidget * parent) : QWizardPage(parent) {}
// void setField(const class QString &, const class QVariant &)
  virtual void setField(const QString & name, const QVariant & value) {
    if (callback_ZN11QWizardPage8setFieldERK7QStringRK8QVariant != 0) {
      // callback_ZN11QWizardPage8setFieldERK7QStringRK8QVariant(name, value);
    }
    QWizardPage::setField(name, value);
  }
// QVariant field(const class QString &)
  virtual QVariant field(const QString & name) {
    if (callback_ZNK11QWizardPage5fieldERK7QString != 0) {
      // callback_ZNK11QWizardPage5fieldERK7QString(name);
    }
    return QWizardPage::field(name);
  }
// void registerField(const class QString &, class QWidget *, const char *, const char *)
  virtual void registerField(const QString & name, QWidget * widget, const char * property, const char * changedSignal) {
    if (callback_ZN11QWizardPage13registerFieldERK7QStringP7QWidgetPKcS6_ != 0) {
      // callback_ZN11QWizardPage13registerFieldERK7QStringP7QWidgetPKcS6_(name, widget, property, changedSignal);
    }
    QWizardPage::registerField(name, widget, property, changedSignal);
  }
// QWizard * wizard()
  virtual QWizard * wizard() {
    if (callback_ZNK11QWizardPage6wizardEv != 0) {
      // callback_ZNK11QWizardPage6wizardEv();
    }
    return QWizardPage::wizard();
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:213
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QWizardPage10metaObjectEv(void *this_) {
  return (void*)((QWizardPage*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:218
// [-2] void QWizardPage(class QWidget *)
extern "C"
void* C_ZN11QWizardPageC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQWizardPage*)(0);
  return  new MyQWizardPage(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:219
// [-2] void ~QWizardPage()
extern "C"
void C_ZN11QWizardPageD2Ev(void *this_) {
  delete (QWizardPage*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:221
// [-2] void setTitle(const class QString &)
extern "C"
void C_ZN11QWizardPage8setTitleERK7QString(void *this_, const QString & title) {
  ((QWizardPage*)this_)->setTitle(title);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:222
// [8] QString title()
extern "C"
void* C_ZNK11QWizardPage5titleEv(void *this_) {
  auto rv = ((QWizardPage*)this_)->title();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:223
// [-2] void setSubTitle(const class QString &)
extern "C"
void C_ZN11QWizardPage11setSubTitleERK7QString(void *this_, const QString & subTitle) {
  ((QWizardPage*)this_)->setSubTitle(subTitle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:224
// [8] QString subTitle()
extern "C"
void* C_ZNK11QWizardPage8subTitleEv(void *this_) {
  auto rv = ((QWizardPage*)this_)->subTitle();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:225
// [-2] void setPixmap(class QWizard::WizardPixmap, const class QPixmap &)
extern "C"
void C_ZN11QWizardPage9setPixmapEN7QWizard12WizardPixmapERK7QPixmap(void *this_, QWizard::WizardPixmap which, const QPixmap & pixmap) {
  ((QWizardPage*)this_)->setPixmap(which, pixmap);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:226
// [32] QPixmap pixmap(class QWizard::WizardPixmap)
extern "C"
void* C_ZNK11QWizardPage6pixmapEN7QWizard12WizardPixmapE(void *this_, QWizard::WizardPixmap which) {
  auto rv = ((QWizardPage*)this_)->pixmap(which);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:227
// [-2] void setFinalPage(_Bool)
extern "C"
void C_ZN11QWizardPage12setFinalPageEb(void *this_, bool finalPage) {
  ((QWizardPage*)this_)->setFinalPage(finalPage);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:228
// [1] bool isFinalPage()
extern "C"
bool C_ZNK11QWizardPage11isFinalPageEv(void *this_) {
  return (bool)((QWizardPage*)this_)->isFinalPage();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:229
// [-2] void setCommitPage(_Bool)
extern "C"
void C_ZN11QWizardPage13setCommitPageEb(void *this_, bool commitPage) {
  ((QWizardPage*)this_)->setCommitPage(commitPage);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:230
// [1] bool isCommitPage()
extern "C"
bool C_ZNK11QWizardPage12isCommitPageEv(void *this_) {
  return (bool)((QWizardPage*)this_)->isCommitPage();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:231
// [-2] void setButtonText(class QWizard::WizardButton, const class QString &)
extern "C"
void C_ZN11QWizardPage13setButtonTextEN7QWizard12WizardButtonERK7QString(void *this_, QWizard::WizardButton which, const QString & text) {
  ((QWizardPage*)this_)->setButtonText(which, text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:232
// [8] QString buttonText(class QWizard::WizardButton)
extern "C"
void* C_ZNK11QWizardPage10buttonTextEN7QWizard12WizardButtonE(void *this_, QWizard::WizardButton which) {
  auto rv = ((QWizardPage*)this_)->buttonText(which);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:234
// [-2] void initializePage()
extern "C"
void C_ZN11QWizardPage14initializePageEv(void *this_) {
  ((QWizardPage*)this_)->initializePage();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:235
// [-2] void cleanupPage()
extern "C"
void C_ZN11QWizardPage11cleanupPageEv(void *this_) {
  ((QWizardPage*)this_)->cleanupPage();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:236
// [1] bool validatePage()
extern "C"
bool C_ZN11QWizardPage12validatePageEv(void *this_) {
  return (bool)((QWizardPage*)this_)->validatePage();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:237
// [1] bool isComplete()
extern "C"
bool C_ZNK11QWizardPage10isCompleteEv(void *this_) {
  return (bool)((QWizardPage*)this_)->isComplete();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:238
// [4] int nextId()
extern "C"
int C_ZNK11QWizardPage6nextIdEv(void *this_) {
  return (int)((QWizardPage*)this_)->nextId();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:241
// [-2] void completeChanged()
extern "C"
void C_ZN11QWizardPage15completeChangedEv(void *this_) {
  ((QWizardPage*)this_)->completeChanged();
}
//  main block end
