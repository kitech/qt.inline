//  header block begin
// since 0x040300
// /usr/include/qt/QtWidgets/qwizard.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwizard.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWizardPage is pure virtual: false
// QWizardPage has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWizardPage_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWizardPage_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWizardPage_t qt_meta_stringdata_MyQWizardPage = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQWizardPage"
  },
  "MyQWizardPage"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWizardPage[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQWizardPage : public QWizardPage {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWizardPage::staticMetaObject,
  qt_meta_stringdata_MyQWizardPage.data,
  qt_meta_data_MyQWizardPage,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQWizardPage.stringdata0))
      return static_cast<void*>(this);
  return QWizardPage::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWizardPage::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQWizardPage() {}
// void QWizardPage(QWidget *)
MyQWizardPage(QWidget * parent) : QWizardPage(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QWizardPage_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWizardPage* qo = (MyQWizardPage*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:213
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage10metaObjectEv(void *this_) {
  return (void*)((QWizardPage*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:213
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWizardPage11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWizardPage*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:213
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QWizardPage11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWizardPage*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:213
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWizardPage2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWizardPage::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:213
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWizardPage6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWizardPage::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:218
// [-2] void QWizardPage(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWizardPageC2EP7QWidget(QWidget * parent) {
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
// [-2] void setTitle(const QString &)
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
// [-2] void setSubTitle(const QString &)
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
// [-2] void setPixmap(QWizard::WizardPixmap, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage9setPixmapEN7QWizard12WizardPixmapERK7QPixmap(void *this_, QWizard::WizardPixmap which, QPixmap* pixmap) {
  ((QWizardPage*)this_)->setPixmap(which, *pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:226
// [32] QPixmap pixmap(QWizard::WizardPixmap)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWizardPage6pixmapEN7QWizard12WizardPixmapE(void *this_, QWizard::WizardPixmap which) {
  auto rv = ((QWizardPage*)this_)->pixmap(which);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:227
// [-2] void setFinalPage(bool)
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
// [-2] void setCommitPage(bool)
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
// [-2] void setButtonText(QWizard::WizardButton, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWizardPage13setButtonTextEN7QWizard12WizardButtonERK7QString(void *this_, QWizard::WizardButton which, QString* text) {
  ((QWizardPage*)this_)->setButtonText(which, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:232
// [8] QString buttonText(QWizard::WizardButton)
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
