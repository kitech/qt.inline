//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qopenglshaderprogram.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglshaderprogram.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLShader is pure virtual: false
// QOpenGLShader has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQOpenGLShader_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLShader_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLShader_t qt_meta_stringdata_MyQOpenGLShader = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQOpenGLShader"
  },
  "MyQOpenGLShader"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLShader[] = {
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
class Q_DECL_EXPORT MyQOpenGLShader : public QOpenGLShader {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QOpenGLShader::staticMetaObject,
  qt_meta_stringdata_MyQOpenGLShader.data,
  qt_meta_data_MyQOpenGLShader,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQOpenGLShader.stringdata0))
      return static_cast<void*>(this);
  return QOpenGLShader::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QOpenGLShader::qt_metacall(_c, _id, _a);
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
  virtual ~MyQOpenGLShader() {}
// void QOpenGLShader(QOpenGLShader::ShaderType, QObject *)
MyQOpenGLShader(QFlags<QOpenGLShader::ShaderTypeBit> type_, QObject * parent) : QOpenGLShader(type_, parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:69
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLShader10metaObjectEv(void *this_) {
  return (void*)((QOpenGLShader*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:69
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLShader11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLShader*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:69
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QOpenGLShader11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLShader*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:69
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLShader2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLShader::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:69
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLShader6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLShader::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:82
// [-2] void QOpenGLShader(QOpenGLShader::ShaderType, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLShaderC2E6QFlagsINS_13ShaderTypeBitEEP7QObject(QFlags<QOpenGLShader::ShaderTypeBit> type_, QObject * parent) {
  return  new MyQOpenGLShader(type_, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:83
// [-2] void ~QOpenGLShader()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLShaderD2Ev(void *this_) {
  delete (QOpenGLShader*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:85
// [4] QOpenGLShader::ShaderType shaderType()
extern "C" Q_DECL_EXPORT
QOpenGLShader::ShaderType C_ZNK13QOpenGLShader10shaderTypeEv(void *this_) {
  return (QOpenGLShader::ShaderType)((QOpenGLShader*)this_)->shaderType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:87
// [1] bool compileSourceCode(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLShader17compileSourceCodeEPKc(void *this_, const char * source) {
  return (bool)((QOpenGLShader*)this_)->compileSourceCode(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:88
// [1] bool compileSourceCode(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLShader17compileSourceCodeERK10QByteArray(void *this_, QByteArray* source) {
  return (bool)((QOpenGLShader*)this_)->compileSourceCode(*source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:89
// [1] bool compileSourceCode(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLShader17compileSourceCodeERK7QString(void *this_, QString* source) {
  return (bool)((QOpenGLShader*)this_)->compileSourceCode(*source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:90
// [1] bool compileSourceFile(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLShader17compileSourceFileERK7QString(void *this_, QString* fileName) {
  return (bool)((QOpenGLShader*)this_)->compileSourceFile(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:92
// [8] QByteArray sourceCode()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLShader10sourceCodeEv(void *this_) {
  auto rv = ((QOpenGLShader*)this_)->sourceCode();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:94
// [1] bool isCompiled()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QOpenGLShader10isCompiledEv(void *this_) {
  return (bool)((QOpenGLShader*)this_)->isCompiled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:95
// [8] QString log()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLShader3logEv(void *this_) {
  auto rv = ((QOpenGLShader*)this_)->log();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:97
// [4] GLuint shaderId()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK13QOpenGLShader8shaderIdEv(void *this_) {
  return (GLuint)((QOpenGLShader*)this_)->shaderId();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:99
// [1] bool hasOpenGLShaders(QOpenGLShader::ShaderType, QOpenGLContext *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLShader16hasOpenGLShadersE6QFlagsINS_13ShaderTypeBitEEP14QOpenGLContext(QFlags<QOpenGLShader::ShaderTypeBit> type_, QOpenGLContext * context) {
  return (bool)QOpenGLShader::hasOpenGLShaders(type_, context);
}

//  main block end
