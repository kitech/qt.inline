//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginepage.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEnginePage is pure virtual: false false
// QWebEnginePage has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEnginePage_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEnginePage_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEnginePage_t qt_meta_stringdata_MyQWebEnginePage = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQWebEnginePage"
  },
  "MyQWebEnginePage"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEnginePage[] = {
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
class Q_DECL_EXPORT MyQWebEnginePage : public QWebEnginePage {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWebEnginePage::staticMetaObject,
  qt_meta_stringdata_MyQWebEnginePage.data,
  qt_meta_data_MyQWebEnginePage,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWebEnginePage.stringdata0))
      return static_cast<void*>(this);
  return QWebEnginePage::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWebEnginePage::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWebEnginePage() {}
// void QWebEnginePage(QObject *)
MyQWebEnginePage(QObject * parent) : QWebEnginePage(parent) {}
// void QWebEnginePage(QWebEngineProfile *, QObject *)
MyQWebEnginePage(QWebEngineProfile * profile, QObject * parent) : QWebEnginePage(profile, parent) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [8] QWebEnginePage * createWindow(QWebEnginePage::WebWindowType)
  virtual QWebEnginePage * createWindow(QWebEnginePage::WebWindowType type_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createWindow", &handled, 1, (uint64_t)type_, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWebEnginePage *)(irv);
      // Pointer Pointer QWebEnginePage *
    } else {
    return QWebEnginePage::createWindow(type_);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QStringList chooseFiles(QWebEnginePage::FileSelectionMode, const QStringList &, const QStringList &)
  virtual QStringList chooseFiles(QWebEnginePage::FileSelectionMode mode, const QStringList & oldFiles, const QStringList & acceptedMimeTypes)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"chooseFiles", &handled, 3, (uint64_t)mode, (uint64_t)&oldFiles, (uint64_t)&acceptedMimeTypes, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void javaScriptAlert(const QUrl &, const QString &)
  virtual void javaScriptAlert(const QUrl & securityOrigin, const QString & msg)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"javaScriptAlert", &handled, 2, (uint64_t)&securityOrigin, (uint64_t)&msg, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEnginePage::javaScriptAlert(securityOrigin, msg);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool javaScriptConfirm(const QUrl &, const QString &)
  virtual bool javaScriptConfirm(const QUrl & securityOrigin, const QString & msg)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"javaScriptConfirm", &handled, 2, (uint64_t)&securityOrigin, (uint64_t)&msg, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWebEnginePage::javaScriptConfirm(securityOrigin, msg);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool javaScriptPrompt(const QUrl &, const QString &, const QString &, QString *)
  virtual bool javaScriptPrompt(const QUrl & securityOrigin, const QString & msg, const QString & defaultValue, QString * result)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"javaScriptPrompt", &handled, 4, (uint64_t)&securityOrigin, (uint64_t)&msg, (uint64_t)&defaultValue, (uint64_t)result, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWebEnginePage::javaScriptPrompt(securityOrigin, msg, defaultValue, result);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel, const QString &, int, const QString &)
  virtual void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString & message, int lineNumber, const QString & sourceID)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"javaScriptConsoleMessage", &handled, 4, (uint64_t)level, (uint64_t)&message, (uint64_t)lineNumber, (uint64_t)&sourceID, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool certificateError(const QWebEngineCertificateError &)
  virtual bool certificateError(const QWebEngineCertificateError & certificateError)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"certificateError", &handled, 1, (uint64_t)&certificateError, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWebEnginePage::certificateError(certificateError);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool acceptNavigationRequest(const QUrl &, QWebEnginePage::NavigationType, bool)
  virtual bool acceptNavigationRequest(const QUrl & url, QWebEnginePage::NavigationType type_, bool isMainFrame)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"acceptNavigationRequest", &handled, 3, (uint64_t)&url, (uint64_t)type_, (uint64_t)isMainFrame, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWebEnginePage::acceptNavigationRequest(url, type_, isMainFrame);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QWebEnginePage_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWebEnginePage* qo = (MyQWebEnginePage*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginepage(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:78
// [8] QString tr(const char *, const char *, int) 
// (12)qm1149853263 (30)_ZN14QWebEnginePage2trEPKcS1_i
//static
/*void qm1149853263(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebEnginePage::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebEnginePage::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:238
// [-2] void QWebEnginePage(QObject *) 
// (12)qm3029807497 (31)_ZN14QWebEnginePageC2EP7QObject
/*void* qm3029807497(QObject * parent)*/{
  auto _nilp = (MyQWebEnginePage*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QWebEnginePage(parent);
  this_ =  new MyQWebEnginePage(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:239
// [-2] void QWebEnginePage(QWebEngineProfile *, QObject *) 
// (12)qm1963408770 (51)_ZN14QWebEnginePageC2EP17QWebEngineProfileP7QObject
/*void* qm1963408770(QWebEngineProfile * profile, QObject * parent)*/{
  auto _nilp = (MyQWebEnginePage*)(0);
  QWebEngineProfile * profile = *(QWebEngineProfile **)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QWebEnginePage(profile, parent);
  this_ =  new MyQWebEnginePage(profile, parent);
}


/*void C_ZN14QWebEnginePageD2Ev(void *this_)*/ {
  delete (QWebEnginePage*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginepage
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
