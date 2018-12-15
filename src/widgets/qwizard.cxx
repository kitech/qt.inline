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

// QWizard is pure virtual: false
// QWizard has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWizard_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWizard_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWizard_t qt_meta_stringdata_MyQWizard = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQWizard"
  },
  "MyQWizard"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWizard[] = {
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
class Q_DECL_EXPORT MyQWizard : public QWizard {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWizard::staticMetaObject,
  qt_meta_stringdata_MyQWizard.data,
  qt_meta_data_MyQWizard,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWizard.stringdata0))
      return static_cast<void*>(this);
  return QWizard::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWizard::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWizard() {}
// void QWizard(QWidget *, Qt::WindowFlags)
MyQWizard(QWidget * parent, QFlags<Qt::WindowType> flags) : QWizard(parent, flags) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWizard::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWizard::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWizard::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void done(int)
  virtual void done(int result)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"done", &handled, 1, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWizard::done(result);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void initializePage(int)
  virtual void initializePage(int id)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initializePage", &handled, 1, (uint64_t)id, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWizard::initializePage(id);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void cleanupPage(int)
  virtual void cleanupPage(int id)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cleanupPage", &handled, 1, (uint64_t)id, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWizard::cleanupPage(id);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QWizard_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWizard* qo = (MyQWizard*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:189
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QWizard5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QWizard*)this_)->QWizard::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:190
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QWizard*)this_)->QWizard::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:191
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QWizard*)this_)->QWizard::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:195
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard4doneEi(void *this_, int result) {
  ((QWizard*)this_)->QWizard::done(result);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:196
// [-2] void initializePage(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard14initializePageEi(void *this_, int id) {
  ((QWizard*)this_)->QWizard::initializePage(id);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:197
// [-2] void cleanupPage(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard11cleanupPageEi(void *this_, int id) {
  ((QWizard*)this_)->QWizard::cleanupPage(id);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard10metaObjectEv(void *this_) {
  return (void*)((QWizard*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWizard11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWizard*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QWizard11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWizard*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWizard2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWizard::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWizard6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWizard::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:125
// [-2] void QWizard(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWizardC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQWizard*)(0);
  return  new MyQWizard(parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:126
// [-2] void ~QWizard()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizardD2Ev(void *this_) {
  delete (QWizard*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:128
// [4] int addPage(QWizardPage *)
extern "C" Q_DECL_EXPORT
int C_ZN7QWizard7addPageEP11QWizardPage(void *this_, QWizardPage * page) {
  return (int)((QWizard*)this_)->addPage(page);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:129
// [-2] void setPage(int, QWizardPage *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard7setPageEiP11QWizardPage(void *this_, int id, QWizardPage * page) {
  ((QWizard*)this_)->setPage(id, page);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qwizard.h:130
// [-2] void removePage(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10removePageEi(void *this_, int id) {
  ((QWizard*)this_)->removePage(id);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:131
// [8] QWizardPage * page(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard4pageEi(void *this_, int id) {
  return (void*)((QWizard*)this_)->page(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:132
// [1] bool hasVisitedPage(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWizard14hasVisitedPageEi(void *this_, int id) {
  return (bool)((QWizard*)this_)->hasVisitedPage(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:133
// [-2] QList<int> visitedPages()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK7QWizard12visitedPagesEv(void *this_) {
  auto rv = ((QWizard*)this_)->visitedPages();
return new QList<int>(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qwizard.h:134
// [-2] QList<int> pageIds()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK7QWizard7pageIdsEv(void *this_) {
  auto rv = ((QWizard*)this_)->pageIds();
return new QList<int>(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:135
// [-2] void setStartId(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10setStartIdEi(void *this_, int id) {
  ((QWizard*)this_)->setStartId(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:136
// [4] int startId()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWizard7startIdEv(void *this_) {
  return (int)((QWizard*)this_)->startId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:137
// [8] QWizardPage * currentPage()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard11currentPageEv(void *this_) {
  return (void*)((QWizard*)this_)->currentPage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:138
// [4] int currentId()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWizard9currentIdEv(void *this_) {
  return (int)((QWizard*)this_)->currentId();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:140
// [1] bool validateCurrentPage()
extern "C" Q_DECL_EXPORT
bool C_ZN7QWizard19validateCurrentPageEv(void *this_) {
  return (bool)((QWizard*)this_)->validateCurrentPage();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:141
// [4] int nextId()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWizard6nextIdEv(void *this_) {
  return (int)((QWizard*)this_)->nextId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:143
// [-2] void setField(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard8setFieldERK7QStringRK8QVariant(void *this_, QString* name, QVariant* value) {
  ((QWizard*)this_)->setField(*name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:144
// [16] QVariant field(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard5fieldERK7QString(void *this_, QString* name) {
  auto rv = ((QWizard*)this_)->field(*name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:146
// [-2] void setWizardStyle(QWizard::WizardStyle)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard14setWizardStyleENS_11WizardStyleE(void *this_, QWizard::WizardStyle style) {
  ((QWizard*)this_)->setWizardStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:147
// [4] QWizard::WizardStyle wizardStyle()
extern "C" Q_DECL_EXPORT
QWizard::WizardStyle C_ZNK7QWizard11wizardStyleEv(void *this_) {
  return (QWizard::WizardStyle)((QWizard*)this_)->wizardStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:149
// [-2] void setOption(QWizard::WizardOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard9setOptionENS_12WizardOptionEb(void *this_, QWizard::WizardOption option, bool on) {
  ((QWizard*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:150
// [1] bool testOption(QWizard::WizardOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWizard10testOptionENS_12WizardOptionE(void *this_, QWizard::WizardOption option) {
  return (bool)((QWizard*)this_)->testOption(option);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:151
// [-2] void setOptions(QWizard::WizardOptions)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10setOptionsE6QFlagsINS_12WizardOptionEE(void *this_, QFlags<QWizard::WizardOption> options) {
  ((QWizard*)this_)->setOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:152
// [4] QWizard::WizardOptions options()
extern "C" Q_DECL_EXPORT
QWizard::WizardOptions* C_ZNK7QWizard7optionsEv(void *this_) {
  auto rv = ((QWizard*)this_)->options();
return new QWizard::WizardOptions(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:154
// [-2] void setButtonText(QWizard::WizardButton, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard13setButtonTextENS_12WizardButtonERK7QString(void *this_, QWizard::WizardButton which, QString* text) {
  ((QWizard*)this_)->setButtonText(which, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:155
// [8] QString buttonText(QWizard::WizardButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard10buttonTextENS_12WizardButtonE(void *this_, QWizard::WizardButton which) {
  auto rv = ((QWizard*)this_)->buttonText(which);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:156
// [-2] void setButtonLayout(const QList<QWizard::WizardButton> &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard15setButtonLayoutERK5QListINS_12WizardButtonEE(void *this_, QList<QWizard::WizardButton>* layout) {
  ((QWizard*)this_)->setButtonLayout(*layout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:157
// [-2] void setButton(QWizard::WizardButton, QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard9setButtonENS_12WizardButtonEP15QAbstractButton(void *this_, QWizard::WizardButton which, QAbstractButton * button) {
  ((QWizard*)this_)->setButton(which, button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:158
// [8] QAbstractButton * button(QWizard::WizardButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard6buttonENS_12WizardButtonE(void *this_, QWizard::WizardButton which) {
  return (void*)((QWizard*)this_)->button(which);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:160
// [-2] void setTitleFormat(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard14setTitleFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QWizard*)this_)->setTitleFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:161
// [4] Qt::TextFormat titleFormat()
extern "C" Q_DECL_EXPORT
Qt::TextFormat C_ZNK7QWizard11titleFormatEv(void *this_) {
  return (Qt::TextFormat)((QWizard*)this_)->titleFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:162
// [-2] void setSubTitleFormat(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard17setSubTitleFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QWizard*)this_)->setSubTitleFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:163
// [4] Qt::TextFormat subTitleFormat()
extern "C" Q_DECL_EXPORT
Qt::TextFormat C_ZNK7QWizard14subTitleFormatEv(void *this_) {
  return (Qt::TextFormat)((QWizard*)this_)->subTitleFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:164
// [-2] void setPixmap(QWizard::WizardPixmap, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard9setPixmapENS_12WizardPixmapERK7QPixmap(void *this_, QWizard::WizardPixmap which, QPixmap* pixmap) {
  ((QWizard*)this_)->setPixmap(which, *pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:165
// [32] QPixmap pixmap(QWizard::WizardPixmap)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard6pixmapENS_12WizardPixmapE(void *this_, QWizard::WizardPixmap which) {
  auto rv = ((QWizard*)this_)->pixmap(which);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qwizard.h:167
// [-2] void setSideWidget(QWidget *)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard13setSideWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWizard*)this_)->setSideWidget(widget);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qwizard.h:168
// [8] QWidget * sideWidget()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard10sideWidgetEv(void *this_) {
  return (void*)((QWizard*)this_)->sideWidget();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:170
// [-2] void setDefaultProperty(const char *, const char *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard18setDefaultPropertyEPKcS1_S1_(void *this_, const char * className, const char * property, const char * changedSignal) {
  ((QWizard*)this_)->setDefaultProperty(className, property, changedSignal);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:173
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard10setVisibleEb(void *this_, bool visible) {
  ((QWizard*)this_)->setVisible(visible);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:174
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWizard8sizeHintEv(void *this_) {
  auto rv = ((QWizard*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:177
// [-2] void currentIdChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard16currentIdChangedEi(void *this_, int id) {
  ((QWizard*)this_)->currentIdChanged(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:178
// [-2] void helpRequested()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard13helpRequestedEv(void *this_) {
  ((QWizard*)this_)->helpRequested();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:179
// [-2] void customButtonClicked(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard19customButtonClickedEi(void *this_, int which) {
  ((QWizard*)this_)->customButtonClicked(which);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qwizard.h:180
// [-2] void pageAdded(int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard9pageAddedEi(void *this_, int id) {
  ((QWizard*)this_)->pageAdded(id);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qwizard.h:181
// [-2] void pageRemoved(int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard11pageRemovedEi(void *this_, int id) {
  ((QWizard*)this_)->pageRemoved(id);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:184
// [-2] void back()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard4backEv(void *this_) {
  ((QWizard*)this_)->back();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:185
// [-2] void next()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard4nextEv(void *this_) {
  ((QWizard*)this_)->next();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:186
// [-2] void restart()
extern "C" Q_DECL_EXPORT
void C_ZN7QWizard7restartEv(void *this_) {
  ((QWizard*)this_)->restart();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
