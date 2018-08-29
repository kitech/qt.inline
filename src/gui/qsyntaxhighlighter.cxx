//  header block begin
// since 0x040100
// /usr/include/qt/QtGui/qsyntaxhighlighter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsyntaxhighlighter.h>
#include <QtGui>
#include "callback_inherit.h"

// QSyntaxHighlighter is pure virtual: true
// QSyntaxHighlighter has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSyntaxHighlighter_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSyntaxHighlighter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSyntaxHighlighter_t qt_meta_stringdata_MyQSyntaxHighlighter = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQSyntaxHighlighter"
  },
  "MyQSyntaxHighlighter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSyntaxHighlighter[] = {
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
class Q_DECL_EXPORT MyQSyntaxHighlighter : public QSyntaxHighlighter {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSyntaxHighlighter::staticMetaObject,
  qt_meta_stringdata_MyQSyntaxHighlighter.data,
  qt_meta_data_MyQSyntaxHighlighter,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSyntaxHighlighter.stringdata0))
      return static_cast<void*>(this);
  return QSyntaxHighlighter::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSyntaxHighlighter() {}
// void QSyntaxHighlighter(QObject *)
MyQSyntaxHighlighter(QObject * parent) : QSyntaxHighlighter(parent) {}
// void QSyntaxHighlighter(QTextDocument *)
MyQSyntaxHighlighter(QTextDocument * parent) : QSyntaxHighlighter(parent) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void highlightBlock(const QString &)
  virtual void highlightBlock(const QString & text)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"highlightBlock", &handled, 1, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSyntaxHighlighter::highlightBlock(text);
  }
  }

};
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:77
// [-2] void highlightBlock(const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSyntaxHighlighter10metaObjectEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighter11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSyntaxHighlighter*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QSyntaxHighlighter11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSyntaxHighlighter*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighter2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSyntaxHighlighter::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighter6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSyntaxHighlighter::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:65
// [-2] void QSyntaxHighlighter(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighterC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSyntaxHighlighter*)(0);
  return  new MyQSyntaxHighlighter(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:66
// [-2] void QSyntaxHighlighter(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighterC2EP13QTextDocument(QTextDocument * parent) {
  auto _nilp = (MyQSyntaxHighlighter*)(0);
  return  new MyQSyntaxHighlighter(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:67
// [-2] void ~QSyntaxHighlighter()
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighterD2Ev(void *this_) {
  delete (QSyntaxHighlighter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:69
// [-2] void setDocument(QTextDocument *)
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter11setDocumentEP13QTextDocument(void *this_, QTextDocument * doc) {
  ((QSyntaxHighlighter*)this_)->setDocument(doc);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:70
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSyntaxHighlighter8documentEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->document();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:73
// [-2] void rehighlight()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter11rehighlightEv(void *this_) {
  ((QSyntaxHighlighter*)this_)->rehighlight();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:74
// [-2] void rehighlightBlock(const QTextBlock &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter16rehighlightBlockERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QSyntaxHighlighter*)this_)->rehighlightBlock(*block);
}
#endif // QT_VERSION >= 0x040600

//  main block end
