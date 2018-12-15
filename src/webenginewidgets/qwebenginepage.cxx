//  header block begin

// since 0x050400
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginepage.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEnginePage is pure virtual: false
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:342
// [8] QWebEnginePage * createWindow(QWebEnginePage::WebWindowType)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePage12createWindowENS_13WebWindowTypeE(void *this_, QWebEnginePage::WebWindowType type_) {
  return (void*)((QWebEnginePage*)this_)->QWebEnginePage::createWindow(type_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:343
// [8] QStringList chooseFiles(QWebEnginePage::FileSelectionMode, const QStringList &, const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePage11chooseFilesENS_17FileSelectionModeERK11QStringListS3_(void *this_, QWebEnginePage::FileSelectionMode mode, QStringList* oldFiles, QStringList* acceptedMimeTypes) {
  auto rv = ((QWebEnginePage*)this_)->QWebEnginePage::chooseFiles(mode, *oldFiles, *acceptedMimeTypes);
return new QStringList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:344
// [-2] void javaScriptAlert(const QUrl &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage15javaScriptAlertERK4QUrlRK7QString(void *this_, QUrl* securityOrigin, QString* msg) {
  ((QWebEnginePage*)this_)->QWebEnginePage::javaScriptAlert(*securityOrigin, *msg);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:345
// [1] bool javaScriptConfirm(const QUrl &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN14QWebEnginePage17javaScriptConfirmERK4QUrlRK7QString(void *this_, QUrl* securityOrigin, QString* msg) {
  return (bool)((QWebEnginePage*)this_)->QWebEnginePage::javaScriptConfirm(*securityOrigin, *msg);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:346
// [1] bool javaScriptPrompt(const QUrl &, const QString &, const QString &, QString *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QWebEnginePage16javaScriptPromptERK4QUrlRK7QStringS5_PS3_(void *this_, QUrl* securityOrigin, QString* msg, QString* defaultValue, QString * result) {
  return (bool)((QWebEnginePage*)this_)->QWebEnginePage::javaScriptPrompt(*securityOrigin, *msg, *defaultValue, result);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:347
// [-2] void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel, const QString &, int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage24javaScriptConsoleMessageENS_29JavaScriptConsoleMessageLevelERK7QStringiS3_(void *this_, QWebEnginePage::JavaScriptConsoleMessageLevel level, QString* message, int lineNumber, QString* sourceID) {
  ((QWebEnginePage*)this_)->QWebEnginePage::javaScriptConsoleMessage(level, *message, lineNumber, *sourceID);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:348
// [1] bool certificateError(const QWebEngineCertificateError &)
extern "C" Q_DECL_EXPORT
bool C_ZN14QWebEnginePage16certificateErrorERK26QWebEngineCertificateError(void *this_, QWebEngineCertificateError* certificateError) {
  return (bool)((QWebEnginePage*)this_)->QWebEnginePage::certificateError(*certificateError);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:349
// [1] bool acceptNavigationRequest(const QUrl &, QWebEnginePage::NavigationType, bool)
extern "C" Q_DECL_EXPORT
bool C_ZN14QWebEnginePage23acceptNavigationRequestERK4QUrlNS_14NavigationTypeEb(void *this_, QUrl* url, QWebEnginePage::NavigationType type_, bool isMainFrame) {
  return (bool)((QWebEnginePage*)this_)->QWebEnginePage::acceptNavigationRequest(*url, type_, isMainFrame);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:75
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage10metaObjectEv(void *this_) {
  return (void*)((QWebEnginePage*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:75
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePage11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEnginePage*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:75
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QWebEnginePage11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEnginePage*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:75
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePage2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEnginePage::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:75
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePage6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEnginePage::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:208
// [-2] void QWebEnginePage(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePageC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQWebEnginePage*)(0);
  return  new MyQWebEnginePage(parent);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:209
// [-2] void QWebEnginePage(QWebEngineProfile *, QObject *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePageC2EP17QWebEngineProfileP7QObject(QWebEngineProfile * profile, QObject * parent) {
  auto _nilp = (MyQWebEnginePage*)(0);
  return  new MyQWebEnginePage(profile, parent);
}
#endif // QT_VERSION >= 0x050500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:210
// [-2] void ~QWebEnginePage()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePageD2Ev(void *this_) {
  delete (QWebEnginePage*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:211
// [8] QWebEngineHistory * history()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage7historyEv(void *this_) {
  return (void*)((QWebEnginePage*)this_)->history();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:213
// [-2] void setView(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage7setViewEP7QWidget(void *this_, QWidget * view) {
  ((QWebEnginePage*)this_)->setView(view);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:214
// [8] QWidget * view()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage4viewEv(void *this_) {
  return (void*)((QWebEnginePage*)this_)->view();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:216
// [1] bool hasSelection()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QWebEnginePage12hasSelectionEv(void *this_) {
  return (bool)((QWebEnginePage*)this_)->hasSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:217
// [8] QString selectedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage12selectedTextEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->selectedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:219
// [8] QWebEngineProfile * profile()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage7profileEv(void *this_) {
  return (void*)((QWebEnginePage*)this_)->profile();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:222
// [8] QAction * action(QWebEnginePage::WebAction)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage6actionENS_9WebActionE(void *this_, QWebEnginePage::WebAction action) {
  return (void*)((QWebEnginePage*)this_)->action(action);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:224
// [-2] void triggerAction(QWebEnginePage::WebAction, bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13triggerActionENS_9WebActionEb(void *this_, QWebEnginePage::WebAction action, bool checked) {
  ((QWebEnginePage*)this_)->triggerAction(action, checked);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:226
// [-2] void replaceMisspelledWord(const QString &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage21replaceMisspelledWordERK7QString(void *this_, QString* replacement) {
  ((QWebEnginePage*)this_)->replaceMisspelledWord(*replacement);
}
#endif // QT_VERSION >= 0x050800

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:228
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QWebEnginePage5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QWebEnginePage*)this_)->event(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:233
// [-2] void findText(const QString &, QWebEnginePage::FindFlags, const QWebEngineCallback<bool> &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage8findTextERK7QString6QFlagsINS_8FindFlagEERK18QWebEngineCallbackIbE(void *this_, QString* subString, QFlags<QWebEnginePage::FindFlag> options, QWebEngineCallback<bool>* resultCallback) {
  ((QWebEnginePage*)this_)->findText(*subString, options, *resultCallback);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:235
// [8] QMenu * createStandardContextMenu()
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePage25createStandardContextMenuEv(void *this_) {
  return (void*)((QWebEnginePage*)this_)->createStandardContextMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:237
// [-2] void setFeaturePermission(const QUrl &, QWebEnginePage::Feature, QWebEnginePage::PermissionPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage20setFeaturePermissionERK4QUrlNS_7FeatureENS_16PermissionPolicyE(void *this_, QUrl* securityOrigin, QWebEnginePage::Feature feature, QWebEnginePage::PermissionPolicy policy) {
  ((QWebEnginePage*)this_)->setFeaturePermission(*securityOrigin, feature, policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:239
// [-2] void load(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage4loadERK4QUrl(void *this_, QUrl* url) {
  ((QWebEnginePage*)this_)->load(*url);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:240
// [-2] void load(const QWebEngineHttpRequest &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage4loadERK21QWebEngineHttpRequest(void *this_, QWebEngineHttpRequest* request) {
  ((QWebEnginePage*)this_)->load(*request);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:241
// [-2] void setHtml(const QString &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage7setHtmlERK7QStringRK4QUrl(void *this_, QString* html, QUrl* baseUrl) {
  ((QWebEnginePage*)this_)->setHtml(*html, *baseUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:242
// [-2] void setContent(const QByteArray &, const QString &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage10setContentERK10QByteArrayRK7QStringRK4QUrl(void *this_, QByteArray* data, QString* mimeType, QUrl* baseUrl) {
  ((QWebEnginePage*)this_)->setContent(*data, *mimeType, *baseUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:248
// [-2] void toHtml(const QWebEngineCallback<const QString &> &)
extern "C" Q_DECL_EXPORT
void C_ZNK14QWebEnginePage6toHtmlERK18QWebEngineCallbackIRK7QStringE(void *this_, QWebEngineCallback<const QString &>* resultCallback) {
  ((QWebEnginePage*)this_)->toHtml(*resultCallback);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:249
// [-2] void toPlainText(const QWebEngineCallback<const QString &> &)
extern "C" Q_DECL_EXPORT
void C_ZNK14QWebEnginePage11toPlainTextERK18QWebEngineCallbackIRK7QStringE(void *this_, QWebEngineCallback<const QString &>* resultCallback) {
  ((QWebEnginePage*)this_)->toPlainText(*resultCallback);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:252
// [8] QString title()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage5titleEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:253
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QWebEnginePage*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:254
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage3urlEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:255
// [8] QUrl requestedUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage12requestedUrlEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->requestedUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:256
// [8] QUrl iconUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage7iconUrlEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->iconUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:257
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage4iconEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:259
// [8] qreal zoomFactor()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QWebEnginePage10zoomFactorEv(void *this_) {
  return (qreal)((QWebEnginePage*)this_)->zoomFactor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:260
// [-2] void setZoomFactor(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13setZoomFactorEd(void *this_, qreal factor) {
  ((QWebEnginePage*)this_)->setZoomFactor(factor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:262
// [16] QPointF scrollPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage14scrollPositionEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->scrollPosition();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:263
// [16] QSizeF contentsSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage12contentsSizeEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->contentsSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:265
// [-2] void runJavaScript(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13runJavaScriptERK7QString(void *this_, QString* scriptSource) {
  ((QWebEnginePage*)this_)->runJavaScript(*scriptSource);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:266
// [-2] void runJavaScript(const QString &, quint32)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13runJavaScriptERK7QStringj(void *this_, QString* scriptSource, quint32 worldId) {
  ((QWebEnginePage*)this_)->runJavaScript(*scriptSource, worldId);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:271
// [-2] void runJavaScript(const QString &, const QWebEngineCallback<const QVariant &> &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13runJavaScriptERK7QStringRK18QWebEngineCallbackIRK8QVariantE(void *this_, QString* scriptSource, QWebEngineCallback<const QVariant &>* resultCallback) {
  ((QWebEnginePage*)this_)->runJavaScript(*scriptSource, *resultCallback);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:272
// [-2] void runJavaScript(const QString &, quint32, const QWebEngineCallback<const QVariant &> &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13runJavaScriptERK7QStringjRK18QWebEngineCallbackIRK8QVariantE(void *this_, QString* scriptSource, quint32 worldId, QWebEngineCallback<const QVariant &>* resultCallback) {
  ((QWebEnginePage*)this_)->runJavaScript(*scriptSource, worldId, *resultCallback);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:274
// [8] QWebEngineScriptCollection & scripts()
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEnginePage7scriptsEv(void *this_) {
  auto& rv = ((QWebEnginePage*)this_)->scripts();
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:275
// [8] QWebEngineSettings * settings()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage8settingsEv(void *this_) {
  return (void*)((QWebEnginePage*)this_)->settings();
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:277
// [8] QWebChannel * webChannel()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage10webChannelEv(void *this_) {
  return (void*)((QWebEnginePage*)this_)->webChannel();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:278
// [-2] void setWebChannel(QWebChannel *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13setWebChannelEP11QWebChannel(void *this_, QWebChannel * arg0) {
  ((QWebEnginePage*)this_)->setWebChannel(arg0);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:279
// [-2] void setWebChannel(QWebChannel *, uint)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13setWebChannelEP11QWebChannelj(void *this_, QWebChannel * arg0, uint worldId) {
  ((QWebEnginePage*)this_)->setWebChannel(arg0, worldId);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:280
// [16] QColor backgroundColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage15backgroundColorEv(void *this_) {
  auto rv = ((QWebEnginePage*)this_)->backgroundColor();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:281
// [-2] void setBackgroundColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage18setBackgroundColorERK6QColor(void *this_, QColor* color) {
  ((QWebEnginePage*)this_)->setBackgroundColor(*color);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:283
// [-2] void save(const QString &, QWebEngineDownloadItem::SavePageFormat)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZNK14QWebEnginePage4saveERK7QStringN22QWebEngineDownloadItem14SavePageFormatE(void *this_, QString* filePath, QWebEngineDownloadItem::SavePageFormat format) {
  ((QWebEnginePage*)this_)->save(*filePath, format);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:286
// [1] bool isAudioMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QWebEnginePage12isAudioMutedEv(void *this_) {
  return (bool)((QWebEnginePage*)this_)->isAudioMuted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:287
// [-2] void setAudioMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage13setAudioMutedEb(void *this_, bool muted) {
  ((QWebEnginePage*)this_)->setAudioMuted(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:288
// [1] bool recentlyAudible()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QWebEnginePage15recentlyAudibleEv(void *this_) {
  return (bool)((QWebEnginePage*)this_)->recentlyAudible();
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:290
// [-2] void printToPdf(const QString &, const QPageLayout &)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage10printToPdfERK7QStringRK11QPageLayout(void *this_, QString* filePath, QPageLayout* layout) {
  ((QWebEnginePage*)this_)->printToPdf(*filePath, *layout);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:294
// [-2] void printToPdf(const QWebEngineCallback<const QByteArray &> &, const QPageLayout &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage10printToPdfERK18QWebEngineCallbackIRK10QByteArrayERK11QPageLayout(void *this_, QWebEngineCallback<const QByteArray &>* resultCallback, QPageLayout* layout) {
  ((QWebEnginePage*)this_)->printToPdf(*resultCallback, *layout);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:307
// [8] const QWebEngineContextMenuData & contextMenuData()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEnginePage15contextMenuDataEv(void *this_) {
  auto& rv = ((QWebEnginePage*)this_)->contextMenuData();
return new QWebEngineContextMenuData(rv);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:310
// [-2] void loadStarted()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage11loadStartedEv(void *this_) {
  ((QWebEnginePage*)this_)->loadStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:311
// [-2] void loadProgress(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage12loadProgressEi(void *this_, int progress) {
  ((QWebEnginePage*)this_)->loadProgress(progress);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:312
// [-2] void loadFinished(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage12loadFinishedEb(void *this_, bool ok) {
  ((QWebEnginePage*)this_)->loadFinished(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:314
// [-2] void linkHovered(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage11linkHoveredERK7QString(void *this_, QString* url) {
  ((QWebEnginePage*)this_)->linkHovered(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:315
// [-2] void selectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage16selectionChangedEv(void *this_) {
  ((QWebEnginePage*)this_)->selectionChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:316
// [-2] void geometryChangeRequested(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage23geometryChangeRequestedERK5QRect(void *this_, QRect* geom) {
  ((QWebEnginePage*)this_)->geometryChangeRequested(*geom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:317
// [-2] void windowCloseRequested()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage20windowCloseRequestedEv(void *this_) {
  ((QWebEnginePage*)this_)->windowCloseRequested();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:319
// [-2] void featurePermissionRequested(const QUrl &, QWebEnginePage::Feature)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage26featurePermissionRequestedERK4QUrlNS_7FeatureE(void *this_, QUrl* securityOrigin, QWebEnginePage::Feature feature) {
  ((QWebEnginePage*)this_)->featurePermissionRequested(*securityOrigin, feature);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:320
// [-2] void featurePermissionRequestCanceled(const QUrl &, QWebEnginePage::Feature)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage32featurePermissionRequestCanceledERK4QUrlNS_7FeatureE(void *this_, QUrl* securityOrigin, QWebEnginePage::Feature feature) {
  ((QWebEnginePage*)this_)->featurePermissionRequestCanceled(*securityOrigin, feature);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:321
// [-2] void fullScreenRequested(QWebEngineFullScreenRequest)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage19fullScreenRequestedE27QWebEngineFullScreenRequest(void *this_, QWebEngineFullScreenRequest* fullScreenRequest) {
  ((QWebEnginePage*)this_)->fullScreenRequested(*fullScreenRequest);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:323
// [-2] void authenticationRequired(const QUrl &, QAuthenticator *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage22authenticationRequiredERK4QUrlP14QAuthenticator(void *this_, QUrl* requestUrl, QAuthenticator * authenticator) {
  ((QWebEnginePage*)this_)->authenticationRequired(*requestUrl, authenticator);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:324
// [-2] void proxyAuthenticationRequired(const QUrl &, QAuthenticator *, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage27proxyAuthenticationRequiredERK4QUrlP14QAuthenticatorRK7QString(void *this_, QUrl* requestUrl, QAuthenticator * authenticator, QString* proxyHost) {
  ((QWebEnginePage*)this_)->proxyAuthenticationRequired(*requestUrl, authenticator, *proxyHost);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:326
// [-2] void renderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage23renderProcessTerminatedENS_30RenderProcessTerminationStatusEi(void *this_, QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
  ((QWebEnginePage*)this_)->renderProcessTerminated(terminationStatus, exitCode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:329
// [-2] void titleChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage12titleChangedERK7QString(void *this_, QString* title) {
  ((QWebEnginePage*)this_)->titleChanged(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:330
// [-2] void urlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage10urlChangedERK4QUrl(void *this_, QUrl* url) {
  ((QWebEnginePage*)this_)->urlChanged(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:331
// [-2] void iconUrlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage14iconUrlChangedERK4QUrl(void *this_, QUrl* url) {
  ((QWebEnginePage*)this_)->iconUrlChanged(*url);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:332
// [-2] void iconChanged(const QIcon &)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage11iconChangedERK5QIcon(void *this_, QIcon* icon) {
  ((QWebEnginePage*)this_)->iconChanged(*icon);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:334
// [-2] void scrollPositionChanged(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage21scrollPositionChangedERK7QPointF(void *this_, QPointF* position) {
  ((QWebEnginePage*)this_)->scrollPositionChanged(*position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:335
// [-2] void contentsSizeChanged(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage19contentsSizeChangedERK6QSizeF(void *this_, QSizeF* size) {
  ((QWebEnginePage*)this_)->contentsSizeChanged(*size);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:336
// [-2] void audioMutedChanged(bool)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage17audioMutedChangedEb(void *this_, bool muted) {
  ((QWebEnginePage*)this_)->audioMutedChanged(muted);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:337
// [-2] void recentlyAudibleChanged(bool)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage22recentlyAudibleChangedEb(void *this_, bool recentlyAudible) {
  ((QWebEnginePage*)this_)->recentlyAudibleChanged(recentlyAudible);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:339
// [-2] void pdfPrintingFinished(const QString &, bool)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEnginePage19pdfPrintingFinishedERK7QStringb(void *this_, QString* filePath, bool success) {
  ((QWebEnginePage*)this_)->pdfPrintingFinished(*filePath, success);
}
#endif // QT_VERSION >= 0x050900

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
